/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fuse_package(CL_FORM *base, int nargs)
{
	switch(nargs)
	{
		case 1:
		COPY(SYMVAL(Slisp, 343), ARG(1));	/* *PACKAGE* */
		case 2:
		break;
		default:
		Labort(TOO_MANY_ARGS);
	}
	use_package1(ARG(0));
}
