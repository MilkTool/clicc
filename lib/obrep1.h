/*------------------------------------------------------------------------------
 * CLiCC: The Common Lisp to C Compiler
 * Copyright (C) 1994 Wolfgang Goerigk, Ulrich Hoffmann, Heinz Knutzen 
 * Christian-Albrechts-Universitaet zu Kiel, Germany
 *------------------------------------------------------------------------------
 * CLiCC has been developed as part of the APPLY research project,
 * funded by the German Ministry of Research and Technology.
 * 
 * CLiCC is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * CLiCC is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License in file COPYING for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *------------------------------------------------------------------------------
 * Funktion : obrep1.h - datenrepr�sentationsspezifisch
 *
 * $Revision: 1.33 $
 * $Id: obrep1.h,v 1.33 1995/03/08 14:50:45 wg Exp $
 *----------------------------------------------------------------------------*/


/*------------------------------------------------------------------------------
 * Werte f�r UNBOUND, NIL und T
 *----------------------------------------------------------------------------*/
#define UNBOUND_VALUE  0
#define NIL_VALUE      0
#define T_VALUE        1

/*------------------------------------------------------------------------------
 * Datenstruktur der LISP-Objekte
 *----------------------------------------------------------------------------*/
typedef int TAG;
typedef struct clx_form CL_FORM;
struct clx_form
{
   TAG tag;
   union
   {
      long i;
      double *fl;
      unsigned long ch;         /* Wichtig, kein 'char' nehmen ! (s.u.) */
      long *i_ptr;
      char *ch_ptr;
      CL_FORM *form;
      CL_FORM *symbol;
      FILE *cfile;
      CLOSURE_FUN *fun;
      DOWN_FUNARG *dfarg;
      GLOBAL_FUNARG *gfarg;
   } val;
};


/*------------------------------------------------------------------------------
 * Datenstruktur und Makros zum Initialisieren von LISP-Objekten.
 *
 * Es mu� gelten sizeof(long) == sizeof( Komponenten von CL_FORM ),
 * sonst kann fehlerhafter Code erzeugt werden.
 *          CL_FORM          CL_INIT
 *       long: |----|,    long:   |----|
 *       PTR:  |------|   PTR:  |------|
 *       char: |-|        char:      |-|
 *----------------------------------------------------------------------------*/
typedef struct
{
   TAG tag;
   long val;
} CL_INIT;
   

/*------------------------------------------------------------------------------
 * Konstruktoren f�r Konstantendefinitionen
 *----------------------------------------------------------------------------*/
#define END_SYMDEF  0           /* Endmarkierung einer Symboltabelle */
#define IS_END_SYMDEF(x)        (TYPE_OF(x) == END_SYMDEF)

#define MAKE_NIL                { CL_NIL, (long)NIL_VALUE }
#define MAKE_UNBOUND            { CL_UNBOUND, (long)UNBOUND_VALUE }
#define MAKE_FIXNUM(num)        { CL_FIXNUM, (long)num }
#define MAKE_FLOAT(flptr)       { CL_FLOAT, (long)flptr }
#define MAKE_CHAR(chr)          { CL_CHAR,  (long)chr }

#define MAKE_STRING(len, str)\
   { CL_FIXNUM, len },\
   { RT_CHAR_PTR, (long)str }

#define MAKE_SYMBOL(len, str, val, pkg)\
   NORMAL_SYM, MAKE_NIL, val, pkg, MAKE_STRING(len, str)

#define MAKE_CONST_SYMBOL(len, str, val, pkg)\
   CONST_SYM, MAKE_NIL, val, pkg, MAKE_STRING(len, str)

#define MAKE_CLASS(name, cpl, slotnum, slotinfo)\
   MAKE_FIXNUM(5),\
   MAKE_NIL,\
   MAKE_SYMREF(name),\
   cpl,\
   MAKE_FIXNUM(slotnum),\
   slotinfo

