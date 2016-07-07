/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fnsubstitute(CL_FORM *base, int nargs)
{
	BOOL supl_flags[7];
	static CL_FORM * keylist[] =
	{
		SYMBOL(Slisp, 284),	/* FROM-END */
		SYMBOL(Slisp, 272),	/* TEST */
		SYMBOL(Slisp, 553),	/* TEST-NOT */
		SYMBOL(Slisp, 229),	/* START */
		SYMBOL(Slisp, 230),	/* END */
		SYMBOL(Slisp, 382),	/* COUNT */
		SYMBOL(Slisp, 207),	/* KEY */
	};
	keysort(ARG(3), nargs - 3, 7, keylist, supl_flags, FALSE);
	if(NOT(supl_flags[0]))
	{
		LOAD_NIL(ARG(3));
	}
	if(NOT(supl_flags[1]))
	{
		LOAD_NIL(ARG(4));
	}
	if(NOT(supl_flags[2]))
	{
		LOAD_NIL(ARG(5));
	}
	if(NOT(supl_flags[3]))
	{
		LOAD_SMALLFIXNUM(0, ARG(6));
	}
	if(NOT(supl_flags[4]))
	{
		COPY(SYMVAL(Slisp, 0), ARG(7));	/* MOST-POSITIVE-FIXNUM */
	}
	if(NOT(supl_flags[5]))
	{
		COPY(SYMVAL(Slisp, 0), ARG(8));	/* MOST-POSITIVE-FIXNUM */
	}
	if(NOT(supl_flags[6]))
	{
		LOAD_NIL(ARG(9));
	}
	nsubstitute1(ARG(0));
}