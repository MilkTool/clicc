/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fset_svref(CL_FORM *base)
{
	if(CL_SMVEC_T_P(ARG(1)))
	{
	}
	else
	{
		COPY(SYMVAL(Slisp, 58), ARG(3));	/* WRONG_TYPE */
		COPY(ARG(1), ARG(4));
		LOAD_SYMBOL(SYMBOL(Slisp, 41), ARG(5));	/* SIMPLE-VECTOR */
		Ferror(ARG(3), 3);
	}
	if(CL_FIXNUMP(ARG(2)))
	{
		LOAD_SMALLFIXNUM(0, ARG(3));
		COPY(ARG(2), ARG(4));
		LOAD_FIXNUM(ARG(6), AR_SIZE(GET_FORM(ARG(1))), ARG(5));
		F1minus(ARG(5));
		Fle(ARG(3), 3);
	}
	else
	{
		goto ELSE1;
	}
	if(CL_TRUEP(ARG(3)))
	{
	}
	else
	{
		ELSE1:;
		COPY(SYMVAL(Slisp, 151), ARG(3));	/* OUT_OF_RANGE */
		COPY(ARG(2), ARG(4));
		LOAD_FIXNUM(ARG(6), AR_SIZE(GET_FORM(ARG(1))), ARG(5));
		Ferror(ARG(3), 3);
	}
	COPY(ARG(0), OFFSET(AR_BASE(GET_FORM(ARG(1))), GET_FIXNUM(ARG(2))));
}
