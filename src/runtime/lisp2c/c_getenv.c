/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void c_getenv(CL_FORM *base)
{
	string_to_simple_string(ARG(0));
	c_getenv_internal(ARG(0));
}