/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void Fread_preserving_whitespace(CL_FORM *base, int nargs)
{
	switch(nargs)
	{
		case 0:
		COPY(SYMVAL(Slisp, 60), ARG(0));	/* *STANDARD-INPUT* */
		case 1:
		LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(1));	/* T */
		case 2:
		LOAD_NIL(ARG(2));
		case 3:
		LOAD_NIL(ARG(3));
		case 4:
		break;
		default:
		Labort(TOO_MANY_ARGS);
	}
	read_preserving_whitespace1(ARG(0));
}
