/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

GEN_GLOBAL_FUNARG(CFupper_case_p, Fupper_case_p, 1);

void Fupper_case_p(CL_FORM *base)
{
	if(CL_CHARP(ARG(0)))
	{
		COPY(ARG(0), ARG(1));
	}
	else
	{
		COPY(SYMVAL(Slisp, 58), ARG(1));	/* WRONG_TYPE */
		COPY(ARG(0), ARG(2));
		LOAD_SYMBOL(SYMBOL(Slisp, 18), ARG(3));	/* CHARACTER */
		Ferror(ARG(1), 3);
	}
	rt_upper_case_p(ARG(1));
	COPY(ARG(1), ARG(0));
}
