/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

GEN_GLOBAL_FUNARG(Cright_parenthesis_reader, right_parenthesis_reader, 2);

extern CL_INIT XIright_parenthesis_reader[];
extern CL_INIT XFright_parenthesis_reader[];
CL_INIT Kright_parenthesis_reader[] =
{
	MAKE_STRING(24, "Ignoring an unmatched ~a"),	/* 0 */
};

void right_parenthesis_reader(CL_FORM *base)
{
	if(EQL(ARG(1), SYMVAL(Slisp, 446)))	/* *PARENTHESIS-OPEN* */
	{
		LOAD_NIL(SYMVAL(Slisp, 446));	/* *PARENTHESIS-OPEN* */
		COPY(SYMVAL(Slisp, 446), ARG(0));	/* *PARENTHESIS-OPEN* */
	}
	else
	{
		LOAD_SMSTR((CL_FORM *)&Kright_parenthesis_reader[0], ARG(2));	/* Ignoring an unmatched ~a */
		COPY(ARG(1), ARG(3));
		Fwarn(ARG(2), 2);
		mv_count = 1;
		LOAD_NIL(ARG(0));
		mv_count = 0;
	}
}
