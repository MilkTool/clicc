/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

CL_INIT Kparse_integer1[] =
{
	MAKE_STRING(18, "illegal integer ~S"),	/* 0 */
};

void parse_integer1(CL_FORM *base)
{
	LOAD_NIL(ARG(5));
	LOAD_NIL(ARG(6));
	LOAD_NIL(ARG(7));
	M2_1:;
	COPY(ARG(1), ARG(8));
	COPY(ARG(2), ARG(9));
	Fge(ARG(8), 2);
	if(CL_TRUEP(ARG(8)))
	{
		goto M1_1;
	}
	COPY(ARG(0), ARG(8));
	COPY(ARG(1), ARG(9));
	COPY(ARG(8), ARG(10));
	Fstringp(ARG(10));
	if(CL_TRUEP(ARG(10)))
	{
	}
	else
	{
		COPY(SYMVAL(Slisp, 58), ARG(10));	/* WRONG_TYPE */
		COPY(ARG(8), ARG(11));
		LOAD_SYMBOL(SYMBOL(Slisp, 44), ARG(12));	/* STRING */
		Ferror(ARG(10), 3);
	}
	COPY(ARG(8), ARG(10));
	COPY(ARG(9), ARG(11));
	Frow_major_aref(ARG(10));
	COPY(ARG(10), ARG(5));
	COPY(SYMVAL(Slisp, 454), ARG(8));	/* *READTABLE* */
	COPY(ARG(8), ARG(9));
	LOAD_SYMBOL(SYMBOL(Slisp, 420), ARG(10));	/* READTABLE */
	rt_struct_typep(ARG(9));
	if(CL_TRUEP(ARG(9)))
	{
		COPY(OFFSET(AR_BASE(GET_FORM(ARG(8))), 0 + 1), ARG(8));
	}
	else
	{
		COPY(SYMVAL(Slisp, 352), ARG(9));	/* NO_STRUCT */
		COPY(ARG(8), ARG(10));
		LOAD_SYMBOL(SYMBOL(Slisp, 420), ARG(11));	/* READTABLE */
		Ferror(ARG(9), 3);
	}
	if(CL_CHARP(ARG(5)))
	{
	}
	else
	{
		COPY(SYMVAL(Slisp, 58), ARG(9));	/* WRONG_TYPE */
		COPY(ARG(5), ARG(10));
		LOAD_SYMBOL(SYMBOL(Slisp, 18), ARG(11));	/* CHARACTER */
		Ferror(ARG(9), 3);
	}
	COPY(ARG(5), ARG(9));
	rt_char_code(ARG(9));
	LOAD_BOOL(CL_SMVECP(ARG(8)), ARG(10));
	if(CL_TRUEP(ARG(10)))
	{
		goto THEN1;
	}
	else
	{
		COPY(ARG(8), ARG(11));
		LOAD_SYMBOL(SYMBOL(Slisp, 150), ARG(12));	/* COMPLEX-VECTOR */
		rt_struct_typep(ARG(11));
	}
	if(CL_TRUEP(ARG(11)))
	{
		THEN1:;
	}
	else
	{
		COPY(SYMVAL(Slisp, 58), ARG(10));	/* WRONG_TYPE */
		COPY(ARG(8), ARG(11));
		LOAD_SYMBOL(SYMBOL(Slisp, 47), ARG(12));	/* VECTOR */
		Ferror(ARG(10), 3);
	}
	Frow_major_aref(ARG(8));
	if(CL_SYMBOLP(ARG(8)) && GET_SYMBOL(ARG(8)) == SYMBOL(Slisp, 462))	/* WHITESPACE */
	{
	}
	else
	{
		goto RETURN2;
	}
	goto M2_1;
	RETURN2:;
	if(CL_CHARP(ARG(5)) && GET_CHAR(ARG(5)) == '-')
	{
		F1plus(ARG(1));
	}
	else
	{
		if(CL_CHARP(ARG(5)) && GET_CHAR(ARG(5)) == '+')
		{
			F1plus(ARG(1));
		}
	}
	COPY(ARG(1), ARG(8));
	COPY(ARG(2), ARG(9));
	Fge(ARG(8), 2);
	if(CL_TRUEP(ARG(8)))
	{
		goto M1_1;
	}
	COPY(ARG(1), ARG(8));
	COPY(ARG(1), ARG(9));
	COPY(ARG(8), ARG(10));
	Fstringp(ARG(10));
	if(CL_TRUEP(ARG(10)))
	{
	}
	else
	{
		COPY(SYMVAL(Slisp, 58), ARG(10));	/* WRONG_TYPE */
		COPY(ARG(8), ARG(11));
		LOAD_SYMBOL(SYMBOL(Slisp, 44), ARG(12));	/* STRING */
		Ferror(ARG(10), 3);
	}
	Frow_major_aref(ARG(8));
	COPY(ARG(3), ARG(9));
	COPY(ARG(8), ARG(10));
	COPY(ARG(9), ARG(11));
	digit_char_p1(ARG(10));
	COPY(ARG(10), ARG(6));
	if(CL_TRUEP(ARG(6)))
	{
		F1plus(ARG(1));
		M3_1:;
		if(EQL(ARG(1), ARG(2)))
		{
			goto RETURN3;
		}
		COPY(ARG(0), ARG(8));
		COPY(ARG(1), ARG(9));
		COPY(ARG(8), ARG(10));
		Fstringp(ARG(10));
		if(CL_TRUEP(ARG(10)))
		{
		}
		else
		{
			COPY(SYMVAL(Slisp, 58), ARG(10));	/* WRONG_TYPE */
			COPY(ARG(8), ARG(11));
			LOAD_SYMBOL(SYMBOL(Slisp, 44), ARG(12));	/* STRING */
			Ferror(ARG(10), 3);
		}
		Frow_major_aref(ARG(8));
		COPY(ARG(3), ARG(9));
		COPY(ARG(8), ARG(7));
		COPY(ARG(9), ARG(8));
		digit_char_p1(ARG(7));
		if(CL_TRUEP(ARG(7)))
		{
		}
		else
		{
			goto RETURN3;
		}
		F1plus(ARG(1));
		COPY(ARG(3), ARG(8));
		COPY(ARG(6), ARG(9));
		Fmult(ARG(8), 2);
		COPY(ARG(7), ARG(9));
		Fplus(ARG(8), 2);
		COPY(ARG(8), ARG(6));
		goto M3_1;
		RETURN3:;
	}
	else
	{
		goto M1_1;
	}
	if(CL_TRUEP(ARG(4)))
	{
		COPY(ARG(6), ARG(0));
		COPY(ARG(1), &mv_buf[0]);
		mv_count = 2;
		goto RETURN1;
	}
	else
	{
		M4_1:;
		COPY(ARG(1), ARG(8));
		COPY(ARG(2), ARG(9));
		Fge(ARG(8), 2);
		if(CL_TRUEP(ARG(8)))
		{
			goto RETURN4;
		}
		COPY(ARG(0), ARG(8));
		COPY(ARG(1), ARG(9));
		COPY(ARG(8), ARG(10));
		Fstringp(ARG(10));
		if(CL_TRUEP(ARG(10)))
		{
		}
		else
		{
			COPY(SYMVAL(Slisp, 58), ARG(10));	/* WRONG_TYPE */
			COPY(ARG(8), ARG(11));
			LOAD_SYMBOL(SYMBOL(Slisp, 44), ARG(12));	/* STRING */
			Ferror(ARG(10), 3);
		}
		COPY(ARG(8), ARG(10));
		COPY(ARG(9), ARG(11));
		Frow_major_aref(ARG(10));
		COPY(ARG(10), ARG(5));
		COPY(SYMVAL(Slisp, 454), ARG(8));	/* *READTABLE* */
		COPY(ARG(8), ARG(9));
		LOAD_SYMBOL(SYMBOL(Slisp, 420), ARG(10));	/* READTABLE */
		rt_struct_typep(ARG(9));
		if(CL_TRUEP(ARG(9)))
		{
			COPY(OFFSET(AR_BASE(GET_FORM(ARG(8))), 0 + 1), ARG(8));
		}
		else
		{
			COPY(SYMVAL(Slisp, 352), ARG(9));	/* NO_STRUCT */
			COPY(ARG(8), ARG(10));
			LOAD_SYMBOL(SYMBOL(Slisp, 420), ARG(11));	/* READTABLE */
			Ferror(ARG(9), 3);
		}
		if(CL_CHARP(ARG(5)))
		{
		}
		else
		{
			COPY(SYMVAL(Slisp, 58), ARG(9));	/* WRONG_TYPE */
			COPY(ARG(5), ARG(10));
			LOAD_SYMBOL(SYMBOL(Slisp, 18), ARG(11));	/* CHARACTER */
			Ferror(ARG(9), 3);
		}
		COPY(ARG(5), ARG(9));
		rt_char_code(ARG(9));
		LOAD_BOOL(CL_SMVECP(ARG(8)), ARG(10));
		if(CL_TRUEP(ARG(10)))
		{
			goto THEN2;
		}
		else
		{
			COPY(ARG(8), ARG(11));
			LOAD_SYMBOL(SYMBOL(Slisp, 150), ARG(12));	/* COMPLEX-VECTOR */
			rt_struct_typep(ARG(11));
		}
		if(CL_TRUEP(ARG(11)))
		{
			THEN2:;
		}
		else
		{
			COPY(SYMVAL(Slisp, 58), ARG(10));	/* WRONG_TYPE */
			COPY(ARG(8), ARG(11));
			LOAD_SYMBOL(SYMBOL(Slisp, 47), ARG(12));	/* VECTOR */
			Ferror(ARG(10), 3);
		}
		Frow_major_aref(ARG(8));
		if(CL_SYMBOLP(ARG(8)) && GET_SYMBOL(ARG(8)) == SYMBOL(Slisp, 462))	/* WHITESPACE */
		{
		}
		else
		{
			goto M1_2;
		}
		goto M4_1;
		RETURN4:;
		COPY(ARG(6), ARG(0));
		COPY(ARG(1), &mv_buf[0]);
		mv_count = 2;
		goto RETURN1;
	}
	M1_1:;
	if(CL_TRUEP(ARG(4)))
	{
		LOAD_NIL(ARG(0));
		COPY(ARG(1), &mv_buf[0]);
		mv_count = 2;
		goto RETURN1;
	}
	M1_2:;
	LOAD_SMSTR((CL_FORM *)&Kparse_integer1[0], ARG(8));	/* illegal integer ~S */
	COPY(ARG(0), ARG(9));
	Ferror(ARG(8), 2);
	LOAD_NIL(ARG(0));
	RETURN1:;
}
