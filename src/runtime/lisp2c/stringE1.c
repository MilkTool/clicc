/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void stringE1(CL_FORM *base)
{
	COPY(ARG(0), ARG(6));
	Fstring(ARG(6));
	COPY(ARG(6), ARG(0));
	COPY(ARG(1), ARG(6));
	Fstring(ARG(6));
	COPY(ARG(6), ARG(1));
	if(CL_TRUEP(ARG(3)))
	{
	}
	else
	{
		COPY(ARG(0), ARG(6));
		Flength(ARG(6));
		COPY(ARG(6), ARG(3));
	}
	if(CL_TRUEP(ARG(5)))
	{
	}
	else
	{
		COPY(ARG(1), ARG(5));
		Flength(ARG(5));
	}
	COPY(ARG(3), ARG(6));
	COPY(ARG(2), ARG(7));
	Fminus(ARG(6), 2);
	COPY(ARG(5), ARG(7));
	COPY(ARG(4), ARG(8));
	Fminus(ARG(7), 2);
	Fnumeql(ARG(6), 2);
	if(CL_TRUEP(ARG(6)))
	{
		COPY(ARG(2), ARG(6));
		COPY(ARG(4), ARG(7));
		M1_1:;
		COPY(ARG(6), ARG(8));
		COPY(ARG(3), ARG(9));
		Fnumeql(ARG(8), 2);
		if(CL_TRUEP(ARG(8)))
		{
			LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(0));	/* T */
			goto RETURN2;
		}
		COPY(ARG(0), ARG(8));
		COPY(ARG(6), ARG(9));
		Frow_major_aref(ARG(8));
		COPY(ARG(1), ARG(9));
		COPY(ARG(7), ARG(10));
		Frow_major_aref(ARG(9));
		rt_charE(ARG(8));
		if(CL_TRUEP(ARG(8)))
		{
		}
		else
		{
			LOAD_NIL(ARG(0));
			goto RETURN1;
		}
		COPY(ARG(6), ARG(8));
		F1plus(ARG(8));
		COPY(ARG(7), ARG(9));
		F1plus(ARG(9));
		COPY(ARG(9), ARG(7));
		COPY(ARG(8), ARG(6));
		goto M1_1;
		RETURN2:;
	}
	else
	{
		LOAD_NIL(ARG(0));
	}
	RETURN1:;
}
