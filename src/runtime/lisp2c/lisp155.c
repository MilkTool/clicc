/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void vector_push_extend1(CL_FORM *base)
{
	COPY(ARG(1), ARG(3));
	LOAD_SYMBOL(SYMBOL(Slisp, 150), ARG(4));	/* COMPLEX-VECTOR */
	rt_struct_typep(ARG(3));
	if(CL_TRUEP(ARG(3)))
	{
		COPY(OFFSET(AR_BASE(GET_FORM(ARG(1))), 3 + 1), ARG(3));
	}
	else
	{
		COPY(SYMVAL(Slisp, 342), ARG(3));	/* NO_STRUCT */
		COPY(ARG(1), ARG(4));
		LOAD_SYMBOL(SYMBOL(Slisp, 150), ARG(5));	/* COMPLEX-VECTOR */
		Ferror(ARG(3), 3);
	}
	COPY(ARG(3), ARG(4));
	COPY(ARG(1), ARG(5));
	Farray_total_size(ARG(5));
	Fge(ARG(4), 2);
	if(CL_TRUEP(ARG(4)))
	{
		COPY(ARG(1), ARG(4));
		if(CL_TRUEP(ARG(2)))
		{
			COPY(ARG(1), ARG(5));
			Farray_total_size(ARG(5));
			COPY(ARG(2), ARG(6));
			Fplus(ARG(5), 2);
		}
		else
		{
			LOAD_SMALLFIXNUM(2, ARG(5));
			COPY(ARG(1), ARG(6));
			Farray_total_size(ARG(6));
			Fmult(ARG(5), 2);
		}
		LOAD_NIL(ARG(6));
		LOAD_NIL(ARG(7));
		LOAD_NIL(ARG(8));
		COPY(ARG(3), ARG(9));
		LOAD_NIL(ARG(10));
		LOAD_NIL(ARG(11));
		LOAD_SYMBOL(SYMBOL(Slisp, 101), ARG(12));	/* FILL-POINTER */
		COPY(ARG(3), ARG(13));
		Flist(ARG(12), 2);
		LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(13));	/* T */
		adjust_array1(ARG(4));
	}
	COPY(ARG(0), ARG(4));
	COPY(ARG(1), ARG(5));
	COPY(ARG(3), ARG(6));
	rt_set_vref(ARG(4));
	COPY(ARG(3), ARG(4));
	F1plus(ARG(4));
	LOAD_SMALLFIXNUM(3, ARG(5));
	COPY(ARG(1), ARG(6));
	LOAD_SYMBOL(SYMBOL(Slisp, 150), ARG(7));	/* COMPLEX-VECTOR */
	rt_struct_typep(ARG(6));
	if(CL_TRUEP(ARG(6)))
	{
		COPY(ARG(4), OFFSET(AR_BASE(GET_FORM(ARG(1))), GET_FIXNUM(ARG(5)) + 1));
	}
	else
	{
		COPY(SYMVAL(Slisp, 342), ARG(6));	/* NO_STRUCT */
		COPY(ARG(1), ARG(7));
		LOAD_SYMBOL(SYMBOL(Slisp, 150), ARG(8));	/* COMPLEX-VECTOR */
		Ferror(ARG(6), 3);
	}
	COPY(ARG(3), ARG(0));
}
