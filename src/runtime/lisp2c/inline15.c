/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "inline.h"

void Fsimple_bit_vector_p(CL_FORM *base)
{
	LOAD_BOOL(CL_SMVEC_BIT_P(ARG(0)), ARG(0));
}
