/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fread_from_string(CL_FORM *base, int nargs)
{
	switch(nargs)
	{
		case 1:
		LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(1));	/* T */
		case 2:
		LOAD_NIL(ARG(2));
		nargs = 3;
	}
	{
		BOOL supl_flags[3];
		static CL_FORM * keylist[] =
		{
			SYMBOL(Slisp, 229),	/* START */
			SYMBOL(Slisp, 230),	/* END */
			SYMBOL(Slisp, 466),	/* PRESERVE-WHITESPACE */
		};
		keysort(ARG(3), nargs - 3, 3, keylist, supl_flags, FALSE);
		if(NOT(supl_flags[0]))
		{
			LOAD_SMALLFIXNUM(0, ARG(3));
		}
		if(NOT(supl_flags[1]))
		{
			COPY(ARG(0), ARG(6));
			Flength(ARG(6));
			COPY(ARG(6), ARG(4));
		}
		if(NOT(supl_flags[2]))
		{
			LOAD_NIL(ARG(5));
		}
	}
	read_from_string1(ARG(0));
}
