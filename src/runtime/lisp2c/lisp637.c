/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fposition_if_not(CL_FORM *base, int nargs)
{
	BOOL supl_flags[4];
	static CL_FORM * keylist[] =
	{
		SYMBOL(Slisp, 284),	/* FROM-END */
		SYMBOL(Slisp, 229),	/* START */
		SYMBOL(Slisp, 230),	/* END */
		SYMBOL(Slisp, 207),	/* KEY */
	};
	keysort(ARG(2), nargs - 2, 4, keylist, supl_flags, FALSE);
	if(NOT(supl_flags[0]))
	{
		LOAD_NIL(ARG(2));
	}
	if(NOT(supl_flags[1]))
	{
		LOAD_SMALLFIXNUM(0, ARG(3));
	}
	if(NOT(supl_flags[2]))
	{
		COPY(SYMVAL(Slisp, 0), ARG(4));	/* MOST-POSITIVE-FIXNUM */
	}
	if(NOT(supl_flags[3]))
	{
		LOAD_NIL(ARG(5));
	}
	position_if_not1(ARG(0));
}
