/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

static void Z34_lambda(CL_FORM *base, int nargs);

void nsubstitute1(CL_FORM *base)
{
	GEN_HEAPVAR(ARG(5), ARG(10));
	if(CL_TRUEP(ARG(4)))
	{
	}
	else
	{
		if(CL_TRUEP(INDIRECT(ARG(5))))
		{
			GEN_CLOSURE(array, ARG(10), 4, Z34_lambda, -1);
			COPY(ARG(5), &array[3]);
			LOAD_CLOSURE(array, ARG(10));
			COPY(ARG(10), ARG(4));
		}
		else
		{
			GEN_STATIC_GLOBAL_FUNARG(extern_closure, Feql, 2);
			LOAD_GLOBFUN(&extern_closure, ARG(4));
		}
	}
	if(CL_LISTP(ARG(2)))
	{
		if(CL_TRUEP(ARG(3)))
		{
			COPY(ARG(0), ARG(10));
			COPY(ARG(1), ARG(11));
			if(CL_TRUEP(ARG(2)))
			{
				if(CL_CONSP(ARG(2)))
				{
					COPY(ARG(2), ARG(12));
					list_nreverse(ARG(12));
				}
				else
				{
					COPY(ARG(2), ARG(12));
					vector_nreverse(ARG(12));
				}
			}
			else
			{
				LOAD_NIL(ARG(12));
			}
			COPY(ARG(4), ARG(13));
			COPY(ARG(6), ARG(14));
			COPY(ARG(7), ARG(15));
			COPY(ARG(8), ARG(16));
			COPY(ARG(9), ARG(17));
			nlist_substitute(ARG(10));
			if(CL_TRUEP(ARG(10)))
			{
				if(CL_CONSP(ARG(10)))
				{
					COPY(ARG(10), ARG(0));
					list_nreverse(ARG(0));
				}
				else
				{
					COPY(ARG(10), ARG(0));
					vector_nreverse(ARG(0));
				}
			}
			else
			{
				LOAD_NIL(ARG(0));
			}
		}
		else
		{
			COPY(ARG(4), ARG(3));
			COPY(ARG(6), ARG(4));
			COPY(ARG(7), ARG(5));
			COPY(ARG(8), ARG(6));
			COPY(ARG(9), ARG(7));
			nlist_substitute(ARG(0));
		}
	}
	else
	{
		COPY(ARG(2), ARG(10));
		Flength(ARG(10));
		COPY(ARG(7), ARG(11));
		COPY(ARG(10), ARG(12));
		Fgt(ARG(11), 2);
		if(CL_TRUEP(ARG(11)))
		{
			COPY(ARG(10), ARG(7));
		}
		if(CL_TRUEP(ARG(3)))
		{
			COPY(ARG(0), ARG(10));
			COPY(ARG(1), ARG(11));
			COPY(ARG(2), ARG(12));
			LOAD_SMALLFIXNUM(-1, ARG(13));
			COPY(ARG(4), ARG(14));
			COPY(ARG(7), ARG(15));
			F1minus(ARG(15));
			COPY(ARG(6), ARG(16));
			F1minus(ARG(16));
			COPY(ARG(8), ARG(17));
			COPY(ARG(9), ARG(18));
			nvector_substitute(ARG(10));
			COPY(ARG(10), ARG(0));
		}
		else
		{
			LOAD_SMALLFIXNUM(1, ARG(3));
			COPY(ARG(6), ARG(5));
			COPY(ARG(7), ARG(6));
			COPY(ARG(8), ARG(7));
			COPY(ARG(9), ARG(8));
			nvector_substitute(ARG(0));
		}
	}
}

static void Z34_lambda(CL_FORM *base, int nargs)
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