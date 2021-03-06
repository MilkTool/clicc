/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void vector_subseq(CL_FORM *base)
{
	COPY(ARG(0), ARG(3));
	Flength(ARG(3));
	COPY(ARG(2), ARG(4));
	COPY(ARG(3), ARG(5));
	Fgt(ARG(4), 2);
	if(CL_TRUEP(ARG(4)))
	{
		COPY(ARG(3), ARG(2));
	}
	COPY(ARG(2), ARG(4));
	COPY(ARG(1), ARG(5));
	Fminus(ARG(4), 2);
	COPY(ARG(0), ARG(5));
	array_element_type_internal(ARG(5));
	to_element_type(ARG(5));
	LOAD_NIL(ARG(6));
	LOAD_NIL(ARG(7));
	LOAD_NIL(ARG(8));
	LOAD_NIL(ARG(9));
	LOAD_NIL(ARG(10));
	LOAD_SMALLFIXNUM(0, ARG(11));
	LOAD_NIL(ARG(12));
	LOAD_NIL(ARG(13));
	make_array1(ARG(4));
	COPY(ARG(1), ARG(5));
	LOAD_SMALLFIXNUM(0, ARG(6));
	M1_1:;
	COPY(ARG(5), ARG(7));
	COPY(ARG(2), ARG(8));
	Fnumeql(ARG(7), 2);
	if(CL_TRUEP(ARG(7)))
	{
		COPY(ARG(4), ARG(0));
		goto RETURN1;
	}
	if(CL_LISTP(ARG(0)))
	{
		COPY(ARG(5), ARG(7));
		COPY(ARG(0), ARG(8));
		Fnthcdr(ARG(7));
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
	}
	else
	{
		COPY(ARG(0), ARG(7));
		COPY(ARG(5), ARG(8));
		Frow_major_aref(ARG(7));
	}
	COPY(ARG(7), ARG(8));
	COPY(ARG(4), ARG(9));
	COPY(ARG(6), ARG(10));
	Fset_elt(ARG(8));
	COPY(ARG(5), ARG(7));
	F1plus(ARG(7));
	COPY(ARG(6), ARG(8));
	F1plus(ARG(8));
	COPY(ARG(8), ARG(6));
	COPY(ARG(7), ARG(5));
	goto M1_1;
	RETURN1:;
}
