/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void rt_charE(CL_FORM *base)
{
	if(CL_CHARP(ARG(0)))
	{
		COPY(ARG(0), ARG(2));
	}
	else
	{
		COPY(SYMVAL(Slisp, 58), ARG(2));	/* WRONG_TYPE */
		COPY(ARG(0), ARG(3));
		LOAD_SYMBOL(SYMBOL(Slisp, 18), ARG(4));	/* CHARACTER */
		Ferror(ARG(2), 3);
	}
	if(CL_CHARP(ARG(1)))
	{
		COPY(ARG(1), ARG(3));
	}
	else
	{
		COPY(SYMVAL(Slisp, 58), ARG(3));	/* WRONG_TYPE */
		COPY(ARG(1), ARG(4));
		LOAD_SYMBOL(SYMBOL(Slisp, 18), ARG(5));	/* CHARACTER */
		Ferror(ARG(3), 3);
	}
	LOAD_BOOL(EQL(ARG(2), ARG(3)), ARG(0));
}