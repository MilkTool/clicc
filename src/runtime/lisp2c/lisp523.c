/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void readtable_dispatch(CL_FORM *base)
{
	COPY(ARG(0), ARG(1));
	LOAD_SYMBOL(SYMBOL(Slisp, 410), ARG(2));	/* READTABLE */
	rt_struct_typep(ARG(1));
	if(CL_TRUEP(ARG(1)))
	{
		COPY(OFFSET(AR_BASE(GET_FORM(ARG(0))), 1 + 1), ARG(0));
	}
	else
	{
		COPY(SYMVAL(Slisp, 342), ARG(1));	/* NO_STRUCT */
		COPY(ARG(0), ARG(2));
		LOAD_SYMBOL(SYMBOL(Slisp, 410), ARG(3));	/* READTABLE */
		Ferror(ARG(1), 3);
	}
}
