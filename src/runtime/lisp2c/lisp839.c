/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void FFI_copy_c_string(CL_FORM *base)
{
	if(CL_C_STRING_P(ARG(0)))
	{
		rt_copy_c_string(ARG(0));
	}
	else
	{
		LOAD_SMSTR((CL_FORM *)&KClisp[12], ARG(1));	/* COPY-C-STRING */
		COPY(SYMVAL(Slisp, 715), ARG(2));	/* NO-STRING */
		COPY(ARG(0), ARG(3));
		error_in(ARG(1), 3);
	}
}
