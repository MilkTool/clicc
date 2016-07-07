/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

GEN_GLOBAL_FUNARG(Cnew_hash_table, new_hash_table, -1);

void new_hash_table(CL_FORM *base, int nargs)
{
	BOOL supl_flags[6];
	static CL_FORM * keylist[] =
	{
		SYMBOL(Slisp, 407),	/* SIZE */
		SYMBOL(Slisp, 392),	/* COUNT */
		SYMBOL(Slisp, 408),	/* REHASH-SIZE */
		SYMBOL(Slisp, 409),	/* REHASH-THRESHOLD */
		SYMBOL(Slisp, 282),	/* TEST */
		SYMBOL(Slisp, 410),	/* ARRAY */
	};
	keysort(ARG(0), nargs - 0, 6, keylist, supl_flags, FALSE);
	if(NOT(supl_flags[0]))
	{
		LOAD_FIXNUM(ARG(6), 0, ARG(0));
	}
	if(NOT(supl_flags[1]))
	{
		LOAD_FIXNUM(ARG(6), 0, ARG(1));
	}
	if(NOT(supl_flags[2]))
	{
		GEN_FLOAT(ARG(6), 1.5, ARG(2));
	}
	if(NOT(supl_flags[3]))
	{
		GEN_FLOAT(ARG(6), 0.7, ARG(3));
	}
	if(NOT(supl_flags[4]))
	{
		GEN_STATIC_GLOBAL_FUNARG(extern_closure, Feql, 2);
		LOAD_GLOBFUN(&extern_closure, ARG(4));
	}
	if(NOT(supl_flags[5]))
	{
		LOAD_NIL(ARG(5));
	}
	LOAD_SYMBOL(SYMBOL(Slisp, 399), ARG(6));	/* HASH-TABLE */
	COPY(ARG(0), ARG(7));
	COPY(ARG(1), ARG(8));
	COPY(ARG(2), ARG(9));
	COPY(ARG(3), ARG(10));
	COPY(ARG(4), ARG(11));
	COPY(ARG(5), ARG(12));
	rt_make_struct(ARG(6), 7);
	COPY(ARG(6), ARG(0));
}
