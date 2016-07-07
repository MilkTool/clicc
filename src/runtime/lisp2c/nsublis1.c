/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

static void Z12_nsublis_internal(CL_FORM *base, CL_FORM *display[]);
static void Z13_lambda(CL_FORM *base, int nargs);

void nsublis1(CL_FORM *base)
{
	CL_FORM *display[1];
	GEN_HEAPVAR(ARG(3), ARG(5));
	if(CL_TRUEP(ARG(2)))
	{
	}
	else
	{
		if(CL_TRUEP(INDIRECT(ARG(3))))
		{
			GEN_CLOSURE(array, ARG(5), 4, Z13_lambda, -1);
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
	display[0] = ARG(0);
	Z12_nsublis_internal(ARG(5), display);
	COPY(ARG(5), ARG(0));
}

static void Z12_nsublis_internal(CL_FORM *base, CL_FORM *display[])
{
	COPY(ARG(0), ARG(1));
	COPY(&display[0][0], ARG(2));
	COPY(&display[0][2], ARG(3));
	LOAD_NIL(ARG(4));
	COPY(&display[0][4], ARG(5));
	assoc1(ARG(1));
	if(CL_TRUEP(ARG(1)))
	{
		if(CL_CONSP(ARG(1)))
		{
			COPY(GET_CDR(ARG(1)), ARG(0));
		}
		else
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(0));	/* ~a is not a list */
			Ferror(ARG(0), 2);
		}
	}
	else
	{
		if(CL_CONSP(ARG(0)))
		{
			COPY(GET_CAR(ARG(0)), ARG(2));
		}
		else
		{
			if(CL_TRUEP(ARG(0)))
			{
				LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(2));	/* ~a is not a list */
				COPY(ARG(0), ARG(3));
				Ferror(ARG(2), 2);
			}
			else
			{
				COPY(ARG(0), ARG(2));
			}
		}
		Z12_nsublis_internal(ARG(2), display);
		if(CL_CONSP(ARG(0)))
		{
			COPY(GET_CDR(ARG(0)), ARG(3));
		}
		else
		{
			if(CL_TRUEP(ARG(0)))
			{
				LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(3));	/* ~a is not a list */
				COPY(ARG(0), ARG(4));
				Ferror(ARG(3), 2);
			}
			else
			{
				COPY(ARG(0), ARG(3));
			}
		}
		Z12_nsublis_internal(ARG(3), display);
		if(CL_CONSP(ARG(0)))
		{
			COPY(ARG(2), GET_CAR(ARG(0)));
		}
		else
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[237], ARG(4));	/* ~a is not a cons */
			COPY(ARG(0), ARG(5));
			Ferror(ARG(4), 2);
		}
		if(CL_CONSP(ARG(0)))
		{
			COPY(ARG(3), GET_CDR(ARG(0)));
		}
		else
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[235], ARG(4));	/* ~a is not a cons */
			COPY(ARG(0), ARG(5));
			Ferror(ARG(4), 2);
		}
	}
}

static void Z13_lambda(CL_FORM *base, int nargs)
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
