/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void in_package1(CL_FORM *base)
{
	COPY(ARG(0), ARG(4));
	Ffind_package(ARG(4));
	if(CL_TRUEP(ARG(4)))
	{
		COPY(ARG(1), ARG(5));
		COPY(ARG(4), ARG(6));
		add_nicknames(ARG(5));
		COPY(ARG(2), ARG(5));
		COPY(ARG(4), ARG(6));
		use_package1(ARG(5));
		COPY(ARG(4), SYMVAL(Slisp, 343));	/* *PACKAGE* */
		COPY(SYMVAL(Slisp, 343), ARG(0));	/* *PACKAGE* */
	}
	else
	{
		if(CL_TRUEP(ARG(3)))
		{
			COPY(ARG(0), ARG(5));
			COPY(ARG(1), ARG(6));
			COPY(ARG(2), ARG(7));
			COPY(ARG(5), ARG(8));
			COPY(ARG(6), ARG(9));
			COPY(ARG(7), ARG(10));
			make_package1(ARG(8));
			COPY(ARG(8), SYMVAL(Slisp, 343));	/* *PACKAGE* */
		}
		else
		{
			COPY(ARG(0), ARG(5));
			COPY(ARG(1), ARG(6));
			LOAD_CONS((CL_FORM *)&KClisp[224], ARG(7));
			COPY(ARG(5), ARG(8));
			COPY(ARG(6), ARG(9));
			COPY(ARG(7), ARG(10));
			make_package1(ARG(8));
			COPY(ARG(8), SYMVAL(Slisp, 343));	/* *PACKAGE* */
		}
		COPY(SYMVAL(Slisp, 343), ARG(0));	/* *PACKAGE* */
	}
}
