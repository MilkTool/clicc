/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fsubst_if_not(CL_FORM *base, int nargs)
{
	BOOL supl_flags[1];
	static CL_FORM * keylist[] =
	{
		SYMBOL(Slisp, 207),	/* KEY */
	};
	keysort(ARG(3), nargs - 3, 1, keylist, supl_flags, FALSE);
	if(NOT(supl_flags[0]))
	{
		LOAD_NIL(ARG(3));
	}
	subst_if_not1(ARG(0));
}
