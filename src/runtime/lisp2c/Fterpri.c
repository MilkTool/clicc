/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fterpri(CL_FORM *base, int nargs)
{
	switch(nargs)
	{
		case 0:
		LOAD_NIL(ARG(0));
		case 1:
		break;
		default:
		Labort(TOO_MANY_ARGS);
	}
	terpri1(ARG(0));
}
