/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void float1(CL_FORM *base)
{
	if(CL_TRUEP(ARG(1)))
	{
		if(CL_FLOATP(ARG(1)))
		{
			goto ELSE1;
		}
		else
		{
			goto THEN2;
		}
	}
	else
	{
		goto ELSE1;
	}
	{
		THEN2:;
		LOAD_SMSTR((CL_FORM *)&KClisp[0], ARG(2));	/* The value of OTHER, ~S, should be a FLOAT */
		COPY(ARG(1), ARG(3));
		Ferror(ARG(2), 2);
	}
	ELSE1:;
	rt_float(ARG(0));
}