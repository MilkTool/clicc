/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void Fnamestring(CL_FORM *base)
{
	COPY(ARG(0), ARG(1));
	LOAD_SYMBOL(SYMBOL(Slisp, 234), ARG(2));	/* PATHNAME */
	rt_struct_typep(ARG(1));
	if(CL_TRUEP(ARG(1)))
	{
		COPY(ARG(0), ARG(1));
	}
	else
	{
		COPY(ARG(0), ARG(1));
		Fstringp(ARG(1));
		if(CL_TRUEP(ARG(1)))
		{
			COPY(ARG(0), ARG(1));
			LOAD_NIL(ARG(2));
			COPY(SYMVAL(Slisp, 233), ARG(3));	/* *DEFAULT-PATHNAME-DEFAULTS* */
			LOAD_FIXNUM(ARG(4), 0, ARG(4));
			LOAD_NIL(ARG(5));
			LOAD_NIL(ARG(6));
			parse_namestring1(ARG(1));
			mv_count = 1;
		}
		else
		{
			COPY(ARG(0), ARG(1));
			LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(2));	/* STREAM */
			rt_struct_typep(ARG(1));
			if(CL_TRUEP(ARG(1)))
			{
				COPY(ARG(0), ARG(1));
				LOAD_NIL(ARG(2));
				file_name1(ARG(1));
				COPY(SYMVAL(Slisp, 233), ARG(2));	/* *DEFAULT-PATHNAME-DEFAULTS* */
				COPY(ARG(1), ARG(3));
				LOAD_NIL(ARG(4));
				COPY(ARG(2), ARG(5));
				LOAD_FIXNUM(ARG(6), 0, ARG(6));
				LOAD_NIL(ARG(7));
				LOAD_NIL(ARG(8));
				parse_namestring1(ARG(3));
				mv_count = 1;
				COPY(ARG(3), ARG(1));
			}
			else
			{
				LOAD_SMSTR((CL_FORM *)&KClisp[126], ARG(1));	/* etypecase: the value ~a is not a legal value */
				COPY(ARG(0), ARG(2));
				Ferror(ARG(1), 2);
			}
		}
	}
	COPY(ARG(1), ARG(2));
	Ppathname_host(ARG(2));
	if(CL_TRUEP(ARG(2)))
	{
		COPY(ARG(2), ARG(3));
		COPY(ARG(3), ARG(4));
		COPY(ARG(4), ARG(5));
		LOAD_SYMBOL(SYMBOL(Slisp, 263), ARG(6));	/* HOST */
		rt_struct_typep(ARG(5));
		if(CL_TRUEP(ARG(5)))
		{
			COPY(OFFSET(AR_BASE(GET_FORM(ARG(4))), 1 + 1), ARG(3));
		}
		else
		{
			COPY(SYMVAL(Slisp, 352), ARG(3));	/* NO_STRUCT */
			LOAD_SYMBOL(SYMBOL(Slisp, 263), ARG(5));	/* HOST */
			Ferror(ARG(3), 3);
		}
		COPY(ARG(1), ARG(4));
		Ffuncall(ARG(3), 2);
		COPY(ARG(3), ARG(0));
	}
	else
	{
		LOAD_SMSTR((CL_FORM *)&KClisp[124], ARG(0));	/* Cannot determine the namestring for pathnames with no host:~%  ~S */
		Ferror(ARG(0), 2);
	}
}
