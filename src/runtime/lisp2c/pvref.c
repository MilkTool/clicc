/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void pvref(CL_FORM *base)
{
	if(CL_FIXNUMP(ARG(1)))
	{
		LOAD_SMALLFIXNUM(0, ARG(2));
		COPY(ARG(1), ARG(3));
		LOAD_FIXNUM(ARG(5), AR_SIZE(GET_FORM(ARG(0))), ARG(4));
		F1minus(ARG(4));
		Fle(ARG(2), 3);
	}
	else
	{
		goto ELSE1;
	}
	if(CL_TRUEP(ARG(2)))
	{
	}
	else
	{
		ELSE1:;
		COPY(SYMVAL(Slisp, 151), ARG(2));	/* OUT_OF_RANGE */
		COPY(ARG(1), ARG(3));
		LOAD_FIXNUM(ARG(5), AR_SIZE(GET_FORM(ARG(0))), ARG(4));
		Ferror(ARG(2), 3);
	}
	rt_pvref(ARG(0));
}
