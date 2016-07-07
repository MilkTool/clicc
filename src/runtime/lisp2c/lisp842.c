/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void FFI_lisp_float(CL_FORM *base)
{
	COPY(ARG(0), ARG(1));
	c_floating_p(ARG(1));
	if(CL_TRUEP(ARG(1)))
	{
		rt_make_lisp_float(ARG(0));
	}
	else
	{
		if(CL_FLOATP(ARG(0)))
		{
		}
		else
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[6], ARG(1));	/* LISP-FLOAT */
			COPY(SYMVAL(Slisp, 714), ARG(2));	/* NO-FLOAT */
			COPY(ARG(0), ARG(3));
			error_in(ARG(1), 3);
		}
	}
}