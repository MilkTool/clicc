/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fpathname_name(CL_FORM *base, int nargs)
{
	BOOL supl_flags[1];
	static CL_FORM * keylist[] =
	{
		SYMBOL(Slisp, 268),	/* CASE */
	};
	keysort(ARG(1), nargs - 1, 1, keylist, supl_flags, FALSE);
	if(NOT(supl_flags[0]))
	{
		LOAD_SYMBOL(SYMBOL(Slisp, 267), ARG(1));	/* LOCAL */
	}
	pathname_name1(ARG(0));
}
