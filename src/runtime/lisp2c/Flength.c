/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

GEN_GLOBAL_FUNARG(CFlength, Flength, 1);

void Flength(CL_FORM *base)
{
	if(CL_TRUEP(ARG(0)))
	{
		if(CL_CONSP(ARG(0)))
		{
			LOAD_FIXNUM(ARG(1), 0, ARG(1));
			COPY(ARG(0), ARG(2));
			M1_1:;
			if(CL_ATOMP(ARG(2)))
			{
				goto RETURN1;
			}
			F1plus(ARG(1));
			COPY(ARG(2), ARG(3));
			COPY(GET_CDR(ARG(3)), ARG(2));
			goto M1_1;
			RETURN1:;
			COPY(ARG(1), ARG(0));
		}
		else
		{
			if(CL_SMVECP(ARG(0)))
			{
				LOAD_FIXNUM(ARG(2), AR_SIZE(GET_FORM(ARG(0))), ARG(0));
			}
			else
			{
				COPY(ARG(0), ARG(1));
				LOAD_SYMBOL(SYMBOL(Slisp, 150), ARG(2));	/* COMPLEX-VECTOR */
				rt_struct_typep(ARG(1));
				if(CL_TRUEP(ARG(1)))
				{
					COPY(ARG(0), ARG(1));
					complex_vector_fillptr(ARG(1));
					Fminusp(ARG(1));
					if(CL_TRUEP(ARG(1)))
					{
						complex_vector_length(ARG(0));
					}
					else
					{
						complex_vector_fillptr(ARG(0));
					}
				}
				else
				{
					COPY(SYMVAL(Slisp, 58), ARG(1));	/* WRONG_TYPE */
					COPY(ARG(0), ARG(2));
					LOAD_SYMBOL(SYMBOL(Slisp, 36), ARG(3));	/* SEQUENCE */
					Ferror(ARG(1), 3);
				}
			}
		}
	}
	else
	{
		LOAD_FIXNUM(ARG(1), 0, ARG(0));
	}
}
