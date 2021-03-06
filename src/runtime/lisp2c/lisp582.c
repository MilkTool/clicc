/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

GEN_GLOBAL_FUNARG(Cconcatenate_to_non_list, concatenate_to_non_list, -2);

void concatenate_to_non_list(CL_FORM *base, int nargs)
{
	CL_FORM *rest_0;
	CL_FORM *local;
	rest_0 = ARG(1);
	local = ARG(nargs);
	{
		LOAD_NIL(LOCAL(0));
		LOAD_FIXNUM(LOCAL(1), 0, LOCAL(1));
		LOAD_FIXNUM(LOCAL(2), 0, LOCAL(2));
		{
			CL_FORM *rest_1;
			LOAD_NIL(LOCAL(3));
			rest_1 = rest_0;
			M1_1:;
			if(NOT(REST_NOT_EMPTY(rest_1)))
			{
				LOAD_NIL(LOCAL(3));
				goto RETURN1;
			}
			{
				CL_FORM *rest_2;
				rest_2 = rest_1;
				REST_CAR(rest_2, LOCAL(3));
			}
			COPY(LOCAL(1), LOCAL(4));
			COPY(LOCAL(3), LOCAL(5));
			Flength(LOCAL(5));
			Fplus(LOCAL(4), 2);
			COPY(LOCAL(4), LOCAL(1));
			{
				CL_FORM *rest_3;
				rest_3 = rest_1;
				rest_1 = REST_CDR(rest_3);
			}
			goto M1_1;
		}
		RETURN1:;
		{
			COPY(ARG(0), LOCAL(3));
			COPY(LOCAL(1), LOCAL(4));
			COPY(LOCAL(3), LOCAL(5));
			COPY(LOCAL(4), LOCAL(6));
			LOAD_NIL(LOCAL(7));
			LOAD_NIL(LOCAL(8));
			make_sequence1(LOCAL(5));
			COPY(LOCAL(5), LOCAL(0));
		}
		{
			CL_FORM *rest_4;
			LOAD_NIL(LOCAL(3));
			rest_4 = rest_0;
			M2_1:;
			if(NOT(REST_NOT_EMPTY(rest_4)))
			{
				LOAD_NIL(LOCAL(3));
				goto RETURN2;
			}
			{
				CL_FORM *rest_5;
				rest_5 = rest_4;
				REST_CAR(rest_5, LOCAL(3));
			}
			if(CL_LISTP(LOCAL(3)))
			{
				LOAD_NIL(LOCAL(4));
				COPY(LOCAL(3), LOCAL(5));
				M3_1:;
				if(CL_ATOMP(LOCAL(5)))
				{
					LOAD_NIL(LOCAL(4));
					goto RETURN3;
				}
				{
					COPY(LOCAL(5), LOCAL(6));
					COPY(GET_CAR(LOCAL(6)), LOCAL(4));
				}
				COPY(LOCAL(4), LOCAL(6));
				COPY(LOCAL(0), LOCAL(7));
				COPY(LOCAL(2), LOCAL(8));
				Fset_elt(LOCAL(6));
				F1plus(LOCAL(2));
				{
					COPY(LOCAL(5), LOCAL(6));
					COPY(GET_CDR(LOCAL(6)), LOCAL(5));
				}
				goto M3_1;
				RETURN3:;
			}
			else
			{
				LOAD_FIXNUM(LOCAL(4), 0, LOCAL(4));
				M4_1:;
				COPY(LOCAL(4), LOCAL(5));
				COPY(LOCAL(3), LOCAL(6));
				Flength(LOCAL(6));
				Fge(LOCAL(5), 2);
				if(CL_TRUEP(LOCAL(5)))
				{
					goto RETURN4;
				}
				COPY(LOCAL(3), LOCAL(5));
				COPY(LOCAL(4), LOCAL(6));
				Felt(LOCAL(5));
				COPY(LOCAL(0), LOCAL(6));
				COPY(LOCAL(2), LOCAL(7));
				Fset_elt(LOCAL(5));
				F1plus(LOCAL(2));
				F1plus(LOCAL(4));
				goto M4_1;
				RETURN4:;
			}
			{
				CL_FORM *rest_6;
				rest_6 = rest_4;
				rest_4 = REST_CDR(rest_6);
			}
			goto M2_1;
		}
		RETURN2:;
		COPY(LOCAL(0), ARG(0));
	}
}
