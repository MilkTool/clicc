/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

GEN_GLOBAL_FUNARG(Cbinary_reader, binary_reader, 3);

void binary_reader(CL_FORM *base)
{
	if(CL_TRUEP(ARG(2)))
	{
		LOAD_SMSTR((CL_FORM *)&KClisp[208], ARG(3));	/* extra argument for #~S */
		COPY(ARG(1), ARG(4));
		Ferror(ARG(3), 2);
	}
	LOAD_SMALLFIXNUM(2, ARG(2));
	radix_reader(ARG(0));
}
