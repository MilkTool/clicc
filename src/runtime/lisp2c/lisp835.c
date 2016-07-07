/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void FFI_c_unsigned_long(CL_FORM *base)
{
	if(CL_FIXNUMP(ARG(0)))
	{
		rt_make_c_unsigned_long(ARG(0));
	}
	else
	{
		COPY(ARG(0), ARG(1));
		c_primitive_p(ARG(1));
		if(CL_TRUEP(ARG(1)))
		{
			rt_cast_c_unsigned_long(ARG(0));
		}
		else
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[20], ARG(1));	/* C-UNSIGNED-LONG */
			COPY(SYMVAL(Slisp, 713), ARG(2));	/* NO-INTEGER */
			COPY(ARG(0), ARG(3));
			error_in(ARG(1), 3);
		}
	}
}
