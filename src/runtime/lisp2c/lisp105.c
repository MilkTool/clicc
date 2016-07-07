/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

extern CL_INIT XIget_dispatch_macro_character1[];
extern CL_INIT XFget_dispatch_macro_character1[];
CL_INIT Kget_dispatch_macro_character1[] =
{
	MAKE_STRING(36, "~S is not a dispatch macro character"),	/* 0 */
};

void get_dispatch_macro_character1(CL_FORM *base)
{
	COPY(ARG(2), ARG(3));
	LOAD_SYMBOL(SYMBOL(Slisp, 410), ARG(4));	/* READTABLE */
	rt_struct_typep(ARG(3));
	if(CL_TRUEP(ARG(3)))
	{
		COPY(OFFSET(AR_BASE(GET_FORM(ARG(2))), 1 + 1), ARG(3));
	}
	else
	{
		COPY(SYMVAL(Slisp, 342), ARG(3));	/* NO_STRUCT */
		COPY(ARG(2), ARG(4));
		LOAD_SYMBOL(SYMBOL(Slisp, 410), ARG(5));	/* READTABLE */
		Ferror(ARG(3), 3);
	}
	COPY(ARG(0), ARG(4));
	COPY(ARG(3), ARG(5));
	LOAD_NIL(ARG(6));
	LOAD_NIL(ARG(7));
	LOAD_NIL(ARG(8));
	assoc1(ARG(4));
	COPY(ARG(4), ARG(3));
	if(CL_CONSP(ARG(3)))
	{
		COPY(GET_CDR(ARG(3)), ARG(3));
	}
	else
	{
		if(CL_TRUEP(ARG(3)))
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(4));	/* ~a is not a list */
			COPY(ARG(3), ARG(5));
			Ferror(ARG(4), 2);
		}
		else
		{
			LOAD_NIL(ARG(3));
		}
	}
	if(CL_TRUEP(ARG(3)))
	{
	}
	else
	{
		LOAD_SMSTR((CL_FORM *)&Kget_dispatch_macro_character1[0], ARG(4));	/* ~S is not a dispatch macro character */
		COPY(ARG(0), ARG(5));
		Ferror(ARG(4), 2);
	}
	if(CL_CHARP(ARG(1)))
	{
		COPY(ARG(1), ARG(4));
	}
	else
	{
		COPY(SYMVAL(Slisp, 58), ARG(4));	/* WRONG_TYPE */
		COPY(ARG(1), ARG(5));
		LOAD_SYMBOL(SYMBOL(Slisp, 18), ARG(6));	/* CHARACTER */
		Ferror(ARG(4), 3);
	}
	rt_char_upcase(ARG(4));
	rt_char_code(ARG(4));
	LOAD_BOOL(CL_SMVECP(ARG(3)), ARG(5));
	if(CL_TRUEP(ARG(5)))
	{
		goto THEN1;
	}
	else
	{
		COPY(ARG(3), ARG(6));
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
		COPY(ARG(3), ARG(6));
		LOAD_SYMBOL(SYMBOL(Slisp, 47), ARG(7));	/* VECTOR */
		Ferror(ARG(5), 3);
	}
	COPY(ARG(3), ARG(0));
	COPY(ARG(4), ARG(1));
	Frow_major_aref(ARG(0));
}
