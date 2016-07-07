/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fstring_left_trim(CL_FORM *base)
{
	Fstring(ARG(1));
	COPY(ARG(1), ARG(2));
	Flength(ARG(2));
	LOAD_SMALLFIXNUM(0, ARG(3));
	M1_1:;
	COPY(ARG(3), ARG(4));
	COPY(ARG(2), ARG(5));
	Fnumeql(ARG(4), 2);
	if(CL_TRUEP(ARG(4)))
	{
		LOAD_SMSTR((CL_FORM *)&KClisp[44], ARG(0));	/*  */
		goto RETURN1;
	}
	COPY(ARG(1), ARG(4));
	COPY(ARG(3), ARG(5));
	Frow_major_aref(ARG(4));
	LOAD_GLOBFUN(&CFcharE, ARG(5));
	LOAD_NIL(ARG(6));
	LOAD_NIL(ARG(7));
	LOAD_SMALLFIXNUM(0, ARG(8));
	COPY(SYMVAL(Slisp, 0), ARG(9));	/* MOST-POSITIVE-FIXNUM */
	LOAD_NIL(ARG(10));
	if(CL_LISTP(ARG(0)))
	{
		COPY(ARG(4), ARG(11));
		COPY(ARG(0), ARG(12));
		LOAD_NIL(ARG(13));
		LOAD_GLOBFUN(&CFcharE, ARG(14));
		LOAD_NIL(ARG(15));
		COPY(ARG(8), ARG(16));
		COPY(ARG(9), ARG(17));
		LOAD_NIL(ARG(18));
		list_find(ARG(11));
		bool_result = CL_TRUEP(ARG(11));
	}
	else
	{
		COPY(ARG(4), ARG(11));
		COPY(ARG(0), ARG(12));
		LOAD_NIL(ARG(13));
		LOAD_GLOBFUN(&CFcharE, ARG(14));
		LOAD_NIL(ARG(15));
		COPY(ARG(8), ARG(16));
		COPY(ARG(9), ARG(17));
		LOAD_NIL(ARG(18));
		vector_find(ARG(11));
		bool_result = CL_TRUEP(ARG(11));
	}
	if(bool_result)
	{
	}
	else
	{
		goto RETURN2;
	}
	F1plus(ARG(3));
	goto M1_1;
	RETURN2:;
	COPY(ARG(3), ARG(4));
	Fzerop(ARG(4));
	if(CL_TRUEP(ARG(4)))
	{
		COPY(ARG(1), ARG(0));
	}
	else
	{
		if(CL_LISTP(ARG(1)))
		{
			COPY(ARG(1), ARG(0));
			COPY(ARG(3), ARG(1));
			COPY(SYMVAL(Slisp, 0), ARG(2));	/* MOST-POSITIVE-FIXNUM */
			list_subseq(ARG(0));
		}
		else
		{
			COPY(ARG(1), ARG(0));
			COPY(ARG(3), ARG(1));
			COPY(SYMVAL(Slisp, 0), ARG(2));	/* MOST-POSITIVE-FIXNUM */
			vector_subseq(ARG(0));
		}
	}
	RETURN1:;
}
