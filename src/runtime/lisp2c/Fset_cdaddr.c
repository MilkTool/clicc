/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fset_cdaddr(CL_FORM *base)
{
	Fcdr(ARG(1));
	Fcdr(ARG(1));
	Fcar(ARG(1));
	Fset_cdr(ARG(0));
}
