/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void Fmake_sequence(CL_FORM *base, int nargs)
{
	BOOL supl_flags[1];
	static CL_FORM * keylist[] =
	{
		SYMBOL(Slisp, 155),	/* INITIAL-ELEMENT */
	};
	keysort(ARG(2), nargs - 2, 1, keylist, supl_flags, FALSE);
	if(NOT(supl_flags[0]))
	{
		LOAD_NIL(ARG(2));
		LOAD_NIL(ARG(3));
	}
	else
	{
		LOAD_T(ARG(3));
	}
	make_sequence1(ARG(0));
}