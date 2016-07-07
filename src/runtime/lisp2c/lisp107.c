/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

extern CL_INIT XImake_dispatch_macro_character1[];
extern CL_INIT XFmake_dispatch_macro_character1[];
CL_INIT Kmake_dispatch_macro_character1[] =
{
	MAKE_STRING(89, "no ~S dispatch function defined for subchar ~S ~\n                           (with arg ~S)"),	/* 0 */
};

static void Z58_lambda(CL_FORM *base);

void make_dispatch_macro_character1(CL_FORM *base)
{
	LOAD_NIL(SYMVAL(Slisp, 447));	/* *READTABLE-UNCHANGED* */
	COPY(SYMVAL(Slisp, 12), ARG(3));	/* CHAR-CODE-LIMIT */
	LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(4));	/* T */
	LOAD_NIL(ARG(5));
	LOAD_NIL(ARG(6));
	LOAD_NIL(ARG(7));
	LOAD_NIL(ARG(8));
	LOAD_NIL(ARG(9));
	LOAD_SMALLFIXNUM(0, ARG(10));
	LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(11));	/* T */
	LOAD_NIL(ARG(12));
	make_array1(ARG(3));
	GEN_HEAPVAR(ARG(3), ARG(4));
	COPY(ARG(2), ARG(4));
	LOAD_SYMBOL(SYMBOL(Slisp, 410), ARG(5));	/* READTABLE */
	rt_struct_typep(ARG(4));
	if(CL_TRUEP(ARG(4)))
	{
		COPY(OFFSET(AR_BASE(GET_FORM(ARG(2))), 0 + 1), ARG(4));
	}
	else
	{
		COPY(SYMVAL(Slisp, 342), ARG(4));	/* NO_STRUCT */
		COPY(ARG(2), ARG(5));
		LOAD_SYMBOL(SYMBOL(Slisp, 410), ARG(6));	/* READTABLE */
		Ferror(ARG(4), 3);
	}
	if(CL_CHARP(ARG(0)))
	{
		COPY(ARG(0), ARG(5));
	}
	else
	{
		COPY(SYMVAL(Slisp, 58), ARG(5));	/* WRONG_TYPE */
		COPY(ARG(0), ARG(6));
		LOAD_SYMBOL(SYMBOL(Slisp, 18), ARG(7));	/* CHARACTER */
		Ferror(ARG(5), 3);
	}
	rt_char_code(ARG(5));
	{
		GEN_CLOSURE(array, ARG(6), 4, Z58_lambda, 2);
		COPY(ARG(3), &array[3]);
		LOAD_CLOSURE(array, ARG(6));
	}
	COPY(ARG(6), ARG(6));
	ALLOC_CONS(ARG(8), ARG(6), ARG(1), ARG(6));
	COPY(ARG(6), ARG(7));
	COPY(ARG(4), ARG(8));
	COPY(ARG(5), ARG(9));
	rt_set_vref(ARG(7));
	COPY(ARG(2), ARG(4));
	LOAD_SYMBOL(SYMBOL(Slisp, 410), ARG(5));	/* READTABLE */
	rt_struct_typep(ARG(4));
	if(CL_TRUEP(ARG(4)))
	{
		COPY(OFFSET(AR_BASE(GET_FORM(ARG(2))), 1 + 1), ARG(4));
	}
	else
	{
		COPY(SYMVAL(Slisp, 342), ARG(4));	/* NO_STRUCT */
		COPY(ARG(2), ARG(5));
		LOAD_SYMBOL(SYMBOL(Slisp, 410), ARG(6));	/* READTABLE */
		Ferror(ARG(4), 3);
	}
	COPY(ARG(0), ARG(5));
	COPY(ARG(4), ARG(6));
	LOAD_NIL(ARG(7));
	LOAD_NIL(ARG(8));
	LOAD_NIL(ARG(9));
	assoc1(ARG(5));
	COPY(ARG(5), ARG(4));
	if(CL_TRUEP(ARG(4)))
	{
		if(CL_CONSP(ARG(4)))
		{
			COPY(INDIRECT(ARG(3)), GET_CDR(ARG(4)));
		}
		else
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[231], ARG(5));	/* ~a is not a cons */
			COPY(ARG(4), ARG(6));
			Ferror(ARG(5), 2);
		}
	}
	else
	{
		ALLOC_CONS(ARG(7), ARG(0), INDIRECT(ARG(3)), ARG(5));
		COPY(ARG(2), ARG(6));
		LOAD_SYMBOL(SYMBOL(Slisp, 410), ARG(7));	/* READTABLE */
		rt_struct_typep(ARG(6));
		if(CL_TRUEP(ARG(6)))
		{
			COPY(OFFSET(AR_BASE(GET_FORM(ARG(2))), 1 + 1), ARG(6));
		}
		else
		{
			COPY(SYMVAL(Slisp, 342), ARG(6));	/* NO_STRUCT */
			COPY(ARG(2), ARG(7));
			LOAD_SYMBOL(SYMBOL(Slisp, 410), ARG(8));	/* READTABLE */
			Ferror(ARG(6), 3);
		}
		ALLOC_CONS(ARG(7), ARG(5), ARG(6), ARG(5));
		LOAD_SMALLFIXNUM(1, ARG(6));
		COPY(ARG(2), ARG(7));
		LOAD_SYMBOL(SYMBOL(Slisp, 410), ARG(8));	/* READTABLE */
		rt_struct_typep(ARG(7));
		if(CL_TRUEP(ARG(7)))
		{
			COPY(ARG(5), OFFSET(AR_BASE(GET_FORM(ARG(2))), GET_FIXNUM(ARG(6)) + 1));
		}
		else
		{
			COPY(SYMVAL(Slisp, 342), ARG(7));	/* NO_STRUCT */
			COPY(ARG(2), ARG(8));
			LOAD_SYMBOL(SYMBOL(Slisp, 410), ARG(9));	/* READTABLE */
			Ferror(ARG(7), 3);
		}
	}
	LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(0));	/* T */
}

