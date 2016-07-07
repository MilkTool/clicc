/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void Fisqrt(CL_FORM *base)
{
	if(CL_FIXNUMP(ARG(0)))
	{
		COPY(ARG(0), ARG(1));
		Fminusp(ARG(1));
		if(CL_TRUEP(ARG(1)))
		{
			goto ELSE1;
		}
		else
		{
			goto THEN2;
		}
	}
	else
	{
		goto ELSE1;
	}
	{
		THEN2:;
		COPY(ARG(0), ARG(1));
		Finteger_length(ARG(1));
		COPY(ARG(1), ARG(2));
		F1minus(ARG(2));
		LOAD_FIXNUM(ARG(3), -1, ARG(3));
		Fminusp(ARG(3));
		if(CL_TRUEP(ARG(3)))
		{
			LOAD_FIXNUM(ARG(4), -1, ARG(4));
			Fminus(ARG(4), 1);
			LOAD_FIXNUM(ARG(5), GET_FIXNUM(ARG(2)) >> GET_FIXNUM(ARG(4)), ARG(2));
		}
		else
		{
			LOAD_FIXNUM(ARG(4), GET_FIXNUM(ARG(2)) << -1, ARG(2));
		}
		COPY(ARG(2), ARG(3));
		Fminusp(ARG(3));
		if(CL_TRUEP(ARG(3)))
		{
			COPY(ARG(2), ARG(3));
			Fminus(ARG(3), 1);
			LOAD_FIXNUM(ARG(4), 1 >> GET_FIXNUM(ARG(3)), ARG(2));
		}
		else
		{
			LOAD_FIXNUM(ARG(4), 1 << GET_FIXNUM(ARG(2)), ARG(2));
		}
		COPY(ARG(2), ARG(3));
		COPY(ARG(1), ARG(4));
		Foddp(ARG(4));
		if(CL_TRUEP(ARG(4)))
		{
			LOAD_FIXNUM(ARG(4), -1, ARG(4));
		}
		else
		{
			LOAD_FIXNUM(ARG(4), 0, ARG(4));
		}
		COPY(ARG(4), ARG(5));
		Fminusp(ARG(5));
		if(CL_TRUEP(ARG(5)))
		{
			COPY(ARG(4), ARG(6));
			Fminus(ARG(6), 1);
			LOAD_FIXNUM(ARG(7), GET_FIXNUM(ARG(2)) >> GET_FIXNUM(ARG(6)), ARG(4));
		}
		else
		{
			LOAD_FIXNUM(ARG(7), GET_FIXNUM(ARG(2)) << GET_FIXNUM(ARG(4)), ARG(4));
		}
		Fplus(ARG(3), 2);
		M1_1:;
		COPY(ARG(3), ARG(4));
		F1minus(ARG(4));
		COPY(ARG(2), ARG(5));
		Fle(ARG(4), 2);
		if(CL_TRUEP(ARG(4)))
		{
			COPY(ARG(2), ARG(0));
			goto RETURN1;
		}
		COPY(ARG(2), ARG(4));
		COPY(ARG(3), ARG(5));
		Fplus(ARG(4), 2);
		LOAD_FIXNUM(ARG(5), -1, ARG(5));
		Fminusp(ARG(5));
		if(CL_TRUEP(ARG(5)))
		{
			LOAD_FIXNUM(ARG(6), -1, ARG(6));
			Fminus(ARG(6), 1);
			LOAD_FIXNUM(ARG(7), GET_FIXNUM(ARG(4)) >> GET_FIXNUM(ARG(6)), ARG(4));
		}
		else
		{
			LOAD_FIXNUM(ARG(6), GET_FIXNUM(ARG(4)) << -1, ARG(4));
		}
		COPY(ARG(4), ARG(5));
		COPY(ARG(4), ARG(6));
		Fmult(ARG(5), 2);
		COPY(ARG(0), ARG(6));
		Fle(ARG(5), 2);
		if(CL_TRUEP(ARG(5)))
		{
			COPY(ARG(4), ARG(2));
		}
		else
		{
			COPY(ARG(4), ARG(3));
		}
		goto M1_1;
		RETURN1:;
	}
	goto ENDIF3;
	{
		ELSE1:;
		LOAD_SMSTR((CL_FORM *)&KClisp[92], ARG(1));	/* Isqrt: ~S argument must be a nonnegative integer */
		COPY(ARG(0), ARG(2));
		Ferror(ARG(1), 2);
	}
	ENDIF3:;
}
