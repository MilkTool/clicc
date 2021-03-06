;;;-----------------------------------------------------------------------------
;;; CLiCC: The Common Lisp to C Compiler
;;; Copyright (C) 1994 Wolfgang Goerigk, Ulrich Hoffmann, Heinz Knutzen 
;;; Christian-Albrechts-Universitaet zu Kiel, Germany
;;;-----------------------------------------------------------------------------
;;; CLiCC has been developed as part of the APPLY research project,
;;; funded by the German Ministry of Research and Technology.
;;; 
;;; CLiCC is free software; you can redistribute it and/or modify
;;; it under the terms of the GNU General Public License as published by
;;; the Free Software Foundation; either version 2 of the License, or
;;; (at your option) any later version.
;;;
;;; CLiCC is distributed in the hope that it will be useful,
;;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;;; GNU General Public License in file COPYING for more details.
;;;
;;; You should have received a copy of the GNU General Public License
;;; along with this program; if not, write to the Free Software
;;; Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
;;;-----------------------------------------------------------------------------
;;; Funktion : Codegenerierung
;;;            - Initialisierung globaler Variablen
;;;            - Fehlerbehandlung
;;;            - Start der Codegenerierung
;;;
;;; $Revision: 1.82 $
;;; $Id: cgmain.lisp,v 1.82 1994/11/22 14:49:16 hk Exp $
;;;-----------------------------------------------------------------------------

(in-package "CLICC")

(require "cgdefs")
(require "cgcode")
(require "cgconst")
(require "cgif")
(require "cgblock")
(require "cgvalues")
(require "cginline")
(require "cgvars")
(require "cgfuns")
(require "cgforeign")

;;------------------------------------------------------------------------------
;; Initialisierung globaler Variablen fuer die Codeerzeugung
;;------------------------------------------------------------------------------
(defun cg-reset-vars ()
  (setq *copy-source* nil)
  (setq *C-indent* 0)
  (setq *not-opened* nil)
  (setq *block-open* nil)
  (setq *special-count* 0)
  (setq *do-not-restore* ())
  (setq *C-bool* "0")                   ; notwendig, f�r Pr�dikat ohne Resultat
  (setq *cl-level* 0)
  (setq *closure* nil)
  (setq *C-line-count* 0)
  (setq *rlo-statistics-rest-funs* 0)
  (setq *rlo-statistics-rest-opt* 0)
  (setq *rlo-statistics-rest-usage* 0))

;;------------------------------------------------------------------------------
;; Berechnet aus dem Modulnamen den Namen der Initialisierungsfunktion
;;------------------------------------------------------------------------------
(defun calc-init-fun-name (module-name)
  (calc-C-name "I" module-name))

