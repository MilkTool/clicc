/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void rt_do_external_symbols_iterator(CL_FORM *base)
{
	COPY(ARG(1), ARG(2));
	Ppackage_external(ARG(2));
	LOAD_FIXNUM(ARG(3), 0, ARG(3));
	M1_1:;
	COPY(ARG(3), ARG(4));
	LOAD_FIXNUM(ARG(5), 101, ARG(5));
	Fge(ARG(4), 2);
	if(CL_TRUEP(ARG(4)))
	{
		LOAD_NIL(ARG(0));
		goto RETURN1;
	}
	LOAD_NIL(ARG(4));
	COPY(ARG(2), ARG(5));
	COPY(ARG(3), ARG(6));
	Fsvref(ARG(5));
	M2_1:;
	if(CL_ATOMP(ARG(5)))
	{
		LOAD_NIL(ARG(4));
		goto RETURN2;
	}
	COPY(ARG(5), ARG(6));
	COPY(GET_CAR(ARG(6)), ARG(4));
	COPY(ARG(0), ARG(6));
	COPY(ARG(4), ARG(7));
	Ffuncall(ARG(6), 2);
	mv_count = 1;
	COPY(ARG(5), ARG(6));
	COPY(GET_CDR(ARG(6)), ARG(5));
	goto M2_1;
	RETURN2:;
	F1plus(ARG(3));
	goto M1_1;
	RETURN1:;
}
