/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

GEN_GLOBAL_FUNARG(Cpattern_p, pattern_p, 1);

void pattern_p(CL_FORM *base)
{
	LOAD_SYMBOL(SYMBOL(Slisp, 248), ARG(1));	/* PATTERN */
	rt_struct_typep(ARG(0));
}
