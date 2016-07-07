/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Flist_length(CL_FORM *base)
{
	LOAD_SMALLFIXNUM(0, ARG(1));
	COPY(ARG(0), ARG(2));
	COPY(ARG(0), ARG(3));
	M1_1:;
	if(CL_TRUEP(ARG(2)))
	{
		if(CL_CONSP(ARG(2)))
		{
			goto ELSE1;
		}
		else
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[233], ARG(4));	/* ~a is not a list */
			COPY(ARG(2), ARG(5));
			Ferror(ARG(4), 2);
		}
	}
	else
	{
		goto THEN2;
	}
	{
		THEN2:;
		COPY(ARG(1), ARG(0));
		goto RETURN1;
	}
	ELSE1:;
	if(CL_CONSP(ARG(2)))
	{
	}
	else
	{
		if(CL_TRUEP(ARG(2)))
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(4));	/* ~a is not a list */
			COPY(ARG(2), ARG(5));
			Ferror(ARG(4), 2);
		}
		else
		{
		}
	}
	COPY(ARG(2), ARG(4));
	COPY(ARG(4), ARG(5));
	if(CL_CONSP(ARG(5)))
	{
		COPY(GET_CDR(ARG(5)), ARG(2));
	}
	else
	{
		if(CL_TRUEP(ARG(5)))
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(6));	/* ~a is not a list */
			COPY(ARG(5), ARG(7));
			Ferror(ARG(6), 2);
		}
		else
		{
			LOAD_NIL(ARG(2));
		}
	}
	if(CL_TRUEP(ARG(2)))
	{
		if(CL_CONSP(ARG(2)))
		{
			goto ELSE3;
		}
		else
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[233], ARG(4));	/* ~a is not a list */
			COPY(ARG(2), ARG(5));
			Ferror(ARG(4), 2);
		}
	}
	else
	{
		goto THEN4;
	}
	{
		THEN4:;
		COPY(ARG(1), ARG(0));
		F1plus(ARG(0));
		goto RETURN1;
	}
	ELSE3:;
	if(EQ(ARG(2), ARG(3)))
	{
		LOAD_NIL(ARG(0));
		goto RETURN1;
	}
	COPY(ARG(1), ARG(4));
	LOAD_SMALLFIXNUM(2, ARG(5));
	Fplus(ARG(4), 2);
	COPY(ARG(2), ARG(5));
	if(CL_CONSP(ARG(5)))
	{
		COPY(GET_CDR(ARG(5)), ARG(5));
	}
	else
	{
		if(CL_TRUEP(ARG(5)))
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(6));	/* ~a is not a list */
			COPY(ARG(5), ARG(7));
			Ferror(ARG(6), 2);
		}
		else
		{
			LOAD_NIL(ARG(5));
		}
	}
	COPY(ARG(3), ARG(6));
	if(CL_CONSP(ARG(6)))
	{
		COPY(GET_CDR(ARG(6)), ARG(3));
	}
	else
	{
		if(CL_TRUEP(ARG(6)))
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(7));	/* ~a is not a list */
			COPY(ARG(6), ARG(8));
			Ferror(ARG(7), 2);
		}
		else
		{
			LOAD_NIL(ARG(3));
		}
	}
	COPY(ARG(5), ARG(2));
	COPY(ARG(4), ARG(1));
	goto M1_1;
	RETURN1:;
}
