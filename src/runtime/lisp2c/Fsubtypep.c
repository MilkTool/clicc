/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fsubtypep(CL_FORM *base)
{
	if(CL_SYMBOLP(ARG(1)) && GET_SYMBOL(ARG(1)) == SYMBOL(Slisp, 48))	/* T */
	{
		LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(0));	/* T */
	}
	else
	{
		LOAD_SMSTR((CL_FORM *)&KClisp[58], ARG(2));	/* (SUBTYPEP ~S ~S) is not implemented */
		COPY(ARG(0), ARG(3));
		COPY(ARG(1), ARG(4));
		Ferror(ARG(2), 3);
	}
}
