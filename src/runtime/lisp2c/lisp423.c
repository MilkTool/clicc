/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void rt_set_struct_ref(CL_FORM *base)
{
	COPY(ARG(1), ARG(4));
	COPY(ARG(3), ARG(5));
	rt_struct_typep(ARG(4));
	if(CL_TRUEP(ARG(4)))
	{
		COPY(ARG(0), OFFSET(AR_BASE(GET_FORM(ARG(1))), GET_FIXNUM(ARG(2)) + 1));
	}
	else
	{
		COPY(SYMVAL(Slisp, 352), ARG(0));	/* NO_STRUCT */
		COPY(ARG(3), ARG(2));
		Ferror(ARG(0), 3);
	}
}