#define MAKE_CONS
#define MAKE_VECTOR(sz)         MAKE_FIXNUM(sz)
#define MAKE_ARRAY(rank, dims, sz)\
   { rank, (long)dims },\
   MAKE_FIXNUM(sz)
#define MAKE_STRUCT(sz, type)   MAKE_FIXNUM(sz), type

#define MAKE_STRREF(str)        { CL_SMSTR, (long)str }
#define MAKE_SYMREF(sym)        { CL_SYMBOL, (long)sym }
#define MAKE_CLASSREF(class)    { CL_INSTANCE, (long)class }
#define MAKE_CONSREF(list)      { CL_CONS, (long)list }
#define MAKE_VECREF(vec)        { CL_SMVEC_T, (long)vec }
#define MAKE_ARREF(ar)          { CL_SMAR_T, (long)ar }
#define MAKE_STRUCTREF(str)     { CL_STRUCT, (long)str }

#define MAKE_GLOBFUN(fun)       { CL_GLOBFUN, (long)fun }

#define CONST_SYM   MAKE_CHAR('T') /* Symbol ist konstant */
#define NORMAL_SYM  MAKE_NIL    /* Symbol ist ver�nderbar */


/*------------------------------------------------------------------------------
 * Vektortyp-Codes
 *----------------------------------------------------------------------------*/
#define VT_T          0
#define VT_FIXNUM     1
#define VT_FLOAT      2
#define VT_CHARACTER  3
#define VT_BIT        4

#define GET_VECTOR_CODE(loc)  (TYPE_OF(loc) - CL_SMVEC)

/*------------------------------------------------------------------------------
 * Definitionen der Datentypen von LISP-Objekten
 *----------------------------------------------------------------------------*/
#define CL_FIXNUM            1  /* number */
#define CL_FLOAT             2  /* number */
#define CL_CHAR              3

#define RT_FORM_PTR          4  /* Zeiger auf FORM-Array */
#define RT_FIXNUM_PTR        5  /* Zeiger auf FIXNUM-Array */
#define RT_FLOAT_PTR         6  /* Zeiger auf FLOAT-Array */
#define RT_CHAR_PTR          7  /* Zeiger auf CHAR-Array (String) */

#define CL_SYMBOL           13  /* symbol */
#define CL_NIL              14  /* symbol, list,          sequence */
#define CL_CONS             15  /*         list,          sequence */

#define CL_SMVEC            16 
#define CL_SMVEC_T          (CL_SMVEC+VT_T)
#define CL_SMVEC_FIXNUM     (CL_SMVEC+VT_FIXNUM)
#define CL_SMVEC_FLOAT      (CL_SMVEC+VT_FLOAT)
#define CL_SMVEC_CHARACTER  (CL_SMVEC+VT_CHARACTER)
#define CL_SMVEC_BIT        (CL_SMVEC+VT_BIT)

#define CL_SMSTR            CL_SMVEC_CHARACTER

#define CL_CLOSURE          32  /* function */
#define CL_DOWNFUN          33  /* function */
#define CL_GLOBFUN          34  /* function */

#define CL_CODE             37
#define CL_IND              38
#define CL_STRUCT           39  /* Structure */
#define CL_CFILE            41
#define CL_UNIQUE_TAG       42  /* fuer automatisch generierte CATCH-Tags */

#define CL_UNBOUND          43

#define CL_INSTANCE         50  /* CLOS Instanz */

#define CL_FOREIGN          51
/* hier stehen die weiteren Foreign-Tags: */
#include "foreign1.h"

/*------------------------------------------------------------------------------
 * Makros f�r den Zugriff auf die Komponenten eines LISP-Objektes
 *----------------------------------------------------------------------------*/
/* Tags */
#define TYPE_OF(loc)            ((loc)->tag)
#define SET_TAG(loc, value)     (TYPE_OF(loc) = (value))

