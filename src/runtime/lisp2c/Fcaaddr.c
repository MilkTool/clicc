/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fcaaddr(CL_FORM *base)
{
	Fcdr(ARG(0));
	Fcdr(ARG(0));
	Fcar(ARG(0));
	Fcar(ARG(0));
}
