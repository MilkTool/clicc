/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Ppathname_directory(CL_FORM *base)
{
	COPY(ARG(0), ARG(1));
	LOAD_SYMBOL(SYMBOL(Slisp, 232), ARG(2));	/* PATHNAME */
	rt_struct_typep(ARG(1));
	if(CL_TRUEP(ARG(1)))
	{
		COPY(OFFSET(AR_BASE(GET_FORM(ARG(0))), 2 + 1), ARG(0));
	}
	else
	{
		COPY(SYMVAL(Slisp, 342), ARG(1));	/* NO_STRUCT */
		COPY(ARG(0), ARG(2));
		LOAD_SYMBOL(SYMBOL(Slisp, 232), ARG(3));	/* PATHNAME */
		Ferror(ARG(1), 3);
	}
}
