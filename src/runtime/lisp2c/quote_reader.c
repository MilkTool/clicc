/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

GEN_GLOBAL_FUNARG(Cquote_reader, quote_reader, 2);

void quote_reader(CL_FORM *base)
{
	LOAD_SYMBOL(SYMBOL(Slisp, 452), ARG(2));	/* QUOTE */
	COPY(ARG(0), ARG(3));
	LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(4));	/* T */
	LOAD_NIL(ARG(5));
	LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(6));	/* T */
	internal_read(ARG(3));
	Flist(ARG(2), 2);
	COPY(ARG(2), ARG(0));
}
