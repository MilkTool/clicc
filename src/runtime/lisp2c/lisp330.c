/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fno_applicable_method(CL_FORM *base, int nargs)
{
	Flist(ARG(1), nargs - 1);
	LOAD_SMSTR((CL_FORM *)&KClisp[114], ARG(2));	/* No applicable method for generic function ~s with args ~s. */
	COPY(ARG(0), ARG(3));
	COPY(ARG(1), ARG(4));
	Ferror(ARG(2), 3);
}
