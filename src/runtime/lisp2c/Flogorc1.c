/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
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