/* Grundtypen */
#define GET_FORM(loc)           ((loc)->val.form)

#define GET_FIXNUM(loc)         ((loc)->val.i)
#define GET_FLOAT(loc)          (*((loc)->val.fl))
#define GET_CHAR(loc)           (unsigned char)((loc)->val.ch)

/* Pointer */
#define GET_FIXNUM_PTR(loc)     ((loc)->val.i_ptr)
#define GET_FLOAT_PTR(loc)      ((loc)->val.fl)
#define GET_CHAR_PTR(loc)       ((loc)->val.ch_ptr)
#define GET_BITS_PTR(loc)       ((loc)->val.i_ptr)

/* Listen */
#define GET_CAR(loc)            CAR(GET_FORM(loc))
#define GET_CDR(loc)            CDR(GET_FORM(loc))

/* Symbol */
#define GET_SYMBOL(loc)         ((loc)->val.symbol)

/* Funktionen */
#define GET_FUN(loc)            ((loc)->val.fun)
#define GET_DFARG(loc)          ((loc)->val.dfarg)
#define GET_GFARG(loc)          ((loc)->val.gfarg)

/* Rest */
#define INDIRECT(loc)           ((loc)->val.form)
#define GET_CFILE(loc)          ((loc)->val.cfile)

/*------------------------------------------------------------------------------
 * Pr�dikate zum Testen des Datentyps
 *----------------------------------------------------------------------------*/
#define CL_NILP(loc)       (TYPE_OF (loc) == CL_NIL)
#define CL_TRUEP(loc)      NOT(CL_NILP(loc))
#define CL_UNBOUNDP(loc)   (TYPE_OF (loc) == CL_UNBOUND)

#define CL_FIXNUMP(loc)    (TYPE_OF (loc) == CL_FIXNUM)
#define CL_FLOATP(loc)     (TYPE_OF (loc) == CL_FLOAT)
#define CL_CHARP(loc)      (TYPE_OF (loc) == CL_CHAR)
#define CL_SYMBOLP(loc)    (TYPE_OF (loc) == CL_SYMBOL)
#define CL_CONSP(loc)      (TYPE_OF (loc) == CL_CONS)
#define CL_ATOMP(loc)      (TYPE_OF (loc) != CL_CONS)
#define CL_SMVECP(loc)     (TYPE_OF(loc) >= CL_SMVEC_T &&\
                            TYPE_OF(loc) <= CL_SMVEC_BIT)
#define CL_SMVEC_T_P(loc)  (TYPE_OF(loc) == CL_SMVEC_T)
#define CL_SMVEC_BIT_P(loc)(TYPE_OF(loc) == CL_SMVEC_BIT)
#define CL_SMSTRP(loc)     (TYPE_OF (loc) == CL_SMSTR)
#define CL_CLOSUREP(loc)   (TYPE_OF (loc) == CL_CLOSURE)
#define CL_GLOBFUNP(loc)   (TYPE_OF (loc) == CL_GLOBFUN)
#define CL_DOWNFUNP(loc)   (TYPE_OF (loc) == CL_DOWNFUN)
#define CL_INSTANCEP(loc)  (TYPE_OF (loc) == CL_INSTANCE)
#define CL_STRUCTP(loc)    (TYPE_OF (loc) == CL_STRUCT)

#define CL_NUMBERP(obj) (CL_FIXNUMP(obj) || CL_FLOATP(obj))
#define CL_LISTP(loc) (CL_CONSP(loc) || CL_NILP(loc))
#define CL_FUNCTIONP(loc) \
   (CL_CLOSUREP(loc) || CL_DOWNFUNP(loc) || CL_GLOBFUNP(loc))

/*------------------------------------------------------------------------------
 * Makros zum Laden der LISP-Objekte
 *----------------------------------------------------------------------------*/
