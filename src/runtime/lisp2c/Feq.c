/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "inline.h"

void Feq(CL_FORM *base)
{
	LOAD_BOOL(EQ(ARG(0), ARG(1)), ARG(0));
}
