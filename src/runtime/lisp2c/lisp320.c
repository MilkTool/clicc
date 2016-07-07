/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fmake_instance(CL_FORM *base, int nargs)
{
	Flist(ARG(1), nargs - 1);
	if(CL_INSTANCEP(ARG(0)))
	{
		if(CL_TRUEP(OFFSET(AR_BASE(GET_FORM(ARG(0))), -1 + 1)))
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
	}
	goto ENDIF3;
	{
		ELSE1:;
		LOAD_SMSTR((CL_FORM *)&KClisp[218], ARG(2));	/* ~&Error in ~A: ~?~% */
		LOAD_SYMBOL(SYMBOL(Slisp, 196), ARG(3));	/* MAKE-INSTANCE */
		if(CL_SYMBOLP(ARG(0)) || CL_NILP(ARG(0)))
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[128], ARG(4));	/* The computed symbol ~S is not a valid class-argument, ~
                   these have been restricted to classes. */
		}
		else
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[126], ARG(4));	/* ~S is not a valid class-argument. */
		}
		COPY(ARG(0), ARG(5));
		Flist(ARG(5), 1);
		Ferror(ARG(2), 4);
	}
	ENDIF3:;
	COPY(OFFSET(AR_BASE(GET_FORM(ARG(0))), 2 + 1), ARG(2));
	F1plus(ARG(2));
	rt_make_instance(ARG(2));
	LOAD_SMALLFIXNUM(0, ARG(3));
	COPY(ARG(0), OFFSET(AR_BASE(GET_FORM(ARG(2))), -1 + 1));
	LOAD_NIL(ARG(4));
	COPY(OFFSET(AR_BASE(GET_FORM(ARG(0))), 3 + 1), ARG(5));
	M1_1:;
	if(CL_ATOMP(ARG(5)))
	{
		LOAD_NIL(ARG(4));
		goto RETURN1;
	}
	COPY(ARG(5), ARG(6));
	COPY(GET_CAR(ARG(6)), ARG(4));
	if(CL_CONSP(ARG(4)))
	{
		COPY(GET_CAR(ARG(4)), ARG(6));
	}
	else
	{
		if(CL_TRUEP(ARG(4)))
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(6));	/* ~a is not a list */
			COPY(ARG(4), ARG(7));
			Ferror(ARG(6), 2);
		}
		else
		{
			COPY(ARG(4), ARG(6));
		}
	}
	if(CL_CONSP(ARG(4)))
	{
		COPY(GET_CDR(ARG(4)), ARG(7));
	}
	else
	{
		if(CL_TRUEP(ARG(4)))
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(7));	/* ~a is not a list */
			COPY(ARG(4), ARG(8));
			Ferror(ARG(7), 2);
		}
		else
		{
			COPY(ARG(4), ARG(7));
		}
	}
	if(CL_CONSP(ARG(7)))
	{
		COPY(GET_CAR(ARG(7)), ARG(7));
	}
	else
	{
		if(CL_TRUEP(ARG(7)))
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(8));	/* ~a is not a list */
			COPY(ARG(7), ARG(9));
			Ferror(ARG(8), 2);
		}
		else
		{
			LOAD_NIL(ARG(7));
		}
	}
	COPY(ARG(1), ARG(8));
	COPY(ARG(6), ARG(9));
	COPY(ARG(7), ARG(10));
	getf1(ARG(8));
	COPY(ARG(8), ARG(6));
	if(CL_FUNCTIONP(ARG(6)))
	{
		if(CL_CONSP(ARG(4)))
		{
			COPY(GET_CDR(ARG(4)), ARG(8));
		}
		else
		{
			if(CL_TRUEP(ARG(4)))
			{
				LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(8));	/* ~a is not a list */
				COPY(ARG(4), ARG(9));
				Ferror(ARG(8), 2);
			}
			else
			{
				COPY(ARG(4), ARG(8));
			}
		}
		if(CL_CONSP(ARG(8)))
		{
			COPY(GET_CAR(ARG(8)), ARG(8));
		}
		else
		{
			if(CL_TRUEP(ARG(8)))
			{
				LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(9));	/* ~a is not a list */
				COPY(ARG(8), ARG(10));
				Ferror(ARG(9), 2);
			}
			else
			{
				LOAD_NIL(ARG(8));
			}
		}
	}
	else
	{
		goto ELSE4;
	}
	if(EQ(ARG(6), ARG(8)))
	{
		COPY(ARG(6), ARG(7));
		Ffuncall(ARG(7), 1);
		mv_count = 1;
		COPY(ARG(7), OFFSET(AR_BASE(GET_FORM(ARG(2))), GET_FIXNUM(ARG(3)) + 1));
	}
	else
	{
		ELSE4:;
		COPY(ARG(6), OFFSET(AR_BASE(GET_FORM(ARG(2))), GET_FIXNUM(ARG(3)) + 1));
	}
	COPY(ARG(3), ARG(6));
	F1plus(ARG(6));
	COPY(ARG(6), ARG(3));
	COPY(ARG(5), ARG(6));
	COPY(GET_CDR(ARG(6)), ARG(5));
	goto M1_1;
	RETURN1:;
	COPY(ARG(2), ARG(0));
}
