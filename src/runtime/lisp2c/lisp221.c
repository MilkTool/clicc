/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void set_complex_vector_fillptr(CL_FORM *base)
{
	LOAD_SMALLFIXNUM(3, ARG(2));
	COPY(ARG(1), ARG(3));
	LOAD_SYMBOL(SYMBOL(Slisp, 150), ARG(4));	/* COMPLEX-VECTOR */
	rt_struct_typep(ARG(3));
	if(CL_TRUEP(ARG(3)))
	{
		COPY(ARG(0), OFFSET(AR_BASE(GET_FORM(ARG(1))), GET_FIXNUM(ARG(2)) + 1));
	}
	else
	{
		COPY(SYMVAL(Slisp, 342), ARG(0));	/* NO_STRUCT */
		LOAD_SYMBOL(SYMBOL(Slisp, 150), ARG(2));	/* COMPLEX-VECTOR */
		Ferror(ARG(0), 3);
	}
}
