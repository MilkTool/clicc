/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void butlast1(CL_FORM *base)
{
	COPY(ARG(0), ARG(2));
	Flength(ARG(2));
	COPY(ARG(1), ARG(3));
	Fminus(ARG(2), 2);
	COPY(ARG(2), ARG(3));
	LOAD_FIXNUM(ARG(4), 0, ARG(4));
	Fle(ARG(3), 2);
	if(CL_TRUEP(ARG(3)))
	{
		LOAD_NIL(ARG(0));
	}
	else
	{
		LOAD_FIXNUM(ARG(1), 0, ARG(1));
		subseq1(ARG(0));
	}
}
