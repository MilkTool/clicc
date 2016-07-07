/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

static void Z48_read_rest(CL_FORM *base, CL_FORM *display[]);

void read_delimited_list1(CL_FORM *base)
{
	CL_FORM *display[1];
	if(CL_TRUEP(ARG(1)))
	{
		if(CL_SYMBOLP(ARG(1)) && GET_SYMBOL(ARG(1)) == SYMBOL(Slisp, 48))	/* T */
		{
			COPY(SYMVAL(Slisp, 59), ARG(1));	/* *TERMINAL-IO* */
		}
	}
	else
	{
		COPY(SYMVAL(Slisp, 60), ARG(1));	/* *STANDARD-INPUT* */
	}
	display[0] = ARG(0);
	Z48_read_rest(ARG(3), display);
	COPY(ARG(3), ARG(0));
}

static void Z48_read_rest(CL_FORM *base, CL_FORM *display[])
{
	LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(0));	/* T */
	COPY(&display[0][1], ARG(1));
	LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(2));	/* T */
	LOAD_NIL(ARG(3));
	LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(4));	/* T */
	peek_char1(ARG(0));
	if(EQL(&display[0][0], ARG(0)))
	{
		COPY(&display[0][1], ARG(0));
		LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(1));	/* T */
		LOAD_NIL(ARG(2));
		LOAD_NIL(ARG(3));
		read_char1(ARG(0));
		LOAD_NIL(ARG(0));
	}
	else
	{
		COPY(&display[0][1], ARG(0));
		LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(1));	/* T */
		LOAD_NIL(ARG(2));
		LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(3));	/* T */
		read1(ARG(0));
		Z48_read_rest(ARG(1), display);
		ALLOC_CONS(ARG(2), ARG(0), ARG(1), ARG(0));
	}
}
