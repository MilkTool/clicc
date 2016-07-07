/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void rt_set_prop(CL_FORM *base)
{
	COPY(ARG(0), ARG(3));
	COPY(ARG(1), ARG(4));
	get_prop(ARG(3));
	if(CL_TRUEP(ARG(3)))
	{
		COPY(GET_CDR(ARG(3)), ARG(4));
		if(CL_CONSP(ARG(4)))
		{
			COPY(ARG(2), GET_CAR(ARG(4)));
		}
		else
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[237], ARG(5));	/* ~a is not a cons */
			COPY(ARG(4), ARG(6));
			Ferror(ARG(5), 2);
		}
	}
	else
	{
		ALLOC_CONS(ARG(7), ARG(2), ARG(0), ARG(5));
		ALLOC_CONS(ARG(6), ARG(1), ARG(5), ARG(0));
	}
}
