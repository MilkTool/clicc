/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

CL_INIT Kimport1[] =
{
	MAKE_STRING(44, "a symbol ~S is already present in package ~S"),	/* 0 */
};

void import1(CL_FORM *base)
{
	coerce_to_package(ARG(1));
	if(CL_LISTP(ARG(0)))
	{
	}
	else
	{
		COPY(ARG(0), ARG(2));
		Flist(ARG(2), 1);
		COPY(ARG(2), ARG(0));
	}
	LOAD_NIL(ARG(2));
	COPY(ARG(0), ARG(3));
	M1_1:;
	if(CL_ATOMP(ARG(3)))
	{
		LOAD_NIL(ARG(2));
		goto RETURN2;
	}
	COPY(ARG(3), ARG(4));
	COPY(GET_CAR(ARG(4)), ARG(2));
	if(CL_SYMBOLP(ARG(2)))
	{
		LOAD_SMSTR(SYM_NAME(ARG(2)), ARG(4));
	}
	else
	{
		if(CL_TRUEP(ARG(2)))
		{
			COPY(SYMVAL(Slisp, 676), ARG(4));	/* SYM_EXPECTED */
			COPY(ARG(2), ARG(5));
			Ferror(ARG(4), 2);
		}
		else
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[266], ARG(4));	/* NIL */
		}
	}
	COPY(ARG(1), ARG(5));
	find_symbol1(ARG(4));
	COPY(&mv_buf[0], ARG(5));
	{
		int nargs;
		nargs = 2;
		mv_count = 1;
		{
			switch(nargs)
			{
				case 0:
				LOAD_NIL(ARG(4));
				case 1:
				LOAD_NIL(ARG(5));
				nargs = 2;
			}
			if(CL_TRUEP(ARG(5)))
			{
				if(EQ(ARG(2), ARG(4)))
				{
				}
				else
				{
					LOAD_SMSTR((CL_FORM *)&Kimport1[0], ARG(6));	/* a symbol ~S is already present in package ~S */
					COPY(ARG(4), ARG(7));
					COPY(ARG(1), ARG(8));
					Ferror(ARG(6), 3);
				}
				if(CL_SYMBOLP(ARG(5)) && GET_SYMBOL(ARG(5)) == SYMBOL(Slisp, 393))	/* INHERITED */
				{
				}
				else
				{
					LOAD_NIL(ARG(0));
					goto RETURN1;
				}
			}
			COPY(ARG(2), ARG(6));
			COPY(ARG(1), ARG(7));
			internal_import(ARG(6));
		}
	}
	COPY(ARG(3), ARG(4));
	COPY(GET_CDR(ARG(4)), ARG(3));
	goto M1_1;
	RETURN2:;
	LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(0));	/* T */
	RETURN1:;
}
