/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void subseq1(CL_FORM *base)
{
	if(CL_LISTP(ARG(0)))
	{
		list_subseq(ARG(0));
	}
	else
	{
		vector_subseq(ARG(0));
	}
}
