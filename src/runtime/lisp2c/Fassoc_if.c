#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void Fassoc_if(CL_FORM *base, int nargs)
{
	BOOL supl_flags[1];
	static CL_FORM * keylist[] =
	{
		SYMBOL(Slisp, 139),	/* KEY */
	};
	keysort(STACK(base, 2), nargs - 2, 1, keylist, supl_flags, FALSE);
	if(NOT(supl_flags[0]))
	{
		LOAD_NIL(STACK(base, 2));
	}
	LOAD_NIL(STACK(base, 3));
	COPY(STACK(base, 1), STACK(base, 4));
	M205_1:;
	if(CL_ATOMP(STACK(base, 4)))
	{
		LOAD_NIL(STACK(base, 3));
		COPY(STACK(base, 3), STACK(base, 0));
		goto RETURN226;
	}
	COPY(STACK(base, 4), STACK(base, 5));
	Fcar(STACK(base, 5));
	COPY(STACK(base, 5), STACK(base, 3));
	COPY(STACK(base, 0), STACK(base, 5));
	COPY(STACK(base, 3), STACK(base, 6));
	Fcar(STACK(base, 6));
	if(CL_TRUEP(STACK(base, 2)))
	{
		COPY(STACK(base, 2), STACK(base, 7));
		COPY(STACK(base, 3), STACK(base, 8));
		Fcar(STACK(base, 8));
		Ffuncall(STACK(base, 7), 2);
		mv_count = 1;
	}
	else
	{
		COPY(STACK(base, 3), STACK(base, 7));
		Fcar(STACK(base, 7));
	}
	Ffuncall(STACK(base, 5), 3);
	mv_count = 1;
	if(CL_TRUEP(STACK(base, 5)))
	{
		COPY(STACK(base, 3), STACK(base, 0));
		goto RETURN225;
	}
	Fcdr(STACK(base, 4));
	goto M205_1;
	RETURN226:;
	RETURN225:;
}
