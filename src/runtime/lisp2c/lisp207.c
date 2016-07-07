/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

GEN_GLOBAL_FUNARG(Cmake_complex_base_array, make_complex_base_array, -1);

void make_complex_base_array(CL_FORM *base, int nargs)
{
	BOOL supl_flags[2];
	static CL_FORM * keylist[] =
	{
		SYMBOL(Slisp, 143),	/* DATA */
		SYMBOL(Slisp, 144),	/* DISPLACED */
	};
	keysort(ARG(0), nargs - 0, 2, keylist, supl_flags, FALSE);
	if(NOT(supl_flags[0]))
	{
		LOAD_NIL(ARG(0));
	}
	if(NOT(supl_flags[1]))
	{
		LOAD_SMALLFIXNUM(-1, ARG(1));
	}
	LOAD_SYMBOL(SYMBOL(Slisp, 145), ARG(2));	/* COMPLEX-BASE-ARRAY */
	COPY(ARG(0), ARG(3));
	COPY(ARG(1), ARG(4));
	rt_make_struct(ARG(2), 3);
	COPY(ARG(2), ARG(0));
}
