/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void Fget_output_stream_string(CL_FORM *base)
{
	COPY(ARG(0), ARG(1));
	stream_type(ARG(1));
	if(CL_SYMBOLP(ARG(1)) && GET_SYMBOL(ARG(1)) == SYMBOL(Slisp, 102))	/* STRING-OUTPUT */
	{
	}
	else
	{
		LOAD_SMSTR((CL_FORM *)&KClisp[245], ARG(1));	/* string-output-stream expected */
		Ferror(ARG(1), 1);
	}
	stream_extra(ARG(0));
	Ffuncall(ARG(0), 1);
}