#define LOAD_NIL(loc)          (SET_TAG(loc, CL_NIL),GET_FORM(loc) = NIL_VALUE)
#define LOAD_T(loc)            LOAD_CHAR(loc, 'T', loc)
#define LOAD_UNBOUND(loc)      (SET_TAG(loc, CL_UNBOUND), \
                                GET_FORM(loc) = UNBOUND_VALUE)
#define LOAD_FIXNUM(top,num,loc) (SET_TAG(loc, CL_FIXNUM),GET_FIXNUM(loc)=(num))
#define LOAD_SMALLFIXNUM(num,loc) LOAD_FIXNUM(loc, num, loc)
#define LOAD_FLOAT(top,flptr,loc)(SET_TAG(loc, CL_FLOAT),(loc)->val.fl=(flptr))
#define LOAD_CHAR(top,chr,loc)   (SET_TAG(loc, CL_CHAR),((loc)->val.ch=(chr)))

#define LOAD_FORM_PTR(form, loc)   (SET_TAG(loc, RT_FORM_PTR),\
                                    GET_FORM(loc) = (form))
#define LOAD_FIXNUM_PTR(iptr, loc) (SET_TAG(loc, RT_FIXNUM_PTR),\
                                    GET_FIXNUM_PTR(loc) = (iptr))
#define LOAD_FLOAT_PTR(flptr, loc) (SET_TAG(loc, RT_FLOAT_PTR),\
                                    GET_FLOAT_PTR(loc) = (flptr))
#define LOAD_CHAR_PTR(chptr, loc)  (SET_TAG(loc, RT_CHAR_PTR),\
                                    GET_CHAR_PTR(loc) = (chptr))
#define LOAD_BITS_PTR(bptr, loc)   (SET_TAG(loc, RT_FIXNUM_PTR),\
                                    GET_FIXNUM_PTR(loc) = (bptr))
#define LOAD_CONS(cons, loc) (SET_TAG(loc, CL_CONS),GET_FORM(loc) = (cons))
#define LOAD_SYMBOL(sym, loc) (SET_TAG(loc, CL_SYMBOL),GET_FORM(loc) = (sym))

#define LOAD_CLASS(class, loc) (SET_TAG(loc, CL_INSTANCE),\
                                GET_FORM(loc) = (class))
#define LOAD_INSTANCE(vec, loc)     LOAD_CLASS(vector, loc)

#define LOAD_SMVEC(vec, tag, loc)  (SET_TAG(loc, (tag) + CL_SMVEC),\
                                    GET_FORM(loc) = (vec))
#define LOAD_SMSTR(strptr, loc)   (SET_TAG(loc, CL_SMSTR),\
                                   GET_FORM(loc) = (strptr))

#define LOAD_CODE(fun, loc)      (SET_TAG(loc, CL_CODE),GET_FUN(loc) = fun)
#define LOAD_IND(ptr, loc)       (SET_TAG(loc, CL_IND),GET_FORM(loc) = ptr)
#define LOAD_GLOBFUN(ptr, loc)   (SET_TAG(loc, CL_GLOBFUN),GET_GFARG(loc) = ptr)
#define LOAD_DOWNFUN(ptr, loc)   (SET_TAG(loc, CL_DOWNFUN),GET_DFARG(loc) = ptr)
#define LOAD_CLOSURE(ptr, loc)   (SET_TAG(loc, CL_CLOSURE),GET_FORM(loc) = ptr)
#define LOAD_STRUCT(ptr, loc)    (SET_TAG(loc, CL_STRUCT),GET_FORM(loc) = ptr)
#define LOAD_CFILE(top,ptr,loc)  (SET_TAG(loc, CL_CFILE),GET_CFILE(loc) = ptr)
#define LOAD_UNIQUE_TAG(loc)     (SET_TAG(loc, CL_UNIQUE_TAG),\
                                  GET_FIXNUM(loc) = tag_counter++)

