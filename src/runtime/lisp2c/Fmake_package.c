/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fmake_package(CL_FORM *base, int nargs)
{
	BOOL supl_flags[2];
	static CL_FORM * keylist[] =
	{
		SYMBOL(Slisp, 373),	/* NICKNAMES */
		SYMBOL(Slisp, 381),	/* USE */
	};
	keysort(ARG(1), nargs - 1, 2, keylist, supl_flags, FALSE);
	if(NOT(supl_flags[0]))
	{
		LOAD_NIL(ARG(1));
	}
	if(NOT(supl_flags[1]))
	{
		LOAD_CONS((CL_FORM *)&KClisp[224], ARG(2));
	}
	make_package1(ARG(0));
}
