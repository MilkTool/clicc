/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Frem(CL_FORM *base)
{
	COPY(ARG(0), ARG(2));
	COPY(ARG(1), ARG(3));
	Ftruncate(ARG(2), 2);
	COPY(&mv_buf[0], ARG(3));
	mv_count = 1;
	{
		COPY(ARG(3), ARG(0));
	}
}