/*------------------------------------------------------------------------------
 * Aufbau von Symbolen
 *----------------------------------------------------------------------------*/
#define OFF_SYM_NAME            4
#define OFF_SYM_PLIST           1
#define OFF_SYM_VALUE           2
#define OFF_SYM_PACKAGE         3
#define OFF_SYM_CONSTFLAG       0

#define SYM_SIZE                6

#define SYM_PLIST(sym)          (GET_FORM(sym) + OFF_SYM_PLIST)
#define SYM_VALUE(sym)          (GET_FORM(sym) + OFF_SYM_VALUE)
#define SYM_PACKAGE(sym)        (GET_FORM(sym) + OFF_SYM_PACKAGE)
#define SYM_NAME(sym)           (GET_FORM(sym) + OFF_SYM_NAME)

#define GET_SYM_NAME(top,sym,loc) \
if(FO_CONSTANTq(GET_FORM(sym))) \
LOAD_SMSTR(SYM_NAME(sym), loc); \
else \
{ \
   CL_FORM *str = form_alloc(top, 2); \
   COPY(OFFSET(SYM_NAME(sym),0), str); \
   COPY(OFFSET(SYM_NAME(sym),1), str+1); \
   LOAD_SMSTR(str, loc); \
}

#define SYM_SET_NAME(name,sym)  COPY(OFFSET(name,0), OFFSET(SYM_NAME(sym),0));\
                                COPY(OFFSET(name,1), OFFSET(SYM_NAME(sym),1))

#define SYM_CONSTFLAG(sym)      (GET_FORM(sym) + OFF_SYM_CONSTFLAG)
#define SYM_IS_CONST(sym)       CL_TRUEP(SYM_CONSTFLAG(sym))
#define SYM_SET_CONST(sym)      LOAD_T(SYM_CONSTFLAG(sym))
#define SYM_SET_NORMAL(sym)     LOAD_NIL(SYM_CONSTFLAG(sym))

#define SYMBOL(base,index)  ((CL_FORM *)&base[SYM_SIZE * index])
#define SYMVAL(base,index)  ((CL_FORM *)&base[SYM_SIZE * index + OFF_SYM_VALUE])

/*------------------------------------------------------------------------------
 * Zugriff auf Klassen
 *----------------------------------------------------------------------------*/
#define CLASS_SIZE 6
#define CLASS(index) ((CL_FORM *)&classes[CLASS_SIZE * index])


/*------------------------------------------------------------------------------
 * Zugriff auf die Komponenten eines Strings / Vektors / Arrays
 *----------------------------------------------------------------------------*/
#define AR_SIZE(ar)          GET_FIXNUM(ar)
#define SET_AR_SIZE(sz, ar)  LOAD_FIXNUM(0, sz, ar)
#define AR_BASE(ar)          OFFSET(ar, 1)
#define AR_STRING(ar)        GET_CHAR_PTR(AR_BASE(ar))

#define FIXNUM_AR(ar)        GET_FIXNUM_PTR(AR_BASE(ar))
#define FLOAT_AR(ar)         GET_FLOAT_PTR(AR_BASE(ar))
#define CHAR_AR(ar)          GET_CHAR_PTR(AR_BASE(ar))
#define BIT_AR(ar)           GET_BITS_PTR(AR_BASE(ar))

/*------------------------------------------------------------------------------
 * Anzahl f�rs Tag notwendigen Bits im Heap
 *----------------------------------------------------------------------------*/
#define TAG_BITS 0

/*------------------------------------------------------------------------------
 * Makro f�r EQ und EQL-Funktion
 *----------------------------------------------------------------------------*/
#define EQ(x, y) (TYPE_OF(x) == TYPE_OF(y) && GET_FORM(x) == GET_FORM(y))

