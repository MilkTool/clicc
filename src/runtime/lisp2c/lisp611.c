/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

static void Z156_lambda(CL_FORM *base);

void Fposition_if_not(CL_FORM *base, int nargs)
{
	CL_FORM *rest_0;
	CL_FORM *local;
	GEN_HEAPVAR(ARG(0), ARG(0 + nargs));
	rest_0 = ARG(2);
	local = ARG(nargs);
	LOAD_GLOBFUN(&CFposition, LOCAL(0));
	LOAD_NIL(LOCAL(1));
	COPY(ARG(1), LOCAL(2));
	LOAD_SYMBOL(SYMBOL(Slisp, 282), LOCAL(3));	/* TEST */
	{
		GEN_CLOSURE(array, LOCAL(4), 4, Z156_lambda, 2);
		COPY(ARG(0), &array[3]);
		LOAD_CLOSURE(array, LOCAL(4));
	}
	COPY(LOCAL(4), LOCAL(4));
	REST_APPLY(LOCAL(0), 5, rest_0);
	COPY(LOCAL(0), ARG(0));
}

static void Z156_lambda(CL_FORM *base)
{
	COPY(INDIRECT(GET_FORM(ARG(0)) + 3), ARG(3));
	COPY(ARG(2), ARG(4));
	Ffuncall(ARG(3), 2);
	mv_count = 1;
	if(CL_TRUEP(ARG(3)))
	{
		LOAD_NIL(ARG(0));
	}
	else
	{
		LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(0));	/* T */
	}
}
