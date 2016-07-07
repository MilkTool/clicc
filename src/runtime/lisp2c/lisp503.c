#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

GLOBAL_FUNARG CFstring_upcase = {Fstring_upcase, -2};

void Fstring_upcase(CL_FORM *base, int nargs)
{
	BOOL supl_flags[2];
	static CL_FORM * keylist[] =
	{
		SYMBOL(Slisp, 161),	/* START */
		SYMBOL(Slisp, 162),	/* END */
	};
	keysort(STACK(base, 1), nargs - 1, 2, keylist, supl_flags, FALSE);
	if(NOT(supl_flags[0]))
	{
		LOAD_FIXNUM(0, STACK(base, 1));
	}
	if(NOT(supl_flags[1]))
	{
		LOAD_NIL(STACK(base, 2));
	}
	COPY(STACK(base, 0), STACK(base, 3));
	Fstring(STACK(base, 3));
	COPY(STACK(base, 3), STACK(base, 0));
	COPY(STACK(base, 1), STACK(base, 3));
	COPY(STACK(base, 2), STACK(base, 4));
	COPY(STACK(base, 0), STACK(base, 5));
	Flength(STACK(base, 5));
	check_seq_start_end(STACK(base, 3));
	COPY(STACK(base, 3), STACK(base, 2));
	COPY(STACK(base, 0), STACK(base, 3));
	COPY(STACK(base, 3), STACK(base, 4));
	LOAD_FIXNUM(0, STACK(base, 5));
	Fsubseq(STACK(base, 4), 2);
	COPY(STACK(base, 4), STACK(base, 0));
	COPY(STACK(base, 1), STACK(base, 3));
	M227_1:;
	COPY(STACK(base, 3), STACK(base, 4));
	COPY(STACK(base, 2), STACK(base, 5));
	Fnumeql(STACK(base, 4), 2);
	if(CL_TRUEP(STACK(base, 4)))
	{
		goto RETURN267;
	}
	COPY(STACK(base, 0), STACK(base, 4));
	COPY(STACK(base, 3), STACK(base, 5));
	Fschar(STACK(base, 4));
	Fchar_upcase(STACK(base, 4));
	COPY(STACK(base, 4), STACK(base, 5));
	COPY(STACK(base, 0), STACK(base, 6));
	COPY(STACK(base, 3), STACK(base, 7));
	Fset_schar(STACK(base, 5));
	F1plus(STACK(base, 3));
	goto M227_1;
	RETURN267:;
}
