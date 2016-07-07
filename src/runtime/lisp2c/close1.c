/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

GEN_GLOBAL_FUNARG(Cclose1, close1, 1);

CL_INIT Kclose1[] =
{
	MAKE_STRING(14, "already closed"),	/* 0 */
};

static void Z71_lambda(CL_FORM *base);
GEN_STATIC_GLOBAL_FUNARG(CZ71_lambda, Z71_lambda, 1);

void close1(CL_FORM *base)
{
	LOAD_GLOBFUN(&Cclose_err, ARG(1));
	LOAD_FIXNUM(ARG(2), 2, ARG(2));
	COPY(ARG(0), ARG(3));
	LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(4));	/* STREAM */
	rt_struct_typep(ARG(3));
	if(CL_TRUEP(ARG(3)))
	{
		LOAD_GLOBFUN(&Cclose_err, ARG(3));
		COPY(ARG(3), OFFSET(AR_BASE(GET_FORM(ARG(0))), 2 + 1));
	}
	else
	{
		COPY(SYMVAL(Slisp, 352), ARG(3));	/* NO_STRUCT */
		COPY(ARG(0), ARG(4));
		LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(5));	/* STREAM */
		Ferror(ARG(3), 3);
	}
	LOAD_GLOBFUN(&Cclose_err, ARG(1));
	LOAD_FIXNUM(ARG(2), 3, ARG(2));
	COPY(ARG(0), ARG(3));
	LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(4));	/* STREAM */
	rt_struct_typep(ARG(3));
	if(CL_TRUEP(ARG(3)))
	{
		LOAD_GLOBFUN(&Cclose_err, ARG(3));
		COPY(ARG(3), OFFSET(AR_BASE(GET_FORM(ARG(0))), 3 + 1));
	}
	else
	{
		COPY(SYMVAL(Slisp, 352), ARG(3));	/* NO_STRUCT */
		COPY(ARG(0), ARG(4));
		LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(5));	/* STREAM */
		Ferror(ARG(3), 3);
	}
	LOAD_GLOBFUN(&Cclose_err, ARG(1));
	LOAD_FIXNUM(ARG(2), 4, ARG(2));
	COPY(ARG(0), ARG(3));
	LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(4));	/* STREAM */
	rt_struct_typep(ARG(3));
	if(CL_TRUEP(ARG(3)))
	{
		LOAD_GLOBFUN(&Cclose_err, ARG(3));
		COPY(ARG(3), OFFSET(AR_BASE(GET_FORM(ARG(0))), 4 + 1));
	}
	else
	{
		COPY(SYMVAL(Slisp, 352), ARG(3));	/* NO_STRUCT */
		COPY(ARG(0), ARG(4));
		LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(5));	/* STREAM */
		Ferror(ARG(3), 3);
	}
	LOAD_GLOBFUN(&Cclose_err, ARG(1));
	LOAD_FIXNUM(ARG(2), 6, ARG(2));
	COPY(ARG(0), ARG(3));
	LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(4));	/* STREAM */
	rt_struct_typep(ARG(3));
	if(CL_TRUEP(ARG(3)))
	{
		LOAD_GLOBFUN(&Cclose_err, ARG(3));
		COPY(ARG(3), OFFSET(AR_BASE(GET_FORM(ARG(0))), 6 + 1));
	}
	else
	{
		COPY(SYMVAL(Slisp, 352), ARG(3));	/* NO_STRUCT */
		COPY(ARG(0), ARG(4));
		LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(5));	/* STREAM */
		Ferror(ARG(3), 3);
	}
	LOAD_GLOBFUN(&Cclose_err, ARG(1));
	LOAD_FIXNUM(ARG(2), 7, ARG(2));
	COPY(ARG(0), ARG(3));
	LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(4));	/* STREAM */
	rt_struct_typep(ARG(3));
	if(CL_TRUEP(ARG(3)))
	{
		LOAD_GLOBFUN(&Cclose_err, ARG(3));
		COPY(ARG(3), OFFSET(AR_BASE(GET_FORM(ARG(0))), 7 + 1));
	}
	else
	{
		COPY(SYMVAL(Slisp, 352), ARG(3));	/* NO_STRUCT */
		COPY(ARG(0), ARG(4));
		LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(5));	/* STREAM */
		Ferror(ARG(3), 3);
	}
	LOAD_GLOBFUN(&CZ71_lambda, ARG(1));
	LOAD_FIXNUM(ARG(2), 9, ARG(2));
	COPY(ARG(0), ARG(3));
	LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(4));	/* STREAM */
	rt_struct_typep(ARG(3));
	if(CL_TRUEP(ARG(3)))
	{
		COPY(ARG(1), OFFSET(AR_BASE(GET_FORM(ARG(0))), 9 + 1));
		COPY(ARG(1), ARG(0));
	}
	else
	{
		COPY(SYMVAL(Slisp, 352), ARG(3));	/* NO_STRUCT */
		COPY(ARG(0), ARG(4));
		LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(5));	/* STREAM */
		Ferror(ARG(3), 3);
	}
}

static void Z71_lambda(CL_FORM *base)
{
	LOAD_SMSTR((CL_FORM *)&Kclose1[0], ARG(0));	/* already closed */
}
