#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

GLOBAL_FUNARG Clist_position = {list_position, -3};

static void Z124_g1500(CL_FORM *base, int nargs);

void list_position(CL_FORM *base, int nargs)
{
	BOOL supl_flags[6];
	static CL_FORM * keylist[] =
	{
		SYMBOL(Slisp, 229),	/* FROM-END */
		SYMBOL(Slisp, 213),	/* TEST */
		SYMBOL(Slisp, 479),	/* TEST-NOT */
		SYMBOL(Slisp, 161),	/* START */
		SYMBOL(Slisp, 162),	/* END */
		SYMBOL(Slisp, 139),	/* KEY */
	};
	keysort(STACK(base, 2), nargs - 2, 6, keylist, supl_flags, FALSE);
	if(NOT(supl_flags[0]))
	{
		LOAD_NIL(STACK(base, 2));
	}
	if(NOT(supl_flags[1]))
	{
		LOAD_NIL(STACK(base, 3));
	}
	if(NOT(supl_flags[2]))
	{
		LOAD_NIL(STACK(base, 4));
	}
	GEN_HEAPVAR(STACK(base, 4), STACK(base, 8));
	if(NOT(supl_flags[3]))
	{
		LOAD_FIXNUM(0, STACK(base, 5));
	}
	if(NOT(supl_flags[4]))
	{
		LOAD_NIL(STACK(base, 6));
	}
	if(NOT(supl_flags[5]))
	{
		LOAD_GLOBFUN(&CFidentity, STACK(base, 7));
	}
	COPY(STACK(base, 5), STACK(base, 8));
	LOAD_NIL(STACK(base, 9));
	COPY(STACK(base, 1), STACK(base, 10));
	Flength(STACK(base, 10));
	if(CL_TRUEP(STACK(base, 3)))
	{
	}
	else
	{
		if(CL_TRUEP(INDIRECT(STACK(base, 4))))
		{
			GEN_CLOSURE(array, STACK(base, 11), 4, Z124_g1500, -1);
			COPY(STACK(base, 4), &array[3]);
			LOAD_CLOSURE(array, STACK(base, 11));
			COPY(STACK(base, 11), STACK(base, 3));
		}
		else
		{
			static GLOBAL_FUNARG extern_closure = {Feql, 2};
			LOAD_GLOBFUN(&extern_closure, STACK(base, 3));
		}
	}
	COPY(STACK(base, 5), STACK(base, 11));
	COPY(STACK(base, 6), STACK(base, 12));
	COPY(STACK(base, 10), STACK(base, 13));
	check_seq_start_end(STACK(base, 11));
	COPY(STACK(base, 11), STACK(base, 6));
	if(CL_TRUEP(STACK(base, 2)))
	{
		COPY(STACK(base, 6), STACK(base, 11));
		F1minus(STACK(base, 11));
		COPY(STACK(base, 11), STACK(base, 6));
	}
	LOAD_NIL(STACK(base, 11));
	COPY(STACK(base, 5), STACK(base, 12));
	COPY(STACK(base, 1), STACK(base, 13));
	Fnthcdr(STACK(base, 12));
	M179_1:;
	if(CL_ATOMP(STACK(base, 12)))
	{
		LOAD_NIL(STACK(base, 11));
		COPY(STACK(base, 11), STACK(base, 0));
		goto RETURN193;
	}
	COPY(STACK(base, 12), STACK(base, 13));
	Fcar(STACK(base, 13));
	COPY(STACK(base, 13), STACK(base, 11));
	COPY(STACK(base, 3), STACK(base, 13));
	COPY(STACK(base, 0), STACK(base, 14));
	COPY(STACK(base, 7), STACK(base, 15));
	COPY(STACK(base, 11), STACK(base, 16));
	Ffuncall(STACK(base, 15), 2);
	mv_count = 1;
	Ffuncall(STACK(base, 13), 3);
	mv_count = 1;
	if(CL_TRUEP(STACK(base, 13)))
	{
		if(CL_TRUEP(STACK(base, 2)))
		{
			COPY(STACK(base, 8), STACK(base, 9));
		}
		else
		{
			COPY(STACK(base, 8), STACK(base, 0));
			goto RETURN193;
		}
	}
	COPY(STACK(base, 8), STACK(base, 13));
	COPY(STACK(base, 6), STACK(base, 14));
	Fnumeql(STACK(base, 13), 2);
	if(CL_TRUEP(STACK(base, 13)))
	{
		COPY(STACK(base, 9), STACK(base, 0));
		goto RETURN193;
	}
	COPY(STACK(base, 8), STACK(base, 13));
	F1plus(STACK(base, 13));
	COPY(STACK(base, 13), STACK(base, 8));
	COPY(STACK(base, 12), STACK(base, 13));
	Fcdr(STACK(base, 13));
	COPY(STACK(base, 13), STACK(base, 12));
	goto M179_1;
	RETURN193:;
}

static void Z124_g1500(CL_FORM *base, int nargs)
{
	Flist(STACK(base, 1), nargs - 0);
	COPY(INDIRECT(GET_FORM(STACK(base, 0)) + 3), STACK(base, 2));
	COPY(STACK(base, 1), STACK(base, 3));
	Fapply(STACK(base, 2), 2);
	mv_count = 1;
	if(NOT(CL_TRUEP(STACK(base, 2))))
	{
		LOAD_T(STACK(base, 0));
	}
	else
	{
		LOAD_NIL(STACK(base, 0));
	}
}
