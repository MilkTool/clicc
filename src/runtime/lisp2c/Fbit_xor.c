/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fbit_xor(CL_FORM *base, int nargs)
{
	switch(nargs)
	{
		case 2:
		LOAD_NIL(ARG(2));
		case 3:
		break;
		default:
		Labort(TOO_MANY_ARGS);
	}
	bit_xor1(ARG(0));
}
