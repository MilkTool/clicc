/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void Fset_nth(CL_FORM *base)
{
	Fnthcdr(ARG(1));
	Fset_car(ARG(0));
}