#define EQL(x, y) (EQ(x, y) || \
                   (CL_FLOATP(x) && CL_FLOATP(y) && \
                    GET_FLOAT(x) == GET_FLOAT(y)) || \
                   (CL_C_STRUCTURED_P(x) && CL_C_STRUCTURED_P(y) && \
                    GET_C_TYPESYMBOL(x) == GET_C_TYPESYMBOL(y) && \
                    GET_CHAR_PTR(OFFSET(GET_FORM(x), 1)) == \
                    GET_CHAR_PTR(OFFSET(GET_FORM(y), 1))))

/*------------------------------------------------------------------------------
 * Kopieren von statischen Variablen in den Heap.
 * Parameter: 1. Zeiger auf die statische Variable im Stack
 *            2. Zeiger auf Stack-Top
 *----------------------------------------------------------------------------*/
#define GEN_HEAPVAR(var, top) {              \
   CL_FORM *_heap_ptr = form_alloc(top, 1);  \
   COPY(var, _heap_ptr);                     \
   LOAD_IND(_heap_ptr, var);                 \
}


/*------------------------------------------------------------------------------
 * Closure auf Heap erzeugen und Kopf ausf�llen.
 *----------------------------------------------------------------------------*/
#define GEN_CLOSURE(ar, top, sz, code, ps) \
   CL_FORM *ar = form_alloc(top, sz);      \
   LOAD_FIXNUM(top, (sz) - 1, OFFSET(ar, 0));   \
   LOAD_CODE(code, OFFSET(ar, 1));         \
   LOAD_FIXNUM(top, ps, OFFSET(ar, 2))


/*------------------------------------------------------------------------------
 * Garbage-Collector-Funktion
 *----------------------------------------------------------------------------*/
#define SAVE_FORM(form)  save_form(form)


/*------------------------------------------------------------------------------
 * Anzahl der Bits, die f�r Bitvektoren in einer Fixnum genutzt werden
 *----------------------------------------------------------------------------*/
#define BITS_PER_FIXNUM (sizeof(long) * 8)


#define INIT_VEC_T(vec, size)       SET_AR_SIZE(size, vec)
#define LOAD_VEC_T(vec, loc)        (SET_TAG(loc,  CL_SMVEC_T),\
                                     GET_FORM(loc) = (vec))
#define INIT_VEC_FIXNUM(vec, size)  SET_AR_SIZE(size, vec)
#define LOAD_VEC_FIXNUM(vec, loc)   (SET_TAG(loc,  CL_SMVEC_FIXNUM),\
                                     GET_FORM(loc) = (vec))
#define INIT_VEC_FLOAT(vec, size)   SET_AR_SIZE(size, vec)
#define LOAD_VEC_FLOAT(vec, loc)    (SET_TAG(loc,  CL_SMVEC_FLOAT),\
                                     GET_FORM(loc) = (vec))
#define INIT_VEC_CHAR(vec, size)    SET_AR_SIZE(size, vec)
#define LOAD_VEC_CHAR(vec, loc)     (SET_TAG(loc,  CL_SMVEC_CHARACTER),\
                                     GET_FORM(loc) = (vec))
#define INIT_VEC_BIT(vec, size)     SET_AR_SIZE(size, vec)
#define LOAD_VEC_BIT(vec, loc)      (SET_TAG(loc,  CL_SMVEC_BIT),\
                                     GET_FORM(loc) = (vec))

#define INIT_INSTANCE(vec, size)    SET_AR_SIZE(size, vec)
#define INIT_STRUCT(vec, size)      SET_AR_SIZE(size, vec)

#define INIT_SYMBOL(sym, name) \
    LOAD_CHAR_PTR(AR_STRING(GET_FORM(name)), OFFSET(sym, OFF_SYM_NAME+1)); \
    INIT_VEC_CHAR(OFFSET(sym, OFF_SYM_NAME), AR_SIZE(GET_FORM(name))); \
    LOAD_NIL(OFFSET(sym, OFF_SYM_CONSTFLAG))

