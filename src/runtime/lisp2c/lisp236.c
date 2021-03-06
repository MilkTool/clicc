/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

GEN_GLOBAL_FUNARG(CFarray_row_major_index, Farray_row_major_index, -2);

void Farray_row_major_index(CL_FORM *base, int nargs)
{
	CL_FORM *rest_0;
	CL_FORM *local;
	rest_0 = ARG(1);
	local = ARG(nargs);
	{
		LOAD_BOOL(CL_SMVECP(ARG(0)), LOCAL(0));
		if(CL_TRUEP(LOCAL(0)))
		{
			goto THEN1;
		}
		else
		{
			COPY(ARG(0), LOCAL(1));
			LOAD_SYMBOL(SYMBOL(Slisp, 145), LOCAL(2));	/* COMPLEX-BASE-ARRAY */
			rt_struct_typep(LOCAL(1));
		}
	}
	if(CL_TRUEP(LOCAL(1)))
	{
		THEN1:;
	}
	else
	{
		COPY(SYMVAL(Slisp, 152), LOCAL(0));	/* NO_ARRAY */
		COPY(ARG(0), LOCAL(1));
		Ferror(LOCAL(0), 2);
	}
	{
		LOAD_FIXNUM(LOCAL(0), 0, LOCAL(0));
		LOAD_FIXNUM(LOCAL(1), 0, LOCAL(1));
		{
			CL_FORM *rest_1;
			LOAD_NIL(LOCAL(2));
			rest_1 = rest_0;
			M1_1:;
			if(NOT(REST_NOT_EMPTY(rest_1)))
			{
				LOAD_NIL(LOCAL(2));
				goto RETURN1;
			}
			{
				CL_FORM *rest_2;
				rest_2 = rest_1;
				REST_CAR(rest_2, LOCAL(2));
			}
			{
				COPY(ARG(0), LOCAL(3));
				COPY(LOCAL(0), LOCAL(4));
				Farray_dimension(LOCAL(3));
				F1plus(LOCAL(0));
				COPY(LOCAL(1), LOCAL(4));
				COPY(LOCAL(3), LOCAL(5));
				Fmult(LOCAL(4), 2);
				COPY(LOCAL(2), LOCAL(5));
				Fplus(LOCAL(4), 2);
				COPY(LOCAL(4), LOCAL(1));
			}
			{
				CL_FORM *rest_3;
				rest_3 = rest_1;
				rest_1 = REST_CDR(rest_3);
			}
			goto M1_1;
		}
		RETURN1:;
		COPY(LOCAL(1), ARG(0));
	}
}
