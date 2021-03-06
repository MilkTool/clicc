/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void rt_setup_symbol(CL_FORM *base)
{
	if(CL_SYMBOLP(ARG(0)))
	{
		COPY(SYM_PACKAGE(ARG(0)), ARG(2));
	}
	else
	{
		if(CL_TRUEP(ARG(0)))
		{
			LOAD_NIL(ARG(2));
		}
		else
		{
			COPY(SYMVAL(Slisp, 679), ARG(2));	/* *NIL-PACKAGE* */
		}
	}
	if(CL_TRUEP(ARG(2)))
	{
		COPY(ARG(1), ARG(3));
		COPY(ARG(2), ARG(4));
		Fminusp(ARG(4));
		if(CL_TRUEP(ARG(4)))
		{
			COPY(ARG(2), ARG(4));
			Fminus(ARG(4), 1);
		}
		else
		{
			COPY(ARG(2), ARG(4));
		}
		Fsvref(ARG(3));
		if(CL_SYMBOLP(ARG(0)))
		{
			LOAD_SMSTR(SYM_NAME(ARG(0)), ARG(4));
		}
		else
		{
			if(CL_TRUEP(ARG(0)))
			{
				COPY(SYMVAL(Slisp, 676), ARG(4));	/* SYM_EXPECTED */
				COPY(ARG(0), ARG(5));
				Ferror(ARG(4), 2);
			}
			else
			{
				LOAD_SMSTR((CL_FORM *)&KClisp[266], ARG(4));	/* NIL */
			}
		}
		LOAD_FIXNUM(ARG(5), 101, ARG(5));
		COPY(ARG(4), ARG(6));
		string_to_simple_string(ARG(6));
		rt_sxhash_string(ARG(6));
		COPY(ARG(6), ARG(7));
		LOAD_FIXNUM(ARG(8), 101, ARG(8));
		rt_floor(ARG(7));
		COPY(&mv_buf[0], ARG(8));
		mv_count = 1;
		{
			COPY(ARG(8), ARG(4));
		}
		COPY(ARG(0), ARG(5));
		COPY(ARG(3), ARG(6));
		set_symbol_package(ARG(5));
		COPY(ARG(2), ARG(5));
		Fplusp(ARG(5));
		if(CL_TRUEP(ARG(5)))
		{
			COPY(ARG(3), ARG(5));
			Ppackage_internal(ARG(5));
			COPY(ARG(5), ARG(7));
			COPY(ARG(4), ARG(8));
			Fsvref(ARG(7));
			ALLOC_CONS(ARG(8), ARG(0), ARG(7), ARG(6));
			COPY(ARG(5), ARG(7));
			COPY(ARG(4), ARG(8));
			Fset_svref(ARG(6));
			COPY(ARG(6), ARG(0));
		}
		else
		{
			COPY(ARG(3), ARG(5));
			Ppackage_external(ARG(5));
			COPY(ARG(5), ARG(7));
			COPY(ARG(4), ARG(8));
			Fsvref(ARG(7));
			ALLOC_CONS(ARG(8), ARG(0), ARG(7), ARG(6));
			COPY(ARG(5), ARG(7));
			COPY(ARG(4), ARG(8));
			Fset_svref(ARG(6));
			COPY(ARG(6), ARG(0));
		}
	}
	else
	{
		LOAD_NIL(ARG(0));
	}
}
