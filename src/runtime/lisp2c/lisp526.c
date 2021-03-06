/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void copy_dispatch_macro_character(CL_FORM *base)
{
	LOAD_NIL(SYMVAL(Slisp, 447));	/* *READTABLE-UNCHANGED* */
	if(CL_CONSP(ARG(0)))
	{
		COPY(GET_CAR(ARG(0)), ARG(3));
	}
	else
	{
		if(CL_TRUEP(ARG(0)))
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(3));	/* ~a is not a list */
			COPY(ARG(0), ARG(4));
			Ferror(ARG(3), 2);
		}
		else
		{
			COPY(ARG(0), ARG(3));
		}
	}
	if(CL_CONSP(ARG(0)))
	{
		COPY(GET_CDR(ARG(0)), ARG(4));
	}
	else
	{
		if(CL_TRUEP(ARG(0)))
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(4));	/* ~a is not a list */
			COPY(ARG(0), ARG(5));
			Ferror(ARG(4), 2);
		}
		else
		{
			COPY(ARG(0), ARG(4));
		}
	}
	LOAD_NIL(ARG(5));
	COPY(ARG(1), ARG(6));
	readtable_syntax(ARG(6));
	if(CL_CHARP(ARG(3)))
	{
		COPY(ARG(3), ARG(7));
	}
	else
	{
		COPY(SYMVAL(Slisp, 58), ARG(7));	/* WRONG_TYPE */
		COPY(ARG(3), ARG(8));
		LOAD_SYMBOL(SYMBOL(Slisp, 18), ARG(9));	/* CHARACTER */
		Ferror(ARG(7), 3);
	}
	rt_char_code(ARG(7));
	LOAD_BOOL(CL_SMVECP(ARG(6)), ARG(8));
	if(CL_TRUEP(ARG(8)))
	{
		goto THEN1;
	}
	else
	{
		COPY(ARG(6), ARG(9));
		LOAD_SYMBOL(SYMBOL(Slisp, 150), ARG(10));	/* COMPLEX-VECTOR */
		rt_struct_typep(ARG(9));
	}
	if(CL_TRUEP(ARG(9)))
	{
		THEN1:;
	}
	else
	{
		COPY(SYMVAL(Slisp, 58), ARG(8));	/* WRONG_TYPE */
		COPY(ARG(6), ARG(9));
		LOAD_SYMBOL(SYMBOL(Slisp, 47), ARG(10));	/* VECTOR */
		Ferror(ARG(8), 3);
	}
	Frow_major_aref(ARG(6));
	if(CL_CONSP(ARG(6)))
	{
		COPY(GET_CDR(ARG(6)), ARG(6));
	}
	else
	{
		if(CL_TRUEP(ARG(6)))
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(7));	/* ~a is not a list */
			COPY(ARG(6), ARG(8));
			Ferror(ARG(7), 2);
		}
		else
		{
			LOAD_NIL(ARG(6));
		}
	}
	COPY(ARG(3), ARG(7));
	COPY(ARG(6), ARG(8));
	COPY(ARG(2), ARG(9));
	make_dispatch_macro_character1(ARG(7));
	COPY(ARG(3), ARG(6));
	COPY(ARG(2), ARG(7));
	readtable_dispatch(ARG(7));
	LOAD_NIL(ARG(8));
	LOAD_NIL(ARG(9));
	LOAD_NIL(ARG(10));
	assoc1(ARG(6));
	if(CL_CONSP(ARG(6)))
	{
		COPY(GET_CDR(ARG(6)), ARG(5));
	}
	else
	{
		if(CL_TRUEP(ARG(6)))
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(5));	/* ~a is not a list */
			Ferror(ARG(5), 2);
		}
		else
		{
			LOAD_NIL(ARG(5));
		}
	}
	COPY(SYMVAL(Slisp, 12), ARG(6));	/* CHAR-CODE-LIMIT */
	LOAD_SMALLFIXNUM(0, ARG(7));
	M1_1:;
	COPY(ARG(7), ARG(8));
	COPY(ARG(6), ARG(9));
	Fge(ARG(8), 2);
	if(CL_TRUEP(ARG(8)))
	{
		LOAD_NIL(ARG(0));
		goto RETURN1;
	}
	LOAD_BOOL(CL_SMVECP(ARG(4)), ARG(8));
	if(CL_TRUEP(ARG(8)))
	{
		goto THEN2;
	}
	else
	{
		COPY(ARG(4), ARG(9));
		LOAD_SYMBOL(SYMBOL(Slisp, 150), ARG(10));	/* COMPLEX-VECTOR */
		rt_struct_typep(ARG(9));
	}
	if(CL_TRUEP(ARG(9)))
	{
		THEN2:;
	}
	else
	{
		COPY(SYMVAL(Slisp, 58), ARG(8));	/* WRONG_TYPE */
		COPY(ARG(4), ARG(9));
		LOAD_SYMBOL(SYMBOL(Slisp, 47), ARG(10));	/* VECTOR */
		Ferror(ARG(8), 3);
	}
	COPY(ARG(4), ARG(8));
	COPY(ARG(7), ARG(9));
	Frow_major_aref(ARG(8));
	COPY(ARG(8), ARG(9));
	COPY(ARG(5), ARG(10));
	COPY(ARG(7), ARG(11));
	rt_set_vref(ARG(9));
	F1plus(ARG(7));
	goto M1_1;
	RETURN1:;
}
