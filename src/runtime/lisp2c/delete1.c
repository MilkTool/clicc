/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

static void Z41_lambda(CL_FORM *base, int nargs);

void delete1(CL_FORM *base)
{
	GEN_HEAPVAR(ARG(4), ARG(9));
	if(CL_TRUEP(ARG(1)))
	{
		if(CL_CONSP(ARG(1)))
		{
			COPY(INDIRECT(ARG(4)), ARG(4));
			list_delete(ARG(0));
		}
		else
		{
			if(CL_TRUEP(ARG(3)))
			{
			}
			else
			{
				if(CL_TRUEP(INDIRECT(ARG(4))))
				{
					GEN_CLOSURE(array, ARG(9), 4, Z41_lambda, -1);
					COPY(ARG(4), &array[3]);
					LOAD_CLOSURE(array, ARG(9));
					COPY(ARG(9), ARG(3));
				}
				else
				{
					GEN_STATIC_GLOBAL_FUNARG(extern_closure, Feql, 2);
					LOAD_GLOBFUN(&extern_closure, ARG(3));
				}
			}
			COPY(ARG(5), ARG(4));
			COPY(ARG(6), ARG(5));
			COPY(ARG(7), ARG(6));
			COPY(ARG(8), ARG(7));
			vector_remove(ARG(0));
		}
	}
	else
	{
		LOAD_NIL(ARG(0));
	}
}

static void Z41_lambda(CL_FORM *base, int nargs)
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