static void Z58_lambda(CL_FORM *base)
{
	LOAD_NIL(ARG(3));
	COPY(ARG(1), ARG(4));
	LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(5));	/* T */
	LOAD_NIL(ARG(6));
	LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(7));	/* T */
	read_char1(ARG(4));
	COPY(ARG(4), ARG(5));
	LOAD_SMALLFIXNUM(10, ARG(6));
	digit_char_p1(ARG(5));
	LOAD_NIL(ARG(6));
	if(CL_TRUEP(ARG(5)))
	{
		COPY(ARG(5), ARG(3));
		M1_1:;
		COPY(ARG(1), ARG(7));
		COPY(ARG(7), ARG(8));
		LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(9));	/* T */
		LOAD_NIL(ARG(10));
		LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(11));	/* T */
		read_char1(ARG(8));
		COPY(ARG(8), ARG(4));
		COPY(ARG(4), ARG(7));
		LOAD_SMALLFIXNUM(10, ARG(8));
		COPY(ARG(7), ARG(9));
		COPY(ARG(8), ARG(10));
		digit_char_p1(ARG(9));
		COPY(ARG(9), ARG(5));
		if(CL_TRUEP(ARG(5)))
		{
		}
		else
		{
			if(CL_TRUEP(SYMVAL(Slisp, 408)))	/* *READ-SUPPRESS* */
			{
				LOAD_NIL(ARG(3));
			}
			goto RETURN1;
		}
		COPY(ARG(5), ARG(7));
		LOAD_SMALLFIXNUM(10, ARG(8));
		COPY(ARG(3), ARG(9));
		Fmult(ARG(8), 2);
		Fplus(ARG(7), 2);
		COPY(ARG(7), ARG(3));
		goto M1_1;
		RETURN1:;
	}
	COPY(INDIRECT(GET_FORM(ARG(0)) + 3), ARG(7));
	COPY(ARG(4), ARG(8));
	if(CL_CHARP(ARG(8)))
	{
		COPY(ARG(8), ARG(9));
	}
	else
	{
		COPY(SYMVAL(Slisp, 58), ARG(9));	/* WRONG_TYPE */
		COPY(ARG(8), ARG(10));
		LOAD_SYMBOL(SYMBOL(Slisp, 18), ARG(11));	/* CHARACTER */
		Ferror(ARG(9), 3);
	}
	rt_char_upcase(ARG(9));
	COPY(ARG(9), ARG(8));
	rt_char_code(ARG(8));
	COPY(ARG(7), ARG(9));
	LOAD_BOOL(CL_SMVECP(ARG(9)), ARG(10));
	if(CL_TRUEP(ARG(10)))
	{
		goto THEN1;
	}
	else
	{
		COPY(ARG(9), ARG(11));
		COPY(ARG(11), ARG(12));
		LOAD_SYMBOL(SYMBOL(Slisp, 150), ARG(13));	/* COMPLEX-VECTOR */
		rt_struct_typep(ARG(12));
	}
	if(CL_TRUEP(ARG(12)))
	{
		THEN1:;
	}
	else
	{
		COPY(SYMVAL(Slisp, 58), ARG(9));	/* WRONG_TYPE */
		COPY(ARG(7), ARG(10));
		LOAD_SYMBOL(SYMBOL(Slisp, 47), ARG(11));	/* VECTOR */
		Ferror(ARG(9), 3);
	}
	COPY(ARG(7), ARG(6));
	COPY(ARG(8), ARG(7));
	Frow_major_aref(ARG(6));
	if(CL_TRUEP(ARG(6)))
	{
	}
	else
	{
		LOAD_SMSTR((CL_FORM *)&Kmake_dispatch_macro_character1[0], ARG(7));	/* no ~S dispatch function defined for subchar ~S ~
                           (with arg ~S) */
		COPY(ARG(2), ARG(8));
		COPY(ARG(4), ARG(9));
		COPY(ARG(3), ARG(10));
		Ferror(ARG(7), 4);
	}
	COPY(ARG(6), ARG(7));
	COPY(ARG(1), ARG(8));
	COPY(ARG(4), ARG(9));
	COPY(ARG(3), ARG(10));
	Ffuncall(ARG(7), 4);
	COPY(ARG(7), ARG(0));
}
