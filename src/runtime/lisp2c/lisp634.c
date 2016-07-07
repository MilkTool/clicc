/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

static void Z160_lambda(CL_FORM *base, int nargs);

void vector_position(CL_FORM *base)
{
	GEN_HEAPVAR(ARG(4), ARG(8));
	if(CL_TRUEP(ARG(3)))
	{
	}
	else
	{
		if(CL_TRUEP(INDIRECT(ARG(4))))
		{
			GEN_CLOSURE(array, ARG(8), 4, Z160_lambda, -1);
			COPY(ARG(4), &array[3]);
			LOAD_CLOSURE(array, ARG(8));
			COPY(ARG(8), ARG(3));
		}
		else
		{
			GEN_STATIC_GLOBAL_FUNARG(extern_closure, Feql, 2);
			LOAD_GLOBFUN(&extern_closure, ARG(3));
		}
	}
	COPY(ARG(1), ARG(8));
	Flength(ARG(8));
	COPY(ARG(6), ARG(9));
	COPY(ARG(8), ARG(10));
	Fgt(ARG(9), 2);
	if(CL_TRUEP(ARG(9)))
	{
		COPY(ARG(8), ARG(6));
	}
	if(CL_TRUEP(ARG(2)))
	{
		COPY(ARG(6), ARG(8));
		F1minus(ARG(8));
		M1_1:;
		COPY(ARG(8), ARG(9));
		COPY(ARG(5), ARG(10));
		Flt(ARG(9), 2);
		if(CL_TRUEP(ARG(9)))
		{
			LOAD_NIL(ARG(0));
			goto RETURN1;
		}
		COPY(ARG(3), ARG(9));
		COPY(ARG(0), ARG(10));
		if(CL_TRUEP(ARG(7)))
		{
			COPY(ARG(7), ARG(11));
			if(CL_LISTP(ARG(1)))
			{
				COPY(ARG(8), ARG(12));
				COPY(ARG(1), ARG(13));
				Fnthcdr(ARG(12));
				if(CL_CONSP(ARG(12)))
				{
					COPY(GET_CAR(ARG(12)), ARG(12));
				}
				else
				{
					if(CL_TRUEP(ARG(12)))
					{
						LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(13));	/* ~a is not a list */
						COPY(ARG(12), ARG(14));
						Ferror(ARG(13), 2);
					}
					else
					{
						LOAD_NIL(ARG(12));
					}
				}
			}
			else
			{
				COPY(ARG(1), ARG(12));
				COPY(ARG(8), ARG(13));
				Frow_major_aref(ARG(12));
			}
			Ffuncall(ARG(11), 2);
			mv_count = 1;
		}
		else
		{
			if(CL_LISTP(ARG(1)))
			{
				COPY(ARG(8), ARG(11));
				COPY(ARG(1), ARG(12));
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
				COPY(ARG(1), ARG(11));
				COPY(ARG(8), ARG(12));
				Frow_major_aref(ARG(11));
			}
		}
		Ffuncall(ARG(9), 3);
		mv_count = 1;
		if(CL_TRUEP(ARG(9)))
		{
			COPY(ARG(8), ARG(0));
			goto RETURN1;
		}
		F1minus(ARG(8));
		goto M1_1;
		RETURN1:;
	}
	else
	{
		COPY(ARG(5), ARG(8));
		M2_1:;
		COPY(ARG(8), ARG(9));
		COPY(ARG(6), ARG(10));
		Fge(ARG(9), 2);
		if(CL_TRUEP(ARG(9)))
		{
			LOAD_NIL(ARG(0));
			goto RETURN2;
		}
		COPY(ARG(3), ARG(9));
		COPY(ARG(0), ARG(10));
		if(CL_TRUEP(ARG(7)))
		{
			COPY(ARG(7), ARG(11));
			if(CL_LISTP(ARG(1)))
			{
				COPY(ARG(8), ARG(12));
				COPY(ARG(1), ARG(13));
				Fnthcdr(ARG(12));
				if(CL_CONSP(ARG(12)))
				{
					COPY(GET_CAR(ARG(12)), ARG(12));
				}
				else
				{
					if(CL_TRUEP(ARG(12)))
					{
						LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(13));	/* ~a is not a list */
						COPY(ARG(12), ARG(14));
						Ferror(ARG(13), 2);
					}
					else
					{
						LOAD_NIL(ARG(12));
					}
				}
			}
			else
			{
				COPY(ARG(1), ARG(12));
				COPY(ARG(8), ARG(13));
				Frow_major_aref(ARG(12));
			}
			Ffuncall(ARG(11), 2);
			mv_count = 1;
		}
		else
		{
			if(CL_LISTP(ARG(1)))
			{
				COPY(ARG(8), ARG(11));
				COPY(ARG(1), ARG(12));
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
				COPY(ARG(1), ARG(11));
				COPY(ARG(8), ARG(12));
				Frow_major_aref(ARG(11));
			}
		}
		Ffuncall(ARG(9), 3);
		mv_count = 1;
		if(CL_TRUEP(ARG(9)))
		{
			COPY(ARG(8), ARG(0));
			goto RETURN2;
		}
		F1plus(ARG(8));
		goto M2_1;
		RETURN2:;
	}
}

static void Z160_lambda(CL_FORM *base, int nargs)
{
	CL_FORM *rest_0;
	CL_FORM *local;
	rest_0 = ARG(1);
	local = ARG(nargs + 1);
	{
		COPY(INDIRECT(GET_FORM(ARG(0)) + 3), LOCAL(0));
		REST_APPLY(LOCAL(0), 1, rest_0);
		mv_count = 1;
		if(CL_TRUEP(LOCAL(0)))
		{
			LOAD_NIL(ARG(0));
		}
		else
		{
			LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(0));	/* T */
		}
	}
}
