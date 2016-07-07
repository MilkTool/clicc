/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fset_cdr(CL_FORM *base)
{
	if(CL_CONSP(ARG(1)))
	{
		COPY(ARG(0), GET_CDR(ARG(1)));
	}
	else
	{
		LOAD_SMSTR((CL_FORM *)&KClisp[231], ARG(0));	/* ~a is not a cons */
		Ferror(ARG(0), 2);
	}
}
