/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

CL_INIT Kbreak1[] =
{
	MAKE_STRING(44, "~&Break: call to the `break\' function.~%~?~%"),	/* 0 */
	MAKE_STRING(43, "Restart actions:~% y: continue~% n: abort~%"),	/* 2 */
};

void break1(CL_FORM *base)
{
	COPY(SYMVAL(Slisp, 62), ARG(2));	/* *ERROR-OUTPUT* */
	LOAD_SMSTR((CL_FORM *)&Kbreak1[0], ARG(3));	/* ~&Break: call to the `break' function.~%~?~% */
	COPY(ARG(0), ARG(4));
	COPY(ARG(1), ARG(5));
	Fformat(ARG(2), 4);
	mv_count = 1;
	LOAD_SMSTR((CL_FORM *)&Kbreak1[2], ARG(2));	/* Restart actions:~% y: continue~% n: abort~% */
	LOAD_NIL(ARG(3));
	y_or_n_p1(ARG(2));
	if(CL_TRUEP(ARG(2)))
	{
		LOAD_NIL(ARG(0));
	}
	else
	{
		LOAD_FIXNUM(ARG(2), -1, ARG(2));
		{
			int nargs;
			nargs = 1;
			{
				CL_FORM *rest_0;
				CL_FORM *local;
				rest_0 = ARG(2);
				local = ARG(nargs + 2);
				{
					GEN_STATIC_GLOBAL_FUNARG(extern_closure, rt_throw, -2);
					LOAD_GLOBFUN(&extern_closure, LOCAL(0));
				}
				LOAD_SYMBOL(SYMBOL(Slisp, 508), LOCAL(1));	/* ERROR-CATCHER */
				REST_APPLY(LOCAL(0), 2, rest_0);
				COPY(LOCAL(0), ARG(0));
			}
		}
	}
}