;;------------------------------------------------------------------------------
;; Die Funktion zum Starten der Codeerzeugung Der uebersetzte Code wird in
;; einer Datei <*OUT-FILENAME*>.c abgelegt.  Fuer die Funktionsdeklarationen
;; wird eine Datei mit dem Namen <*OUT-FILENAME*>.h angelegt.
;;------------------------------------------------------------------------------
(defun codegen (&aux header-file-pathname current-file-name)
  (cg-reset-vars)

  (let ((name (?name *module*)))
    (setf (?symbol-base *module*) (calc-symbol-base name))
    (setf (?named-const-base *module*) (calc-named-const-base name))
    (setf (?init-fun-name *module*) (calc-init-fun-name name)))

  ;; Relativadressen der Symbole bestimmen
  ;;--------------------------------------
  (let ((adr 0))
    (dolist (sym (?sym-list *module*))
      (setf (?adr sym) adr)
      (incf adr)))

  ;; Relativadressen der Klassen bestimmen und Slot Deskriptoren modifizieren
  ;;-------------------------------------------------------------------------
  (let ((adr 0))
    (dolist (class (?class-def-list *module*))
      (setf (?adr class) adr)
      (incf adr)
      (setf (?slot-descr-list class)
            (if (?slot-descr-list class)
                (transform-slot-desc-list (?slot-descr-list class))
                empty-list))))

  ;; Namen der entsprechenden C-Funktionen generieren.
  ;;--------------------------------------------------
  (dolist (fun (?fun-list *module*))
    (cg-set-C-name fun))
  (unless *inline-module*
    (setf (?adr (?toplevel-forms *module*)) (?init-fun-name *module*)))

  (labels
      ((c-file-message (pathname)
         (clicc-message "Writing file ~a" (namestring pathname)))
       (cg-include ()
         (C-Ln "/* This file was generated by CLiCC " *CLICC-Version*
               " [OBREP " *OBREP* "] */")
         (C-sysinclude "c_decl.h")
         ;; die folgenden Zeilen generieren Code, der das Programm abbricht,
         ;; wenn die in c_decl.h eingelese OBREP-Konstante nicht der zur
         ;; Uebersetzungszeit vorliegenden Konstante entspricht.
         ;;-----------------------------------------------------
         (C-Ln "#if OBREP != " *OBREP*)
         (C-Ln #\Tab "#error \"Wrong OBREP!\"")
         (C-Ln "#endif")
         (C-include "sys.h")
         (when (queue2list *ffi-include-queue*)
           (dolist (include-file (queue2list *ffi-include-queue*))
             (C-Ln "#include " include-file)))
         (when (queue2list *interface-file-queue*)
           (C-include (calc-include-file-name
                       (ffi-include-name (pathname-name *OUT-FILENAME*)))))
         (unless *inline-module*
           (dolist (imported-module (?loaded-modules *module*))
             (C-include (calc-include-file-name (?name imported-module)))))
         (C-include
          (calc-include-file-name (pathname-name header-file-pathname))))
       (cg-mem-sizes ()
         (C-empty-Ln)
         (C-DefMemSizes)
         (C-empty-Ln)))


    (setq header-file-pathname
          (make-pathname :type "h" :defaults *OUT-FILENAME*))
    (with-open-file (*C-file* header-file-pathname
                              :direction :output :if-exists :supersede)
      (c-file-message header-file-pathname)
      (C-empty-Ln)
      (unless *inline-module*
        (C-ExternArrayDecl "CL_INIT"
                           (CC-NameConc "K" (?named-const-base *module*)))
        (C-ExternArrayDecl "CL_INIT" (?symbol-base *module*)))

      ;; Deklarationen fuer die zu erzeugenden Funktionen generieren
      ;;------------------------------------------------------------
      (dolist (fun (?fun-list *module*))
        (C-fun-decl fun)
        (when (?closure fun)
          (C-ExternVarDecl "GLOBAL_FUNARG" (CC-NameConc "C" (?adr fun))))))


    (if *split-files*

        ;; Jede Lisp Funktion in eine eigene Datei.
        ;;-----------------------------------------
        (let ((base-name (pathname-name *OUT-FILENAME*))
              (dir (pathname-directory *OUT-FILENAME*))
              (count 0))
          (when (?named-const-list *module*)
            (setq current-file-name
                  (calc-fun-filename (?named-const-base *module*)
                                     base-name dir count))
            (with-open-file (*C-file* current-file-name
                                      :direction :output :if-exists :supersede)
              (c-file-message current-file-name)
              (cg-include)
              (cg-gen-named-constants)))
          (dolist (fun (?fun-list *module*))
            (incf count)
            (setq current-file-name
                  (calc-fun-filename (?adr fun) base-name dir count))
            (with-open-file (*C-file* current-file-name
                                      :direction :output :if-exists :supersede)
              (c-file-message current-file-name)
              (cg-include)
              (cg-defun fun)))

          (unless *inline-module*
            (let ((fun (?toplevel-forms *module*)))
              (incf count)
              (setq current-file-name
                    (calc-fun-filename (?adr fun) base-name dir count))
              (with-open-file (*C-file* current-file-name
                                        :direction :output
                                        :if-exists :supersede)
                (c-file-message current-file-name)
                (cg-include)
                (unless *module-compiler*
                  (cg-mem-sizes))
                (cg-defun fun :only-once *module-compiler*)
                (unless *module-compiler*
                  (cg-GC-function))
                (when (> *NERRORS* 0) (C-badcode))))

            (when (?class-def-list *module*)
              (clc-error "Split-option has not been implemented for classes."))

            (incf count)
            (setq current-file-name
                  (calc-fun-filename (?symbol-base *module*)
                                     base-name dir count))
            (with-open-file (*C-file* current-file-name
                                      :direction :output :if-exists :supersede)
              (c-file-message current-file-name)
              (cg-include)
              (cg-gen-symbols))))

        ;; Funktionen in eine Datei bzw. in mehrere Dateien, deren Laenge
        ;; *C-max-line-count*  nicht ueberschreitet.
        ;;------------------------------------------
        (labels ((write-C-file (fun-list count)
                   (block write-C-file
                     (setq current-file-name
                           (calc-next-C-filename *OUT-FILENAME* count))
                     (with-open-file
                         (*C-file* current-file-name
                                   :direction :output :if-exists :supersede)
                       (c-file-message current-file-name)
                       (setq *C-line-count* 0)
                       (cg-include)
                       (when (and (not *module-compiler*) (zerop count))
                         (cg-mem-sizes))
                       (when (zerop count)
                         (cg-gen-named-constants))
                       (loop
                        (when (null fun-list)
                          (unless *inline-module*
                            (cg-defun (?toplevel-forms *module*)
                                      :only-once *module-compiler*)
                            (unless *module-compiler*
                              (cg-GC-function))
                            (cg-gen-symbols)
                            (unless (not (?class-def-list *module*))
                              (cg-gen-classes)))
                          (when (> *NERRORS* 0) (C-badcode))
                          (return :ready))
                        (cg-defun (pop fun-list))
                        (when (and *C-max-line-count*
                                   (> *C-line-count* *C-max-line-count*))
                          (return fun-list)))))))

          (let ((count 0)               ; Zaehler fuer Dateinamen
                (fun-list (?fun-list *module*)))
            (loop
             (setq fun-list (write-C-file fun-list count))
             (when (eq :ready fun-list) (return))
             (incf count))))))

  ;; Statistik f�r Rest-Optimierung
  ;;-------------------------------
  (when (and *optimize* (plusp *rlo-statistics-rest-funs*))
    (clicc-message "~A rest-list optimizations in ~A of ~A functions."
                   *rlo-statistics-rest-usage*
                   *rlo-statistics-rest-opt*
                   *rlo-statistics-rest-funs*)
    (clicc-message-line)))

;;------------------------------------------------------------------------------
(defun transform-slot-desc-list (slot-desc-list)
  (let ((needs-fixnum-array nil)
        (needs-float-array nil))
    (labels ((get-rt-slot-info (slot-desc)
               (list (first (?initargs slot-desc))
                     (let ((init-form (?initform slot-desc)))
                       (cond
                         ((and (structured-literal-p init-form)
                               (not (equalp (?value init-form)
                                            "SECRET-UNBOUND-SLOT-VALUE")))
                          (when (?needs-fixnum-array init-form)
                            (setq needs-fixnum-array t))
                          (when (?needs-float-array init-form)
                            (setq needs-float-array t))
                          (?value (?initform slot-desc)))
                         (T init-form)))
                     (?symbol slot-desc))))
      
      (make-instance 'structured-literal
                     :value (mapcar #'get-rt-slot-info slot-desc-list)
                     :needs-fixnum-array needs-fixnum-array
                     :needs-float-array needs-float-array))))

;;------------------------------------------------------------------------------
;; Code fuer die Funktion, die bei einer Garbage Collection die Symbole des
;; Moduls traversiert.
;;------------------------------------------------------------------------------
(defun cg-GC-function ()
  (C-Ln)
  (C-Ln "void gc_main ()")
  (C-Blockstart)
  (dolist (imported-module (?loaded-modules *module*))
    (C-Call "gc_symbols" (?symbol-base imported-module)))
  (C-Call "gc_symbols" (?symbol-base *module*))
  (C-Blockend))

;;------------------------------------------------------------------------------
;; Berechnet aus dem Modulnamen den Namen der Include Datei
;;------------------------------------------------------------------------------
(defun calc-include-file-name (module-name)
  (concatenate 'string module-name ".h"))

;;------------------------------------------------------------------------------
;; Schreibt Fehlermeldung, erhoeht *NERRORS*
;;------------------------------------------------------------------------------
(defun cg-error (string &rest args)
  (incf *NERRORS*)
  (format *error-output* "Error in ~a: " *fun-name*)
  (apply #'format *error-output* string args)
  (terpri *error-output*)
  (terpri *error-output*))

;;------------------------------------------------------------------------------
(defmethod cg-form ((form progn-form))
  (mapc-progn-form-list (?form-list form)
                        #'(lambda (form)
                            (let ((*result-spec* nil))
                              (cg-form form)))
                        #'cg-form))

;;------------------------------------------------------------------------------
(provide "cgmain")
