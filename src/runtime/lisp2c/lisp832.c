/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void FFI_c_unsigned_char(CL_FORM *base)
{
	if(CL_CHARP(ARG(0)))
	{
		rt_make_c_unsigned_char(ARG(0));
	}
	else
	{
		if(CL_FIXNUMP(ARG(0)))
		{
			rt_make_c_unsigned_char_2(ARG(0));
		}
		else
		{
			COPY(ARG(0), ARG(1));
			c_primitive_p(ARG(1));
			if(CL_TRUEP(ARG(1)))
			{
				rt_cast_c_unsigned_char(ARG(0));
			}
			else
			{
				LOAD_SMSTR((CL_FORM *)&KClisp[218], ARG(1));	/* ~&Error in ~A: ~?~% */
				LOAD_SMSTR((CL_FORM *)&KClisp[26], ARG(2));	/* C-UNSIGNED-CHAR */
				COPY(SYMVAL(Slisp, 712), ARG(3));	/* NO-CHARACTER */
				COPY(ARG(0), ARG(4));
				Flist(ARG(4), 1);
				Ferror(ARG(1), 4);
			}
		}
	}
}
