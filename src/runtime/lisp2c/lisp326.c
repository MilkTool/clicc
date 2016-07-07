/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fslot_exists_p(CL_FORM *base)
{
	if(CL_INSTANCEP(ARG(0)))
	{
		COPY(OFFSET(AR_BASE(GET_FORM(ARG(0))), -1 + 1), ARG(2));
	}
	else
	{
		LOAD_SMSTR((CL_FORM *)&KClisp[216], ARG(2));	/* ~S ist not a valid argument for CLASS-OF, ~
              these have been restricted to instances of user-defined-classes. */
		COPY(ARG(0), ARG(3));
		Ferror(ARG(2), 2);
	}
	COPY(OFFSET(AR_BASE(GET_FORM(ARG(2))), 3 + 1), ARG(2));
	LOAD_GLOBFUN(&CFthird, ARG(3));
	LOAD_NIL(ARG(4));
	LOAD_NIL(ARG(5));
	LOAD_NIL(ARG(6));
	LOAD_SMALLFIXNUM(0, ARG(7));
	COPY(SYMVAL(Slisp, 0), ARG(8));	/* MOST-POSITIVE-FIXNUM */
	if(CL_LISTP(ARG(2)))
	{
		COPY(ARG(1), ARG(9));
		COPY(ARG(2), ARG(10));
		LOAD_NIL(ARG(11));
		LOAD_NIL(ARG(12));
		LOAD_NIL(ARG(13));
		COPY(ARG(7), ARG(14));
		COPY(ARG(8), ARG(15));
		LOAD_GLOBFUN(&CFthird, ARG(16));
		list_position(ARG(9));
		COPY(ARG(9), ARG(3));
	}
	else
	{
		COPY(ARG(1), ARG(9));
		COPY(ARG(2), ARG(10));
		LOAD_NIL(ARG(11));
		LOAD_NIL(ARG(12));
		LOAD_NIL(ARG(13));
		COPY(ARG(7), ARG(14));
		COPY(ARG(8), ARG(15));
		LOAD_GLOBFUN(&CFthird, ARG(16));
		vector_position(ARG(9));
		COPY(ARG(9), ARG(3));
	}
	if(CL_TRUEP(ARG(3)))
	{
		LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(0));	/* T */
	}
	else
	{
		LOAD_NIL(ARG(0));
	}
}
