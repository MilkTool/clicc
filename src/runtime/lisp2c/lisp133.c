/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

CL_INIT Kmerge_pathnames1[] =
{
	MAKE_STRING(44, "etypecase: the value ~a is not a legal value"),	/* 0 */
};

void merge_pathnames1(CL_FORM *base)
{
	COPY(ARG(1), ARG(3));
	LOAD_SYMBOL(SYMBOL(Slisp, 234), ARG(4));	/* PATHNAME */
	rt_struct_typep(ARG(3));
	if(CL_TRUEP(ARG(3)))
	{
		COPY(ARG(1), ARG(3));
	}
	else
	{
		COPY(ARG(1), ARG(3));
		Fstringp(ARG(3));
		if(CL_TRUEP(ARG(3)))
		{
			COPY(ARG(1), ARG(3));
			LOAD_NIL(ARG(4));
			COPY(SYMVAL(Slisp, 233), ARG(5));	/* *DEFAULT-PATHNAME-DEFAULTS* */
			LOAD_FIXNUM(ARG(6), 0, ARG(6));
			LOAD_NIL(ARG(7));
			LOAD_NIL(ARG(8));
			parse_namestring1(ARG(3));
			mv_count = 1;
		}
		else
		{
			COPY(ARG(1), ARG(3));
			LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(4));	/* STREAM */
			rt_struct_typep(ARG(3));
			if(CL_TRUEP(ARG(3)))
			{
				COPY(ARG(1), ARG(3));
				LOAD_NIL(ARG(4));
				file_name1(ARG(3));
				COPY(SYMVAL(Slisp, 233), ARG(4));	/* *DEFAULT-PATHNAME-DEFAULTS* */
				COPY(ARG(3), ARG(5));
				LOAD_NIL(ARG(6));
				COPY(ARG(4), ARG(7));
				LOAD_FIXNUM(ARG(8), 0, ARG(8));
				LOAD_NIL(ARG(9));
				LOAD_NIL(ARG(10));
				parse_namestring1(ARG(5));
				mv_count = 1;
				COPY(ARG(5), ARG(3));
			}
			else
			{
				LOAD_SMSTR((CL_FORM *)&Kmerge_pathnames1[0], ARG(3));	/* etypecase: the value ~a is not a legal value */
				COPY(ARG(1), ARG(4));
				Ferror(ARG(3), 2);
			}
		}
	}
	COPY(ARG(3), ARG(4));
	BIND_SPECIAL(SYMBOL(Slisp, 233), ARG(4));	/* *DEFAULT-PATHNAME-DEFAULTS* */
	COPY(ARG(0), ARG(4));
	Fpathname(ARG(4));
	RESTORE_SPECIAL;
	COPY(ARG(3), ARG(5));
	LOAD_SYMBOL(SYMBOL(Slisp, 234), ARG(6));	/* PATHNAME */
	rt_struct_typep(ARG(5));
	if(CL_TRUEP(ARG(5)))
	{
		COPY(OFFSET(AR_BASE(GET_FORM(ARG(3))), 0 + 1), ARG(5));
	}
	else
	{
		COPY(SYMVAL(Slisp, 352), ARG(5));	/* NO_STRUCT */
		COPY(ARG(3), ARG(6));
		LOAD_SYMBOL(SYMBOL(Slisp, 234), ARG(7));	/* PATHNAME */
		Ferror(ARG(5), 3);
	}
	COPY(ARG(4), ARG(6));
	LOAD_SYMBOL(SYMBOL(Slisp, 234), ARG(7));	/* PATHNAME */
	rt_struct_typep(ARG(6));
	if(CL_TRUEP(ARG(6)))
	{
		COPY(OFFSET(AR_BASE(GET_FORM(ARG(4))), 0 + 1), ARG(6));
	}
	else
	{
		COPY(SYMVAL(Slisp, 352), ARG(6));	/* NO_STRUCT */
		COPY(ARG(4), ARG(7));
		LOAD_SYMBOL(SYMBOL(Slisp, 234), ARG(8));	/* PATHNAME */
		Ferror(ARG(6), 3);
	}
	if(CL_TRUEP(ARG(5)))
	{
		if(CL_TRUEP(ARG(6)))
		{
			COPY(ARG(5), ARG(7));
			LOAD_SYMBOL(SYMBOL(Slisp, 263), ARG(8));	/* HOST */
			rt_struct_typep(ARG(7));
			if(CL_TRUEP(ARG(7)))
			{
				COPY(OFFSET(AR_BASE(GET_FORM(ARG(5))), 6 + 1), ARG(7));
			}
			else
			{
				COPY(SYMVAL(Slisp, 352), ARG(7));	/* NO_STRUCT */
				COPY(ARG(5), ARG(8));
				LOAD_SYMBOL(SYMBOL(Slisp, 263), ARG(9));	/* HOST */
				Ferror(ARG(7), 3);
			}
			COPY(ARG(6), ARG(8));
			LOAD_SYMBOL(SYMBOL(Slisp, 263), ARG(9));	/* HOST */
			rt_struct_typep(ARG(8));
			if(CL_TRUEP(ARG(8)))
			{
				COPY(OFFSET(AR_BASE(GET_FORM(ARG(6))), 6 + 1), ARG(8));
			}
			else
			{
				COPY(SYMVAL(Slisp, 352), ARG(8));	/* NO_STRUCT */
				COPY(ARG(6), ARG(9));
				LOAD_SYMBOL(SYMBOL(Slisp, 263), ARG(10));	/* HOST */
				Ferror(ARG(8), 3);
			}
			LOAD_BOOL(EQ(ARG(7), ARG(8)), ARG(7));
			if(CL_TRUEP(ARG(7)))
			{
				LOAD_NIL(ARG(7));
			}
			else
			{
				LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(7));	/* T */
			}
		}
		else
		{
			LOAD_NIL(ARG(7));
		}
	}
	else
	{
		LOAD_NIL(ARG(7));
	}
	if(CL_TRUEP(ARG(6)))
	{
		COPY(ARG(6), ARG(8));
	}
	else
	{
		COPY(ARG(5), ARG(8));
	}
	COPY(ARG(4), ARG(9));
	LOAD_SYMBOL(SYMBOL(Slisp, 234), ARG(10));	/* PATHNAME */
	rt_struct_typep(ARG(9));
	if(CL_TRUEP(ARG(9)))
	{
		COPY(OFFSET(AR_BASE(GET_FORM(ARG(4))), 1 + 1), ARG(9));
	}
	else
	{
		COPY(SYMVAL(Slisp, 352), ARG(9));	/* NO_STRUCT */
		COPY(ARG(4), ARG(10));
		LOAD_SYMBOL(SYMBOL(Slisp, 234), ARG(11));	/* PATHNAME */
		Ferror(ARG(9), 3);
	}
	if(CL_TRUEP(ARG(9)))
	{
	}
	else
	{
		COPY(ARG(3), ARG(10));
		LOAD_SYMBOL(SYMBOL(Slisp, 234), ARG(11));	/* PATHNAME */
		rt_struct_typep(ARG(10));
		if(CL_TRUEP(ARG(10)))
		{
			COPY(OFFSET(AR_BASE(GET_FORM(ARG(3))), 1 + 1), ARG(10));
		}
		else
		{
			COPY(SYMVAL(Slisp, 352), ARG(10));	/* NO_STRUCT */
			COPY(ARG(3), ARG(11));
			LOAD_SYMBOL(SYMBOL(Slisp, 234), ARG(12));	/* PATHNAME */
			Ferror(ARG(10), 3);
		}
		COPY(ARG(7), ARG(11));
		maybe_diddle_case(ARG(10));
		mv_count = 1;
		COPY(ARG(10), ARG(9));
	}
	COPY(ARG(4), ARG(10));
	LOAD_SYMBOL(SYMBOL(Slisp, 234), ARG(11));	/* PATHNAME */
	rt_struct_typep(ARG(10));
	if(CL_TRUEP(ARG(10)))
	{
		COPY(OFFSET(AR_BASE(GET_FORM(ARG(4))), 2 + 1), ARG(10));
	}
	else
	{
		COPY(SYMVAL(Slisp, 352), ARG(10));	/* NO_STRUCT */
		COPY(ARG(4), ARG(11));
		LOAD_SYMBOL(SYMBOL(Slisp, 234), ARG(12));	/* PATHNAME */
		Ferror(ARG(10), 3);
	}
	COPY(ARG(3), ARG(11));
	LOAD_SYMBOL(SYMBOL(Slisp, 234), ARG(12));	/* PATHNAME */
	rt_struct_typep(ARG(11));
	if(CL_TRUEP(ARG(11)))
	{
		COPY(OFFSET(AR_BASE(GET_FORM(ARG(3))), 2 + 1), ARG(11));
	}
	else
	{
		COPY(SYMVAL(Slisp, 352), ARG(11));	/* NO_STRUCT */
		COPY(ARG(3), ARG(12));
		LOAD_SYMBOL(SYMBOL(Slisp, 234), ARG(13));	/* PATHNAME */
		Ferror(ARG(11), 3);
	}
	COPY(ARG(7), ARG(12));
	merge_directories(ARG(10));
	COPY(ARG(4), ARG(11));
	LOAD_SYMBOL(SYMBOL(Slisp, 234), ARG(12));	/* PATHNAME */
	rt_struct_typep(ARG(11));
	if(CL_TRUEP(ARG(11)))
	{
		COPY(OFFSET(AR_BASE(GET_FORM(ARG(4))), 3 + 1), ARG(11));
	}
	else
	{
		COPY(SYMVAL(Slisp, 352), ARG(11));	/* NO_STRUCT */
		COPY(ARG(4), ARG(12));
		LOAD_SYMBOL(SYMBOL(Slisp, 234), ARG(13));	/* PATHNAME */
		Ferror(ARG(11), 3);
	}
	if(CL_TRUEP(ARG(11)))
	{
	}
	else
	{
		COPY(ARG(3), ARG(12));
		LOAD_SYMBOL(SYMBOL(Slisp, 234), ARG(13));	/* PATHNAME */
		rt_struct_typep(ARG(12));
		if(CL_TRUEP(ARG(12)))
		{
			COPY(OFFSET(AR_BASE(GET_FORM(ARG(3))), 3 + 1), ARG(12));
		}
		else
		{
			COPY(SYMVAL(Slisp, 352), ARG(12));	/* NO_STRUCT */
			COPY(ARG(3), ARG(13));
			LOAD_SYMBOL(SYMBOL(Slisp, 234), ARG(14));	/* PATHNAME */
			Ferror(ARG(12), 3);
		}
		COPY(ARG(7), ARG(13));
		maybe_diddle_case(ARG(12));
		mv_count = 1;
		COPY(ARG(12), ARG(11));
	}
	COPY(ARG(4), ARG(12));
	LOAD_SYMBOL(SYMBOL(Slisp, 234), ARG(13));	/* PATHNAME */
	rt_struct_typep(ARG(12));
	if(CL_TRUEP(ARG(12)))
	{
		COPY(OFFSET(AR_BASE(GET_FORM(ARG(4))), 4 + 1), ARG(12));
	}
	else
	{
		COPY(SYMVAL(Slisp, 352), ARG(12));	/* NO_STRUCT */
		COPY(ARG(4), ARG(13));
		LOAD_SYMBOL(SYMBOL(Slisp, 234), ARG(14));	/* PATHNAME */
		Ferror(ARG(12), 3);
	}
	if(CL_TRUEP(ARG(12)))
	{
	}
	else
	{
		COPY(ARG(3), ARG(13));
		LOAD_SYMBOL(SYMBOL(Slisp, 234), ARG(14));	/* PATHNAME */
		rt_struct_typep(ARG(13));
		if(CL_TRUEP(ARG(13)))
		{
			COPY(OFFSET(AR_BASE(GET_FORM(ARG(3))), 4 + 1), ARG(13));
		}
		else
		{
			COPY(SYMVAL(Slisp, 352), ARG(13));	/* NO_STRUCT */
			COPY(ARG(3), ARG(14));
			LOAD_SYMBOL(SYMBOL(Slisp, 234), ARG(15));	/* PATHNAME */
			Ferror(ARG(13), 3);
		}
		COPY(ARG(7), ARG(14));
		maybe_diddle_case(ARG(13));
		mv_count = 1;
		COPY(ARG(13), ARG(12));
	}
	COPY(ARG(4), ARG(13));
	LOAD_SYMBOL(SYMBOL(Slisp, 234), ARG(14));	/* PATHNAME */
	rt_struct_typep(ARG(13));
	if(CL_TRUEP(ARG(13)))
	{
		COPY(OFFSET(AR_BASE(GET_FORM(ARG(4))), 5 + 1), ARG(13));
	}
	else
	{
		COPY(SYMVAL(Slisp, 352), ARG(13));	/* NO_STRUCT */
		COPY(ARG(4), ARG(14));
		LOAD_SYMBOL(SYMBOL(Slisp, 234), ARG(15));	/* PATHNAME */
		Ferror(ARG(13), 3);
	}
	if(CL_TRUEP(ARG(13)))
	{
	}
	else
	{
		COPY(ARG(2), ARG(13));
	}
	LOAD_SYMBOL(SYMBOL(Slisp, 234), ARG(0));	/* PATHNAME */
	COPY(ARG(8), ARG(1));
	COPY(ARG(9), ARG(2));
	COPY(ARG(10), ARG(3));
	COPY(ARG(11), ARG(4));
	COPY(ARG(12), ARG(5));
	COPY(ARG(13), ARG(6));
	rt_make_struct(ARG(0), 7);
}
