/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Flogbitp(CL_FORM *base)
{
	COPY(ARG(1), ARG(2));
	LOAD_SMALLFIXNUM(1, ARG(3));
	COPY(ARG(0), ARG(4));
	Fash(ARG(3));
	Flogand(ARG(2), 2);
	Fzerop(ARG(2));
	Fnot(ARG(2));
	COPY(ARG(2), ARG(0));
}
