/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fpeek_char(CL_FORM *base, int nargs)
{
	switch(nargs)
	{
		case 0:
		LOAD_NIL(ARG(0));
		case 1:
		LOAD_NIL(ARG(1));
		case 2:
		LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(2));	/* T */
		case 3:
		LOAD_NIL(ARG(3));
		case 4:
		LOAD_NIL(ARG(4));
		case 5:
		break;
		default:
		Labort(TOO_MANY_ARGS);
	}
	peek_char1(ARG(0));
}
