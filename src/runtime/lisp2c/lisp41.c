/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void member_if_not1(CL_FORM *base)
{
	COPY(ARG(0), ARG(3));
	Fcomplement(ARG(3));
	COPY(ARG(3), ARG(0));
	member_if1(ARG(0));
}
