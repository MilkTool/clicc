/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fcode_char(CL_FORM *base)
{
	COPY(ARG(0), ARG(1));
	LOAD_SMALLFIXNUM(0, ARG(2));
	COPY(SYMVAL(Slisp, 12), ARG(3));	/* CHAR-CODE-LIMIT */
	check_integer(ARG(1));
	if(CL_TRUEP(ARG(1)))
	{
		rt_code_char(ARG(0));
	}
	else
	{
		LOAD_NIL(ARG(0));
	}
}
