/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fcharacter(CL_FORM *base)
{
	if(CL_CHARP(ARG(0)))
	{
	}
	else
	{
		if(CL_SYMBOLP(ARG(0)) || CL_NILP(ARG(0)))
		{
			COPY(ARG(0), ARG(1));
			if(CL_SYMBOLP(ARG(1)))
			{
				GET_SYM_NAME(ARG(3), ARG(1), ARG(0));
			}
			else
			{
				LOAD_SMSTR((CL_FORM *)&KClisp[243], ARG(0));	/* NIL */
			}
		}
		COPY(ARG(0), ARG(1));
		Fstringp(ARG(1));
		if(CL_TRUEP(ARG(1)))
		{
			COPY(ARG(0), ARG(1));
			Flength(ARG(1));
			LOAD_SMALLFIXNUM(1, ARG(2));
			Fnumeql(ARG(1), 2);
		}
		else
		{
			goto ELSE1;
		}
		if(CL_TRUEP(ARG(1)))
		{
			LOAD_SMALLFIXNUM(0, ARG(1));
			Frow_major_aref(ARG(0));
		}
		else
		{
			ELSE1:;
			LOAD_SMSTR((CL_FORM *)&KClisp[162], ARG(1));	/* cannot coerce ~S to type character */
			COPY(ARG(0), ARG(2));
			Ferror(ARG(1), 2);
		}
	}
}
