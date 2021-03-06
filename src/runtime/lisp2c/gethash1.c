/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void gethash1(CL_FORM *base)
{
	COPY(ARG(0), ARG(3));
	LOAD_SMALLFIXNUM(0, ARG(4));
	internal_sxhash(ARG(3));
	mv_count = 1;
	COPY(ARG(1), ARG(4));
	LOAD_SYMBOL(SYMBOL(Slisp, 389), ARG(5));	/* HASH-TABLE */
	rt_struct_typep(ARG(4));
	if(CL_TRUEP(ARG(4)))
	{
		COPY(OFFSET(AR_BASE(GET_FORM(ARG(1))), 0 + 1), ARG(4));
	}
	else
	{
		COPY(SYMVAL(Slisp, 342), ARG(4));	/* NO_STRUCT */
		COPY(ARG(1), ARG(5));
		LOAD_SYMBOL(SYMBOL(Slisp, 389), ARG(6));	/* HASH-TABLE */
		Ferror(ARG(4), 3);
	}
	COPY(ARG(3), ARG(5));
	COPY(ARG(4), ARG(6));
	LOAD_SMALLFIXNUM(0, ARG(7));
	rt_convert_to_int(ARG(5));
	COPY(&mv_buf[0], ARG(6));
	mv_count = 1;
	{
		COPY(ARG(6), ARG(3));
	}
	COPY(ARG(1), ARG(4));
	LOAD_SYMBOL(SYMBOL(Slisp, 389), ARG(5));	/* HASH-TABLE */
	rt_struct_typep(ARG(4));
	if(CL_TRUEP(ARG(4)))
	{
		COPY(OFFSET(AR_BASE(GET_FORM(ARG(1))), 5 + 1), ARG(4));
	}
	else
	{
		COPY(SYMVAL(Slisp, 342), ARG(4));	/* NO_STRUCT */
		COPY(ARG(1), ARG(5));
		LOAD_SYMBOL(SYMBOL(Slisp, 389), ARG(6));	/* HASH-TABLE */
		Ferror(ARG(4), 3);
	}
	LOAD_BOOL(CL_SMVECP(ARG(4)), ARG(5));
	if(CL_TRUEP(ARG(5)))
	{
		goto THEN1;
	}
	else
	{
		COPY(ARG(4), ARG(6));
		LOAD_SYMBOL(SYMBOL(Slisp, 150), ARG(7));	/* COMPLEX-VECTOR */
		rt_struct_typep(ARG(6));
	}
	if(CL_TRUEP(ARG(6)))
	{
		THEN1:;
	}
	else
	{
		COPY(SYMVAL(Slisp, 58), ARG(5));	/* WRONG_TYPE */
		COPY(ARG(4), ARG(6));
		LOAD_SYMBOL(SYMBOL(Slisp, 47), ARG(7));	/* VECTOR */
		Ferror(ARG(5), 3);
	}
	COPY(ARG(3), ARG(5));
	Frow_major_aref(ARG(4));
	COPY(ARG(1), ARG(5));
	LOAD_SYMBOL(SYMBOL(Slisp, 389), ARG(6));	/* HASH-TABLE */
	rt_struct_typep(ARG(5));
	if(CL_TRUEP(ARG(5)))
	{
		COPY(OFFSET(AR_BASE(GET_FORM(ARG(1))), 4 + 1), ARG(5));
	}
	else
	{
		COPY(SYMVAL(Slisp, 342), ARG(5));	/* NO_STRUCT */
		COPY(ARG(1), ARG(6));
		LOAD_SYMBOL(SYMBOL(Slisp, 389), ARG(7));	/* HASH-TABLE */
		Ferror(ARG(5), 3);
	}
	LOAD_GLOBFUN(&CFcar, ARG(6));
	LOAD_NIL(ARG(7));
	LOAD_NIL(ARG(8));
	LOAD_SMALLFIXNUM(0, ARG(9));
	COPY(SYMVAL(Slisp, 0), ARG(10));	/* MOST-POSITIVE-FIXNUM */
	if(CL_LISTP(ARG(4)))
	{
		COPY(ARG(0), ARG(11));
		COPY(ARG(4), ARG(12));
		LOAD_NIL(ARG(13));
		COPY(ARG(5), ARG(14));
		LOAD_NIL(ARG(15));
		COPY(ARG(9), ARG(16));
		COPY(ARG(10), ARG(17));
		LOAD_GLOBFUN(&CFcar, ARG(18));
		list_find(ARG(11));
		COPY(ARG(11), ARG(4));
	}
	else
	{
		COPY(ARG(0), ARG(11));
		COPY(ARG(4), ARG(12));
		LOAD_NIL(ARG(13));
		COPY(ARG(5), ARG(14));
		LOAD_NIL(ARG(15));
		COPY(ARG(9), ARG(16));
		COPY(ARG(10), ARG(17));
		LOAD_GLOBFUN(&CFcar, ARG(18));
		vector_find(ARG(11));
		COPY(ARG(11), ARG(4));
	}
	if(CL_TRUEP(ARG(4)))
	{
		if(CL_CONSP(ARG(4)))
		{
			COPY(GET_CDR(ARG(4)), ARG(5));
		}
		else
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(5));	/* ~a is not a list */
			COPY(ARG(4), ARG(6));
			Ferror(ARG(5), 2);
		}
		LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(6));	/* T */
		COPY(ARG(5), ARG(0));
		COPY(ARG(6), &mv_buf[0]);
		mv_count = 2;
	}
	else
	{
		COPY(ARG(2), ARG(0));
		LOAD_NIL(ARG(1));
		COPY(ARG(1), &mv_buf[0]);
		mv_count = 2;
	}
}
