/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

static void Z25_lambda(CL_FORM *base, int nargs);

void substitute1(CL_FORM *base)
{
	GEN_HEAPVAR(ARG(5), ARG(10));
	COPY(ARG(2), ARG(10));
	Flength(ARG(10));
	if(CL_TRUEP(ARG(4)))
	{
	}
	else
	{
		if(CL_TRUEP(INDIRECT(ARG(5))))
		{
			GEN_CLOSURE(array, ARG(11), 4, Z25_lambda, -1);
			COPY(ARG(5), &array[3]);
			LOAD_CLOSURE(array, ARG(11));
			COPY(ARG(11), ARG(4));
		}
		else
		{
			GEN_STATIC_GLOBAL_FUNARG(extern_closure, Feql, 2);
			LOAD_GLOBFUN(&extern_closure, ARG(4));
		}
	}
	COPY(ARG(6), ARG(11));
	COPY(ARG(7), ARG(12));
	COPY(ARG(10), ARG(13));
	check_seq_start_end(ARG(11));
	COPY(ARG(11), ARG(7));
	COPY(ARG(8), ARG(11));
	COPY(ARG(10), ARG(12));
	if(CL_FIXNUMP(ARG(11)))
	{
		COPY(ARG(11), ARG(13));
		Fplusp(ARG(13));
		if(CL_TRUEP(ARG(13)))
		{
			COPY(ARG(11), ARG(8));
		}
		else
		{
			LOAD_FIXNUM(ARG(13), 0, ARG(8));
		}
	}
	else
	{
		if(CL_TRUEP(ARG(11)))
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[256], ARG(13));	/* ~S should be an INTEGER at least 0 and no more than 16777214 */
			COPY(ARG(11), ARG(14));
			Ferror(ARG(13), 2);
		}
		else
		{
			COPY(ARG(12), ARG(8));
		}
	}
	if(CL_TRUEP(ARG(3)))
	{
		COPY(ARG(2), ARG(11));
		sequence_type(ARG(11));
		COPY(ARG(10), ARG(12));
		LOAD_NIL(ARG(13));
		LOAD_NIL(ARG(14));
		make_sequence1(ARG(11));
		COPY(ARG(10), ARG(12));
		F1minus(ARG(12));
		LOAD_FIXNUM(ARG(13), 0, ARG(13));
		M1_1:;
		COPY(ARG(12), ARG(14));
		Fminusp(ARG(14));
		if(CL_TRUEP(ARG(14)))
		{
			COPY(ARG(11), ARG(0));
			goto RETURN1;
		}
		COPY(ARG(6), ARG(14));
		COPY(ARG(12), ARG(15));
		Fle(ARG(14), 2);
		if(CL_TRUEP(ARG(14)))
		{
			COPY(ARG(12), ARG(14));
			COPY(ARG(7), ARG(15));
			Flt(ARG(14), 2);
			if(CL_TRUEP(ARG(14)))
			{
				COPY(ARG(13), ARG(14));
				COPY(ARG(8), ARG(15));
				Flt(ARG(14), 2);
				if(CL_TRUEP(ARG(14)))
				{
					COPY(ARG(4), ARG(14));
					COPY(ARG(1), ARG(15));
					COPY(ARG(9), ARG(16));
					COPY(ARG(2), ARG(17));
					COPY(ARG(12), ARG(18));
					Felt(ARG(17));
					Ffuncall(ARG(16), 2);
					mv_count = 1;
					Ffuncall(ARG(14), 3);
					mv_count = 1;
				}
				else
				{
					goto ELSE1;
				}
			}
			else
			{
				goto ELSE1;
			}
		}
		else
		{
			goto ELSE1;
		}
		if(CL_TRUEP(ARG(14)))
		{
			COPY(ARG(0), ARG(14));
			COPY(ARG(11), ARG(15));
			COPY(ARG(12), ARG(16));
			Fset_elt(ARG(14));
			F1plus(ARG(13));
		}
		else
		{
			ELSE1:;
			COPY(ARG(2), ARG(14));
			COPY(ARG(12), ARG(15));
			Felt(ARG(14));
			COPY(ARG(11), ARG(15));
			COPY(ARG(12), ARG(16));
			Fset_elt(ARG(14));
		}
		F1minus(ARG(12));
		goto M1_1;
		RETURN1:;
	}
	else
	{
		COPY(ARG(2), ARG(11));
		sequence_type(ARG(11));
		COPY(ARG(10), ARG(12));
		LOAD_NIL(ARG(13));
		LOAD_NIL(ARG(14));
		make_sequence1(ARG(11));
		LOAD_FIXNUM(ARG(12), 0, ARG(12));
		LOAD_FIXNUM(ARG(13), 0, ARG(13));
		M2_1:;
		COPY(ARG(12), ARG(14));
		COPY(ARG(10), ARG(15));
		Fge(ARG(14), 2);
		if(CL_TRUEP(ARG(14)))
		{
			COPY(ARG(11), ARG(0));
			goto RETURN2;
		}
		COPY(ARG(6), ARG(14));
		COPY(ARG(12), ARG(15));
		Fle(ARG(14), 2);
		if(CL_TRUEP(ARG(14)))
		{
			COPY(ARG(12), ARG(14));
			COPY(ARG(7), ARG(15));
			Flt(ARG(14), 2);
			if(CL_TRUEP(ARG(14)))
			{
				COPY(ARG(13), ARG(14));
				COPY(ARG(8), ARG(15));
				Flt(ARG(14), 2);
				if(CL_TRUEP(ARG(14)))
				{
					COPY(ARG(4), ARG(14));
					COPY(ARG(1), ARG(15));
					COPY(ARG(9), ARG(16));
					COPY(ARG(2), ARG(17));
					COPY(ARG(12), ARG(18));
					Felt(ARG(17));
					Ffuncall(ARG(16), 2);
					mv_count = 1;
					Ffuncall(ARG(14), 3);
					mv_count = 1;
				}
				else
				{
					goto ELSE2;
				}
			}
			else
			{
				goto ELSE2;
			}
		}
		else
		{
			goto ELSE2;
		}
		if(CL_TRUEP(ARG(14)))
		{
			COPY(ARG(0), ARG(14));
			COPY(ARG(11), ARG(15));
			COPY(ARG(12), ARG(16));
			Fset_elt(ARG(14));
			F1plus(ARG(13));
		}
		else
		{
			ELSE2:;
			COPY(ARG(2), ARG(14));
			COPY(ARG(12), ARG(15));
			Felt(ARG(14));
			COPY(ARG(11), ARG(15));
			COPY(ARG(12), ARG(16));
			Fset_elt(ARG(14));
		}
		F1plus(ARG(12));
		goto M2_1;
		RETURN2:;
	}
}

static void Z25_lambda(CL_FORM *base, int nargs)
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