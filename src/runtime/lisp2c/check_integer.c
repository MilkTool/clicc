/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void check_integer(CL_FORM *base)
{
	if(CL_FIXNUMP(ARG(0)))
	{
		COPY(ARG(1), ARG(3));
		COPY(ARG(0), ARG(4));
		COPY(ARG(2), ARG(5));
		Fle(ARG(3), 3);
		COPY(ARG(3), ARG(0));
	}
	else
	{
		LOAD_NIL(ARG(0));
	}
}
