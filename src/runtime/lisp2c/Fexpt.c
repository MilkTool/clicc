/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fexpt(CL_FORM *base)
{
	COPY(ARG(1), ARG(2));
	Fminusp(ARG(2));
	if(CL_TRUEP(ARG(2)))
	{
		LOAD_SMALLFIXNUM(1, ARG(2));
		COPY(ARG(0), ARG(3));
		COPY(ARG(1), ARG(4));
		Fminus(ARG(4), 1);
		Fexpt(ARG(3));
		Fdiv(ARG(2), 2);
		COPY(ARG(2), ARG(0));
	}
	else
	{
		rt_expt(ARG(0));
	}
}
