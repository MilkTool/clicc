/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void sort1(CL_FORM *base)
{
	if(CL_LISTP(ARG(0)))
	{
		list_merge_sort(ARG(0));
	}
	else
	{
		COPY(ARG(0), ARG(3));
		LOAD_FIXNUM(ARG(4), 0, ARG(4));
		COPY(ARG(0), ARG(5));
		Flength(ARG(5));
		COPY(ARG(1), ARG(6));
		COPY(ARG(2), ARG(7));
		quick_sort(ARG(3));
		COPY(ARG(3), ARG(0));
	}
}
