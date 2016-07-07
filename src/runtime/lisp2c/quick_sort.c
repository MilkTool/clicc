/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void quick_sort(CL_FORM *base)
{
	LOAD_SMALLFIXNUM(0, ARG(5));
	LOAD_SMALLFIXNUM(0, ARG(6));
	COPY(ARG(2), ARG(7));
	COPY(ARG(1), ARG(8));
	F1plus(ARG(8));
	Fle(ARG(7), 2);
	if(CL_TRUEP(ARG(7)))
	{
		goto RETURN1;
	}
	COPY(ARG(1), ARG(5));
	COPY(ARG(2), ARG(6));
	F1minus(ARG(6));
	if(CL_LISTP(ARG(0)))
	{
		COPY(ARG(1), ARG(7));
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
		COPY(ARG(1), ARG(8));
		Frow_major_aref(ARG(7));
	}
	M1_1:;
	COPY(ARG(5), ARG(8));
	COPY(ARG(6), ARG(9));
	Fgt(ARG(8), 2);
	if(CL_TRUEP(ARG(8)))
	{
		goto RETURN2;
	}
	M2_1:;
	COPY(ARG(5), ARG(8));
	COPY(ARG(6), ARG(9));
	Fgt(ARG(8), 2);
	if(CL_TRUEP(ARG(8)))
	{
		goto THEN1;
	}
	else
	{
		COPY(ARG(3), ARG(9));
		if(CL_TRUEP(ARG(4)))
		{
			COPY(ARG(4), ARG(10));
			if(CL_LISTP(ARG(0)))
			{
				COPY(ARG(6), ARG(11));
				COPY(ARG(0), ARG(12));
				Fnthcdr(ARG(11));
				if(CL_CONSP(ARG(11)))
				{
					COPY(GET_CAR(ARG(11)), ARG(11));
				}
				else
				{
					if(CL_TRUEP(ARG(11)))
					{
						LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(12));	/* ~a is not a list */
						COPY(ARG(11), ARG(13));
						Ferror(ARG(12), 2);
					}
					else
					{
						LOAD_NIL(ARG(11));
					}
				}
			}
			else
			{
				COPY(ARG(0), ARG(11));
				COPY(ARG(6), ARG(12));
				Frow_major_aref(ARG(11));
			}
			Ffuncall(ARG(10), 2);
			mv_count = 1;
		}
		else
		{
			if(CL_LISTP(ARG(0)))
			{
				COPY(ARG(6), ARG(10));
				COPY(ARG(0), ARG(11));
				Fnthcdr(ARG(10));
				if(CL_CONSP(ARG(10)))
				{
					COPY(GET_CAR(ARG(10)), ARG(10));
				}
				else
				{
					if(CL_TRUEP(ARG(10)))
					{
						LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(11));	/* ~a is not a list */
						COPY(ARG(10), ARG(12));
						Ferror(ARG(11), 2);
					}
					else
					{
						LOAD_NIL(ARG(10));
					}
				}
			}
			else
			{
				COPY(ARG(0), ARG(10));
				COPY(ARG(6), ARG(11));
				Frow_major_aref(ARG(10));
			}
		}
		if(CL_TRUEP(ARG(4)))
		{
			COPY(ARG(4), ARG(11));
			COPY(ARG(7), ARG(12));
			Ffuncall(ARG(11), 2);
			mv_count = 1;
		}
		else
		{
			COPY(ARG(7), ARG(11));
		}
		Ffuncall(ARG(9), 3);
		mv_count = 1;
	}
	if(CL_TRUEP(ARG(9)))
	{
		THEN1:;
		goto RETURN3;
	}
	COPY(ARG(6), ARG(8));
	F1minus(ARG(8));
	COPY(ARG(8), ARG(6));
	goto M2_1;
	RETURN3:;
	COPY(ARG(6), ARG(8));
	COPY(ARG(1), ARG(9));
	Flt(ARG(8), 2);
	if(CL_TRUEP(ARG(8)))
	{
		COPY(ARG(0), ARG(8));
		COPY(ARG(1), ARG(9));
		F1plus(ARG(9));
		COPY(ARG(2), ARG(10));
		COPY(ARG(3), ARG(11));
		COPY(ARG(4), ARG(12));
		quick_sort(ARG(8));
		goto RETURN1;
	}
	M3_1:;
	COPY(ARG(5), ARG(8));
	COPY(ARG(6), ARG(9));
	Fgt(ARG(8), 2);
	if(CL_TRUEP(ARG(8)))
	{
		goto THEN2;
	}
	else
	{
		COPY(ARG(3), ARG(9));
		if(CL_TRUEP(ARG(4)))
		{
			COPY(ARG(4), ARG(10));
			if(CL_LISTP(ARG(0)))
			{
				COPY(ARG(5), ARG(11));
				COPY(ARG(0), ARG(12));
				Fnthcdr(ARG(11));
				if(CL_CONSP(ARG(11)))
				{
					COPY(GET_CAR(ARG(11)), ARG(11));
				}
				else
				{
					if(CL_TRUEP(ARG(11)))
					{
						LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(12));	/* ~a is not a list */
						COPY(ARG(11), ARG(13));
						Ferror(ARG(12), 2);
					}
					else
					{
						LOAD_NIL(ARG(11));
					}
				}
			}
			else
			{
				COPY(ARG(0), ARG(11));
				COPY(ARG(5), ARG(12));
				Frow_major_aref(ARG(11));
			}
			Ffuncall(ARG(10), 2);
			mv_count = 1;
		}
		else
		{
			if(CL_LISTP(ARG(0)))
			{
				COPY(ARG(5), ARG(10));
				COPY(ARG(0), ARG(11));
				Fnthcdr(ARG(10));
				if(CL_CONSP(ARG(10)))
				{
					COPY(GET_CAR(ARG(10)), ARG(10));
				}
				else
				{
					if(CL_TRUEP(ARG(10)))
					{
						LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(11));	/* ~a is not a list */
						COPY(ARG(10), ARG(12));
						Ferror(ARG(11), 2);
					}
					else
					{
						LOAD_NIL(ARG(10));
					}
				}
			}
			else
			{
				COPY(ARG(0), ARG(10));
				COPY(ARG(5), ARG(11));
				Frow_major_aref(ARG(10));
			}
		}
		if(CL_TRUEP(ARG(4)))
		{
			COPY(ARG(4), ARG(11));
			COPY(ARG(7), ARG(12));
			Ffuncall(ARG(11), 2);
			mv_count = 1;
		}
		else
		{
			COPY(ARG(7), ARG(11));
		}
		Ffuncall(ARG(9), 3);
		mv_count = 1;
		if(CL_TRUEP(ARG(9)))
		{
			goto ELSE3;
		}
		else
		{
			goto THEN2;
		}
	}
	{
		THEN2:;
		goto RETURN4;
	}
	ELSE3:;
	COPY(ARG(5), ARG(8));
	F1plus(ARG(8));
	COPY(ARG(8), ARG(5));
	goto M3_1;
	RETURN4:;
	COPY(ARG(5), ARG(8));
	COPY(ARG(6), ARG(9));
	Fgt(ARG(8), 2);
	if(CL_TRUEP(ARG(8)))
	{
		goto RETURN2;
	}
	if(CL_LISTP(ARG(0)))
	{
		COPY(ARG(5), ARG(8));
		COPY(ARG(0), ARG(9));
		Fnthcdr(ARG(8));
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
		COPY(ARG(0), ARG(8));
		COPY(ARG(5), ARG(9));
		Frow_major_aref(ARG(8));
	}
	if(CL_LISTP(ARG(0)))
	{
		COPY(ARG(6), ARG(9));
		COPY(ARG(0), ARG(10));
		Fnthcdr(ARG(9));
		if(CL_CONSP(ARG(9)))
		{
			COPY(GET_CAR(ARG(9)), ARG(9));
		}
		else
		{
			if(CL_TRUEP(ARG(9)))
			{
				LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(10));	/* ~a is not a list */
				COPY(ARG(9), ARG(11));
				Ferror(ARG(10), 2);
			}
			else
			{
				LOAD_NIL(ARG(9));
			}
		}
	}
	else
	{
		COPY(ARG(0), ARG(9));
		COPY(ARG(6), ARG(10));
		Frow_major_aref(ARG(9));
	}
	COPY(ARG(9), ARG(10));
	COPY(ARG(0), ARG(11));
	COPY(ARG(5), ARG(12));
	Fset_elt(ARG(10));
	COPY(ARG(8), ARG(10));
	COPY(ARG(0), ARG(11));
	COPY(ARG(6), ARG(12));
	Fset_elt(ARG(10));
	COPY(ARG(5), ARG(8));
	F1plus(ARG(8));
	COPY(ARG(8), ARG(5));
	COPY(ARG(6), ARG(8));
	F1minus(ARG(8));
	COPY(ARG(8), ARG(6));
	goto M1_1;
	RETURN2:;
	COPY(ARG(0), ARG(7));
	COPY(ARG(1), ARG(8));
	COPY(ARG(5), ARG(9));
	COPY(ARG(3), ARG(10));
	COPY(ARG(4), ARG(11));
	quick_sort(ARG(7));
	COPY(ARG(0), ARG(7));
	COPY(ARG(5), ARG(8));
	COPY(ARG(2), ARG(9));
	COPY(ARG(3), ARG(10));
	COPY(ARG(4), ARG(11));
	quick_sort(ARG(7));
	RETURN1:;
}
