/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void nstring_upcase1(CL_FORM *base)
{
	COPY(ARG(1), ARG(3));
	COPY(ARG(2), ARG(4));
	COPY(ARG(0), ARG(5));
	Flength(ARG(5));
	check_seq_start_end(ARG(3));
	COPY(ARG(3), ARG(2));
	COPY(ARG(1), ARG(3));
	M1_1:;
	COPY(ARG(3), ARG(4));
	COPY(ARG(2), ARG(5));
	Fnumeql(ARG(4), 2);
	if(CL_TRUEP(ARG(4)))
	{
		goto RETURN1;
	}
	if(CL_SMSTRP(ARG(0)))
	{
	}
	else
	{
		COPY(SYMVAL(Slisp, 58), ARG(4));	/* WRONG_TYPE */
		COPY(ARG(0), ARG(5));
		LOAD_SYMBOL(SYMBOL(Slisp, 40), ARG(6));	/* SIMPLE-STRING */
		Ferror(ARG(4), 3);
	}
	if(CL_FIXNUMP(ARG(3)))
	{
		LOAD_FIXNUM(ARG(4), 0, ARG(4));
		COPY(ARG(3), ARG(5));
		LOAD_FIXNUM(ARG(7), AR_SIZE(GET_FORM(ARG(0))), ARG(6));
		F1minus(ARG(6));
		Fle(ARG(4), 3);
	}
	else
	{
		goto ELSE1;
	}
	if(CL_TRUEP(ARG(4)))
	{
	}
	else
	{
		ELSE1:;
		COPY(SYMVAL(Slisp, 153), ARG(4));	/* OUT_OF_RANGE */
		COPY(ARG(3), ARG(5));
		LOAD_FIXNUM(ARG(7), AR_SIZE(GET_FORM(ARG(0))), ARG(6));
		Ferror(ARG(4), 3);
	}
	COPY(ARG(0), ARG(4));
	COPY(ARG(3), ARG(5));
	rt_pvref(ARG(4));
	if(CL_CHARP(ARG(4)))
	{
		COPY(ARG(4), ARG(5));
	}
	else
	{
		COPY(SYMVAL(Slisp, 58), ARG(5));	/* WRONG_TYPE */
		COPY(ARG(4), ARG(6));
		LOAD_SYMBOL(SYMBOL(Slisp, 18), ARG(7));	/* CHARACTER */
		Ferror(ARG(5), 3);
	}
	rt_char_upcase(ARG(5));
	COPY(ARG(5), ARG(4));
	COPY(ARG(0), ARG(6));
	COPY(ARG(3), ARG(7));
	Fset_schar(ARG(5));
	F1plus(ARG(3));
	goto M1_1;
	RETURN1:;
}
