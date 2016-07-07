/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

static void Z156_lambda(CL_FORM *base, int nargs);

void list_delete(CL_FORM *base)
{
	GEN_HEAPVAR(ARG(4), ARG(9));
	if(CL_TRUEP(ARG(2)))
	{
		goto THEN1;
	}
	else
	{
		if(CL_TRUEP(ARG(3)))
		{
			goto THEN1;
		}
		else
		{
			if(CL_TRUEP(INDIRECT(ARG(4))))
			{
				goto THEN1;
			}
			else
			{
				if(CL_TRUEP(ARG(5)))
				{
					goto THEN1;
				}
				else
				{
					if(CL_TRUEP(ARG(6)))
					{
						goto THEN1;
					}
					else
					{
					}
				}
			}
		}
	}
	if(CL_TRUEP(ARG(8)))
	{
		THEN1:;
		if(CL_TRUEP(ARG(3)))
		{
		}
		else
		{
			if(CL_TRUEP(INDIRECT(ARG(4))))
			{
				GEN_CLOSURE(array, ARG(9), 4, Z156_lambda, -1);
				COPY(ARG(4), &array[3]);
				LOAD_CLOSURE(array, ARG(9));
				COPY(ARG(9), ARG(3));
			}
			else
			{
				GEN_STATIC_GLOBAL_FUNARG(extern_closure, Feql, 2);
				LOAD_GLOBFUN(&extern_closure, ARG(3));
			}
		}
		COPY(ARG(5), ARG(4));
		COPY(ARG(6), ARG(5));
		COPY(ARG(7), ARG(6));
		COPY(ARG(8), ARG(7));
		list_remove(ARG(0));
	}
	else
	{
		M1_1:;
		if(CL_TRUEP(ARG(1)))
		{
			LOAD_NIL(ARG(9));
		}
		else
		{
			LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(9));	/* T */
		}
		if(CL_TRUEP(ARG(9)))
		{
			goto THEN2;
		}
		else
		{
			COPY(ARG(7), ARG(10));
			Fzerop(ARG(10));
		}
		if(CL_TRUEP(ARG(10)))
		{
			THEN2:;
			COPY(ARG(1), ARG(0));
			goto RETURN1;
		}
		if(CL_CONSP(ARG(1)))
		{
			COPY(GET_CAR(ARG(1)), ARG(10));
		}
		else
		{
			if(CL_TRUEP(ARG(1)))
			{
				LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(10));	/* ~a is not a list */
				COPY(ARG(1), ARG(11));
				Ferror(ARG(10), 2);
			}
			else
			{
				COPY(ARG(1), ARG(10));
			}
		}
		if(EQL(ARG(0), ARG(10)))
		{
			if(CL_CONSP(ARG(1)))
			{
				COPY(GET_CDR(ARG(1)), ARG(9));
			}
			else
			{
				if(CL_TRUEP(ARG(1)))
				{
					LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(9));	/* ~a is not a list */
					COPY(ARG(1), ARG(10));
					Ferror(ARG(9), 2);
				}
				else
				{
					COPY(ARG(1), ARG(9));
				}
			}
			COPY(ARG(9), ARG(1));
			COPY(ARG(7), ARG(9));
			F1minus(ARG(9));
			COPY(ARG(9), ARG(7));
		}
		else
		{
			goto RETURN2;
		}
		goto M1_1;
		RETURN2:;
		COPY(ARG(1), ARG(9));
		if(CL_CONSP(ARG(1)))
		{
			COPY(GET_CDR(ARG(1)), ARG(10));
		}
		else
		{
			if(CL_TRUEP(ARG(1)))
			{
				LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(10));	/* ~a is not a list */
				COPY(ARG(1), ARG(11));
				Ferror(ARG(10), 2);
			}
			else
			{
				COPY(ARG(1), ARG(10));
			}
		}
		M2_1:;
		if(CL_TRUEP(ARG(10)))
		{
			LOAD_NIL(ARG(11));
		}
		else
		{
			LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(11));	/* T */
		}
		if(CL_TRUEP(ARG(11)))
		{
			goto THEN3;
		}
		else
		{
			COPY(ARG(7), ARG(12));
			Fzerop(ARG(12));
		}
		if(CL_TRUEP(ARG(12)))
		{
			THEN3:;
			COPY(ARG(1), ARG(0));
			goto RETURN1;
		}
		if(CL_CONSP(ARG(10)))
		{
			COPY(GET_CAR(ARG(10)), ARG(12));
		}
		else
		{
			if(CL_TRUEP(ARG(10)))
			{
				LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(12));	/* ~a is not a list */
				COPY(ARG(10), ARG(13));
				Ferror(ARG(12), 2);
			}
			else
			{
				COPY(ARG(10), ARG(12));
			}
		}
		if(EQL(ARG(0), ARG(12)))
		{
			COPY(ARG(10), ARG(11));
			if(CL_CONSP(ARG(11)))
			{
				COPY(GET_CDR(ARG(11)), ARG(10));
			}
			else
			{
				if(CL_TRUEP(ARG(11)))
				{
					LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(10));	/* ~a is not a list */
					Ferror(ARG(10), 2);
				}
				else
				{
					LOAD_NIL(ARG(10));
				}
			}
			if(CL_CONSP(ARG(9)))
			{
				COPY(ARG(10), GET_CDR(ARG(9)));
			}
			else
			{
				LOAD_SMSTR((CL_FORM *)&KClisp[231], ARG(11));	/* ~a is not a cons */
				COPY(ARG(9), ARG(12));
				Ferror(ARG(11), 2);
			}
			COPY(ARG(7), ARG(11));
			F1minus(ARG(11));
			COPY(ARG(11), ARG(7));
		}
		else
		{
			COPY(ARG(10), ARG(9));
			COPY(ARG(10), ARG(11));
			if(CL_CONSP(ARG(11)))
			{
				COPY(GET_CDR(ARG(11)), ARG(10));
			}
			else
			{
				if(CL_TRUEP(ARG(11)))
				{
					LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(10));	/* ~a is not a list */
					Ferror(ARG(10), 2);
				}
				else
				{
					LOAD_NIL(ARG(10));
				}
			}
		}
		goto M2_1;
	}
	RETURN1:;
}

static void Z156_lambda(CL_FORM *base, int nargs)
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
