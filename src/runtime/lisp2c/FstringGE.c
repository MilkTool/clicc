/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void FstringGE(CL_FORM *base, int nargs)
{
	BOOL supl_flags[4];
	static CL_FORM * keylist[] =
	{
		SYMBOL(Slisp, 302),	/* START1 */
		SYMBOL(Slisp, 303),	/* END1 */
		SYMBOL(Slisp, 280),	/* START2 */
		SYMBOL(Slisp, 281),	/* END2 */
	};
	keysort(ARG(2), nargs - 2, 4, keylist, supl_flags, FALSE);
	if(NOT(supl_flags[0]))
	{
		LOAD_FIXNUM(ARG(6), 0, ARG(2));
	}
	if(NOT(supl_flags[1]))
	{
		LOAD_NIL(ARG(3));
	}
	if(NOT(supl_flags[2]))
	{
		LOAD_FIXNUM(ARG(6), 0, ARG(4));
	}
	if(NOT(supl_flags[3]))
	{
		LOAD_NIL(ARG(5));
	}
	stringGE1(ARG(0));
}
