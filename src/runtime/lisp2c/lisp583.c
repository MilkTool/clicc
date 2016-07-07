/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

GEN_GLOBAL_FUNARG(Cconcatenate_to_list, concatenate_to_list, -1);

void concatenate_to_list(CL_FORM *base, int nargs)
{
	CL_FORM *rest_0;
	CL_FORM *local;
	rest_0 = ARG(0);
	local = ARG(nargs);
	{
		LOAD_NIL(LOCAL(0));
		LOAD_NIL(LOCAL(1));
		ALLOC_CONS(LOCAL(2), LOCAL(0), LOCAL(1), LOCAL(0));
		{
			CL_FORM *rest_1;
			LOAD_NIL(LOCAL(1));
			rest_1 = rest_0;
			M1_1:;
			if(NOT(REST_NOT_EMPTY(rest_1)))
			{
				LOAD_NIL(LOCAL(1));
				goto RETURN1;
			}
			{
				CL_FORM *rest_2;
				rest_2 = rest_1;
				REST_CAR(rest_2, LOCAL(1));
			}
			if(CL_LISTP(LOCAL(1)))
			{
				LOAD_NIL(LOCAL(2));
				COPY(LOCAL(1), LOCAL(3));
				M2_1:;
				if(CL_ATOMP(LOCAL(3)))
				{
					LOAD_NIL(LOCAL(2));
					goto RETURN2;
				}
				{
					COPY(LOCAL(3), LOCAL(4));
					COPY(GET_CAR(LOCAL(4)), LOCAL(2));
				}
				COPY(LOCAL(2), LOCAL(4));
				COPY(LOCAL(0), LOCAL(5));
				add_q(LOCAL(4));
				{
					COPY(LOCAL(3), LOCAL(4));
					COPY(GET_CDR(LOCAL(4)), LOCAL(3));
				}
				goto M2_1;
				RETURN2:;
			}
			else
			{
				LOAD_FIXNUM(LOCAL(2), 0, LOCAL(2));
				M3_1:;
				COPY(LOCAL(2), LOCAL(3));
				COPY(LOCAL(1), LOCAL(4));
				Flength(LOCAL(4));
				Fge(LOCAL(3), 2);
				if(CL_TRUEP(LOCAL(3)))
				{
					goto RETURN3;
				}
				COPY(LOCAL(1), LOCAL(3));
				COPY(LOCAL(2), LOCAL(4));
				Felt(LOCAL(3));
				COPY(LOCAL(0), LOCAL(4));
				add_q(LOCAL(3));
				F1plus(LOCAL(2));
				goto M3_1;
				RETURN3:;
			}
			{
				CL_FORM *rest_3;
				rest_3 = rest_1;
				rest_1 = REST_CDR(rest_3);
			}
			goto M1_1;
		}
		RETURN1:;
		COPY(GET_CAR(LOCAL(0)), ARG(0));
	}
}
