/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Flog(CL_FORM *base, int nargs)
{
	switch(nargs)
	{
		case 1:
		GEN_FLOAT(ARG(1), 2.7182817, ARG(1));
		case 2:
		break;
		default:
		Labort(TOO_MANY_ARGS);
	}
	log1(ARG(0));
}
