/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fprinc(CL_FORM *base, int nargs)
{
	switch(nargs)
	{
		case 1:
		LOAD_NIL(ARG(1));
		case 2:
		break;
		default:
		Labort(TOO_MANY_ARGS);
	}
	princ1(ARG(0));
}
