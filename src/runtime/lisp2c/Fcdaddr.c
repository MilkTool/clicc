#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void Fcdaddr(CL_FORM *base)
{
	Fcdr(STACK(base, 0));
	Fcdr(STACK(base, 0));
	Fcar(STACK(base, 0));
	Fcdr(STACK(base, 0));
}
