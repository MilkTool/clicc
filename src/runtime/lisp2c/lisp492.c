/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fhash_table_rehash_size(CL_FORM *base)
{
	LOAD_SMALLFIXNUM(2, ARG(1));
	LOAD_SYMBOL(SYMBOL(Slisp, 389), ARG(2));	/* HASH-TABLE */
	rt_struct_ref(ARG(0));
}
