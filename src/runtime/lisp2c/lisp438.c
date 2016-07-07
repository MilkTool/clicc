/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

GEN_GLOBAL_FUNARG(Craw_make_package, raw_make_package, -1);

void raw_make_package(CL_FORM *base, int nargs)
{
	BOOL supl_flags[7];
	static CL_FORM * keylist[] =
	{
		SYMBOL(Slisp, 252),	/* NAME */
		SYMBOL(Slisp, 373),	/* NICKNAMES */
		SYMBOL(Slisp, 374),	/* INTERNAL */
		SYMBOL(Slisp, 375),	/* EXTERNAL */
		SYMBOL(Slisp, 376),	/* SHADOWINGS */
		SYMBOL(Slisp, 377),	/* USE-LIST */
		SYMBOL(Slisp, 378),	/* USED-BY-LIST */
	};
	keysort(ARG(0), nargs - 0, 7, keylist, supl_flags, FALSE);
	if(NOT(supl_flags[0]))
	{
		LOAD_SMSTR((CL_FORM *)&KClisp[222], ARG(0));	/*  */
	}
	if(NOT(supl_flags[1]))
	{
		LOAD_NIL(ARG(1));
	}
	if(NOT(supl_flags[2]))
	{
		COPY(SYMVAL(Slisp, 372), ARG(7));	/* PACKAGE-HASHTAB-SIZE */
		LOAD_SYMBOL(SYMBOL(Slisp, 152), ARG(8));	/* INITIAL-ELEMENT */
		LOAD_NIL(ARG(9));
		LOAD_SYMBOL(SYMBOL(Slisp, 99), ARG(10));	/* ELEMENT-TYPE */
		LOAD_SYMBOL(SYMBOL(Slisp, 28), ARG(11));	/* LIST */
		Fmake_array(ARG(7), 5);
		COPY(ARG(7), ARG(2));
	}
	if(NOT(supl_flags[3]))
	{
		COPY(SYMVAL(Slisp, 372), ARG(7));	/* PACKAGE-HASHTAB-SIZE */
		LOAD_SYMBOL(SYMBOL(Slisp, 152), ARG(8));	/* INITIAL-ELEMENT */
		LOAD_NIL(ARG(9));
		LOAD_SYMBOL(SYMBOL(Slisp, 99), ARG(10));	/* ELEMENT-TYPE */
		LOAD_SYMBOL(SYMBOL(Slisp, 28), ARG(11));	/* LIST */
		Fmake_array(ARG(7), 5);
		COPY(ARG(7), ARG(3));
	}
	if(NOT(supl_flags[4]))
	{
		LOAD_NIL(ARG(4));
	}
	if(NOT(supl_flags[5]))
	{
		LOAD_NIL(ARG(5));
	}
	if(NOT(supl_flags[6]))
	{
		LOAD_NIL(ARG(6));
	}
	LOAD_SYMBOL(SYMBOL(Slisp, 344), ARG(7));	/* PACKAGE */
	COPY(ARG(0), ARG(8));
	COPY(ARG(1), ARG(9));
	COPY(ARG(2), ARG(10));
	COPY(ARG(3), ARG(11));
	COPY(ARG(4), ARG(12));
	COPY(ARG(5), ARG(13));
	COPY(ARG(6), ARG(14));
	rt_make_struct(ARG(7), 8);
	COPY(ARG(7), ARG(0));
}
