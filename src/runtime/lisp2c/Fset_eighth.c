/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fset_eighth(CL_FORM *base)
{
	COPY(ARG(0), ARG(2));
	LOAD_SMALLFIXNUM(7, ARG(3));
	COPY(ARG(1), ARG(4));
	Fset_nth(ARG(2));
	COPY(ARG(2), ARG(0));
}
