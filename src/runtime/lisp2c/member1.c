/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

static void Z11_lambda(CL_FORM *base, int nargs);

void member1(CL_FORM *base)
{
	GEN_HEAPVAR(ARG(3), ARG(5));
	if(CL_TRUEP(ARG(2)))
	{
	}
	else
	{
		if(CL_TRUEP(INDIRECT(ARG(3))))
		{
			GEN_CLOSURE(array, ARG(5), 4, Z11_lambda, -1);
			COPY(ARG(3), &array[3]);
			LOAD_CLOSURE(array, ARG(5));
			COPY(ARG(5), ARG(2));
		}
		else
		{
			GEN_STATIC_GLOBAL_FUNARG(extern_closure, Feql, 2);
			LOAD_GLOBFUN(&extern_closure, ARG(2));
		}
	}
	COPY(ARG(1), ARG(5));
	M1_1:;
	if(CL_TRUEP(ARG(5)))
	{
		COPY(ARG(2), ARG(6));
		COPY(ARG(0), ARG(7));
		if(CL_TRUEP(ARG(4)))
		{
			COPY(ARG(4), ARG(8));
			if(CL_CONSP(ARG(5)))
			{
				COPY(GET_CAR(ARG(5)), ARG(9));
			}
			else
			{
				LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(9));	/* ~a is not a list */
				COPY(ARG(5), ARG(10));
				Ferror(ARG(9), 2);
			}
			Ffuncall(ARG(8), 2);
			mv_count = 1;
		}
		else
		{
			if(CL_CONSP(ARG(5)))
			{
				COPY(GET_CAR(ARG(5)), ARG(8));
			}
			else
			{
				LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(8));	/* ~a is not a list */
				COPY(ARG(5), ARG(9));
				Ferror(ARG(8), 2);
			}
		}
		Ffuncall(ARG(6), 3);
		mv_count = 1;
		if(CL_TRUEP(ARG(6)))
		{
			COPY(ARG(5), ARG(0));
		}
		else
		{
			if(CL_CONSP(ARG(5)))
			{
				COPY(GET_CDR(ARG(5)), ARG(6));
			}
			else
			{
				LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(6));	/* ~a is not a list */
				COPY(ARG(5), ARG(7));
				Ferror(ARG(6), 2);
			}
			COPY(ARG(6), ARG(5));
			goto M1_1;
		}
	}
	else
	{
		LOAD_NIL(ARG(0));
	}
	goto RETURN1;
	RETURN1:;
}

static void Z11_lambda(CL_FORM *base, int nargs)
{
	CL_FORM *rest_0;
	CL_FORM *local;
	rest_0 = ARG(1);
	local = ARG(nargs + 1);
	{
		COPY(INDIRECT(GET_FORM(ARG(0)) + 3), LOCAL(0));
		REST_APPLY(LOCAL(0), 1, rest_0);
		mv_count = 1;
		if(CL_TRUEP(LOCAL(0)))
		{
			LOAD_NIL(ARG(0));
		}
		else
		{
			LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(0));	/* T */
		}
	}
}
