/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void rt_the_type_error(CL_FORM *base)
{
	LOAD_SMSTR((CL_FORM *)&KClisp[36], ARG(2));	/* type error: ~S is not of type ~S */
	COPY(ARG(0), ARG(3));
	COPY(ARG(1), ARG(4));
	Ferror(ARG(2), 3);
}