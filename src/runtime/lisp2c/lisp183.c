/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void Fmake_string_output_stream(CL_FORM *base, int nargs)
{
	switch(nargs)
	{
		case 0:
		LOAD_FIXNUM(ARG(0), 10, ARG(0));
		LOAD_SYMBOL(SYMBOL(Slisp, 99), ARG(1));	/* ELEMENT-TYPE */
		LOAD_SYMBOL(SYMBOL(Slisp, 18), ARG(2));	/* CHARACTER */
		LOAD_SYMBOL(SYMBOL(Slisp, 100), ARG(3));	/* ADJUSTABLE */
		LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(4));	/* T */
		LOAD_SYMBOL(SYMBOL(Slisp, 101), ARG(5));	/* FILL-POINTER */
		LOAD_FIXNUM(ARG(6), 0, ARG(6));
		Fmake_array(ARG(0), 7);
		case 1:
		break;
		default:
		Labort(TOO_MANY_ARGS);
	}
	make_string_output_stream1(ARG(0));
}
