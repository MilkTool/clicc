/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Ffifth(CL_FORM *base)
{
	LOAD_SMALLFIXNUM(4, ARG(1));
	COPY(ARG(0), ARG(2));
	Fnth(ARG(1));
	COPY(ARG(1), ARG(0));
}