/*------------------------------------------------------------------------------
 * Funktionen f�r Zugriff auf optimierte Restparameter
 *----------------------------------------------------------------------------*/
#define LOCAL(x)  STACK(local, x)
#define REST_LENGTH(r, loc)  LOAD_FIXNUM(loc, local - (r), loc)
#define REST_CAR(r, loc)  if ((r) == local) LOAD_NIL(loc); else COPY(r, loc)
#define REST_CDR(r)  (((r) != local) ? (r) + 1: (r))
#define REST_APPLY(b, n, r)  rest_apply(b, n, (local - (r)), (r))
#define REST_NOT_EMPTY(r)  (local != (r))

/*------------------------------------------------------------------------------
 * CONSe
 *----------------------------------------------------------------------------*/
#define CONS_SIZE 2
#define CAR(lptr) (lptr)
#define CDR(lptr) ((lptr) + 1)
#define INIT_CONS(cons)
#define ALLOC_CONS(top,car,cdr,loc) { \
   CL_FORM *cons = form_alloc(top, CONS_SIZE); \
   INIT_CONS(cons); \
   COPY(car, CAR(cons)); \
   COPY(cdr, CDR(cons)); \
   LOAD_CONS(cons, loc); \
}

/*------------------------------------------------------------------------------
 * Abstraktionen
 *----------------------------------------------------------------------------*/
#define GEN_FLOAT(top,fl,loc) { \
   static double _float = (fl); \
   LOAD_FLOAT(top, &_float, loc); \
}
#define GEN_SMSTR(len,str,loc) { \
   CL_INIT local_string [] = { \
      MAKE_STRING(len,str); \
   }; \
   LOAD_SMSTR((CL_FORM *)local_string, loc); \
}
#define GEN_GLOBAL_FUNARG(name,fun,par) \
   GLOBAL_FUNARG name = { fun, par }

#define GEN_STATIC_GLOBAL_FUNARG(name,fun,par) \
   static GLOBAL_FUNARG name = { fun, par }

#define INIT_DOWN_FUNARG(name,_fun,_par,disp) \
   name.fun = (_fun); \
   name.par_spec = (_par); \
   name.display = (disp)

/*------------------------------------------------------------------------------
 * Datenstruktur f�r globale FUNARGs
 *----------------------------------------------------------------------------*/
struct global_funarg
{
   GLOBAL_FUN *fun;
   int par_spec;
};

/*------------------------------------------------------------------------------
 * Datenstruktur f�r DOWNward FUNctions
 *----------------------------------------------------------------------------*/
struct down_funarg
{
   LOCAL_FUN *fun;
   CL_FORM **display;
   int par_spec;
};

/*------------------------------------------------------------------------------
 * Zugriff auf die Komponenten einer Closure
 *----------------------------------------------------------------------------*/
#define GET_CLOSURE_CODE(closure)  (*(GET_FUN(GET_FORM(closure) + 1)))
#define GET_CLOSURE_PARSPEC(closure) ((int)GET_FIXNUM(GET_FORM(closure) + 2))

/*------------------------------------------------------------------------------
 * Zugriff auf die Komponenten eines Downfunargs
 *----------------------------------------------------------------------------*/

#define GET_DOWNFUN_CODE(ptr) (*(ptr->fun))
#define GET_DOWNFUN_PARSPEC(ptr) (ptr->par_spec)
#define GET_DOWNFUN_DISPLAY(ptr) (ptr->display)

/*------------------------------------------------------------------------------
 * Zugriff auf die Komponenten eines Globfunargs
 *----------------------------------------------------------------------------*/

#define GET_GLOBFUN_CODE(ptr) (*(ptr->fun))
#define GET_GLOBFUN_PARSPEC(ptr) (ptr->par_spec)

/*------------------------------------------------------------------------------
 * Aufruf einer speziellen Initialisierungsfunktion der obrepX
 *----------------------------------------------------------------------------*/
#define INIT_FUN

