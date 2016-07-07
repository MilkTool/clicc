/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

extern CL_INIT XIpathname_name1[];
extern CL_INIT XFpathname_name1[];
CL_INIT Kpathname_name1[] =
{
	MAKE_STRING(44, "etypecase: the value ~a is not a legal value"),	/* 0 */
};

void pathname_name1(CL_FORM *base)
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
				LOAD_SMSTR((CL_FORM *)&Kpathname_name1[0], ARG(2));	/* etypecase: the value ~a is not a legal value */
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
		COPY(OFFSET(AR_BASE(GET_FORM(ARG(2))), 3 + 1), ARG(3));
	}
	else
	{
		COPY(SYMVAL(Slisp, 342), ARG(3));	/* NO_STRUCT */
		COPY(ARG(2), ARG(4));
		LOAD_SYMBOL(SYMBOL(Slisp, 232), ARG(5));	/* PATHNAME */
		Ferror(ARG(3), 3);
	}
	if(CL_SYMBOLP(ARG(1)) && GET_SYMBOL(ARG(1)) == SYMBOL(Slisp, 269))	/* COMMON */
	{
		LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(4));	/* T */
	}
	else
	{
		LOAD_NIL(ARG(4));
	}
	maybe_diddle_case(ARG(3));
	COPY(ARG(3), ARG(0));
}
