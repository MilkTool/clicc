/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fnstring_upcase(CL_FORM *base, int nargs)
{
	BOOL supl_flags[2];
	static CL_FORM * keylist[] =
	{
		SYMBOL(Slisp, 229),	/* START */
		SYMBOL(Slisp, 230),	/* END */
	};
	keysort(ARG(1), nargs - 1, 2, keylist, supl_flags, FALSE);
	if(NOT(supl_flags[0]))
	{
		LOAD_SMALLFIXNUM(0, ARG(1));
	}
	if(NOT(supl_flags[1]))
	{
		LOAD_NIL(ARG(2));
	}
	nstring_upcase1(ARG(0));
}
