#include <c_decl.h>
#include "sys.h"
#include "inline.h"

void Fcons(CL_FORM *base)
{
	CL_FORM *lptr;
	lptr = form_alloc(STACK(base, 2), 2);
	COPY(STACK(base, 0), CAR(lptr));
	COPY(STACK(base, 1), CDR(lptr));
	LOAD_CONS(lptr, STACK(base, 0));
}