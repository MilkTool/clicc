#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void Fterpri(CL_FORM *base, int nargs)
{
	switch(nargs)
	{
		case 0:
		LOAD_NIL(STACK(base, 0));
		case 1:
		break;
		default:
		Labort(TOO_MANY_ARGS);
	}
	if(CL_TRUEP(STACK(base, 0)))
	{
		if(CL_SYMBOLP(STACK(base, 0)) && GET_SYMBOL(STACK(base, 0)) == SYMBOL(Ssys, 1))	/* T */
		{
			COPY(SYMVAL(Slisp, 58), STACK(base, 0));	/* *TERMINAL-IO* */
		}
	}
	else
	{
		COPY(SYMVAL(Slisp, 60), STACK(base, 0));	/* *STANDARD-OUTPUT* */
	}
	LOAD_CHAR('\n', STACK(base, 1));
	COPY(STACK(base, 0), STACK(base, 2));
	Fwrite_char(STACK(base, 1), 2);
	mv_count = 1;
	LOAD_NIL(STACK(base, 0));
}
