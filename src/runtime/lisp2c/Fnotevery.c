/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fnotevery(CL_FORM *base, int nargs)
{
	CL_FORM *rest_0;
	CL_FORM *local;
	rest_0 = ARG(2);
	local = ARG(nargs);
	LOAD_GLOBFUN(&CFevery, LOCAL(0));
	COPY(ARG(0), LOCAL(1));
	COPY(ARG(1), LOCAL(2));
	REST_APPLY(LOCAL(0), 3, rest_0);
	mv_count = 1;
	Fnot(LOCAL(0));
	COPY(LOCAL(0), ARG(0));
}
