/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Flogorc1(CL_FORM *base)
{
	COPY(ARG(0), ARG(2));
	Flognot(ARG(2));
	COPY(ARG(1), ARG(3));
	Flogior(ARG(2), 2);
	COPY(ARG(2), ARG(0));
}
