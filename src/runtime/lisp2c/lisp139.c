/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

extern CL_INIT XIenough_namestring1[];
extern CL_INIT XFenough_namestring1[];
CL_INIT Kenough_namestring1[] =
{
	MAKE_STRING(44, "etypecase: the value ~a is not a legal value"),	/* 0 */
	MAKE_STRING(44, "etypecase: the value ~a is not a legal value"),	/* 2 */
	MAKE_STRING(65, "Cannot determine the namestring for pathnames with no host:~%  ~S"),	/* 4 */
};

void enough_namestring1(CL_FORM *base)
{
	COPY(ARG(0), ARG(2));
	LOAD_SYMBOL(SYMBOL(Slisp, 232), ARG(3));	/* PATHNAME */
	rt_struct_typep(ARG(2));
	if(CL_TRUEP(ARG(2)))
	{
		COPY(ARG(0), ARG(2));
	}
	else
	{
		COPY(ARG(0), ARG(2));
		Fstringp(ARG(2));
		if(CL_TRUEP(ARG(2)))
		{
			COPY(ARG(0), ARG(2));
			LOAD_NIL(ARG(3));
			COPY(SYMVAL(Slisp, 231), ARG(4));	/* *DEFAULT-PATHNAME-DEFAULTS* */
			LOAD_SMALLFIXNUM(0, ARG(5));
			LOAD_NIL(ARG(6));
			LOAD_NIL(ARG(7));
			parse_namestring1(ARG(2));
			mv_count = 1;
		}
		else
		{
			COPY(ARG(0), ARG(2));
			LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(3));	/* STREAM */
			rt_struct_typep(ARG(2));
			if(CL_TRUEP(ARG(2)))
			{
				COPY(ARG(0), ARG(2));
				LOAD_NIL(ARG(3));
				file_name1(ARG(2));
				COPY(SYMVAL(Slisp, 231), ARG(3));	/* *DEFAULT-PATHNAME-DEFAULTS* */
				LOAD_SMALLFIXNUM(0, ARG(4));
				COPY(ARG(2), ARG(5));
				LOAD_NIL(ARG(6));
				COPY(ARG(3), ARG(7));
				COPY(ARG(4), ARG(8));
				LOAD_NIL(ARG(9));
				LOAD_NIL(ARG(10));
				parse_namestring1(ARG(5));
				mv_count = 1;
				COPY(ARG(5), ARG(2));
			}
			else
			{
				LOAD_SMSTR((CL_FORM *)&Kenough_namestring1[0], ARG(2));	/* etypecase: the value ~a is not a legal value */
				COPY(ARG(0), ARG(3));
				Ferror(ARG(2), 2);
			}
		}
	}
	COPY(ARG(2), ARG(3));
	LOAD_SYMBOL(SYMBOL(Slisp, 232), ARG(4));	/* PATHNAME */
	rt_struct_typep(ARG(3));
	if(CL_TRUEP(ARG(3)))
	{
		COPY(OFFSET(AR_BASE(GET_FORM(ARG(2))), 0 + 1), ARG(3));
	}
	else
	{
		COPY(SYMVAL(Slisp, 342), ARG(3));	/* NO_STRUCT */
		COPY(ARG(2), ARG(4));
		LOAD_SYMBOL(SYMBOL(Slisp, 232), ARG(5));	/* PATHNAME */
		Ferror(ARG(3), 3);
	}
	if(CL_TRUEP(ARG(3)))
	{
		COPY(ARG(1), ARG(4));
		LOAD_SYMBOL(SYMBOL(Slisp, 232), ARG(5));	/* PATHNAME */
		rt_struct_typep(ARG(4));
		if(CL_TRUEP(ARG(4)))
		{
			COPY(ARG(1), ARG(4));
		}
		else
		{
			COPY(ARG(1), ARG(4));
			Fstringp(ARG(4));
			if(CL_TRUEP(ARG(4)))
			{
				COPY(ARG(1), ARG(4));
				LOAD_NIL(ARG(5));
				COPY(SYMVAL(Slisp, 231), ARG(6));	/* *DEFAULT-PATHNAME-DEFAULTS* */
				LOAD_SMALLFIXNUM(0, ARG(7));
				LOAD_NIL(ARG(8));
				LOAD_NIL(ARG(9));
				parse_namestring1(ARG(4));
				mv_count = 1;
			}
			else
			{
				COPY(ARG(1), ARG(4));
				LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(5));	/* STREAM */
				rt_struct_typep(ARG(4));
				if(CL_TRUEP(ARG(4)))
				{
					COPY(ARG(1), ARG(4));
					LOAD_NIL(ARG(5));
					file_name1(ARG(4));
					COPY(SYMVAL(Slisp, 231), ARG(5));	/* *DEFAULT-PATHNAME-DEFAULTS* */
					LOAD_SMALLFIXNUM(0, ARG(6));
					COPY(ARG(4), ARG(7));
					LOAD_NIL(ARG(8));
					COPY(ARG(5), ARG(9));
					COPY(ARG(6), ARG(10));
					LOAD_NIL(ARG(11));
					LOAD_NIL(ARG(12));
					parse_namestring1(ARG(7));
					mv_count = 1;
					COPY(ARG(7), ARG(4));
				}
				else
				{
					LOAD_SMSTR((CL_FORM *)&Kenough_namestring1[2], ARG(4));	/* etypecase: the value ~a is not a legal value */
					COPY(ARG(1), ARG(5));
					Ferror(ARG(4), 2);
				}
			}
		}
		COPY(ARG(2), ARG(0));
		COPY(ARG(4), ARG(1));
		unparse_unix_enough(ARG(0));
	}
	else
	{
		LOAD_SMSTR((CL_FORM *)&Kenough_namestring1[4], ARG(0));	/* Cannot determine the namestring for pathnames with no host:~%  ~S */
		COPY(ARG(2), ARG(1));
		Ferror(ARG(0), 2);
	}
}
