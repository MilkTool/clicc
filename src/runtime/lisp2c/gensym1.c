/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

extern CL_INIT XIgensym1[];
extern CL_INIT XFgensym1[];
CL_INIT Kgensym1[] =
{
	MAKE_STRING(35, "positive integer or string expected"),	/* 0 */
};

void gensym1(CL_FORM *base)
{
	if(CL_TRUEP(ARG(0)))
	{
		LOAD_SMALLFIXNUM(0, ARG(2));
		if(CL_FIXNUMP(ARG(0)) && GET_FIXNUM(ARG(0)) >= GET_FIXNUM(ARG(2)))
		{
			COPY(ARG(0), SYMVAL(Slisp, 665));	/* *GENSYM-COUNTER* */
		}
		else
		{
			COPY(ARG(0), ARG(1));
			Fstringp(ARG(1));
			if(CL_TRUEP(ARG(1)))
			{
				COPY(ARG(0), SYMVAL(Slisp, 677));	/* *GENSYM-PREFIX* */
			}
			else
			{
				LOAD_SMSTR((CL_FORM *)&Kgensym1[0], ARG(1));	/* positive integer or string expected */
				Ferror(ARG(1), 1);
			}
		}
	}
	LOAD_SYMBOL(SYMBOL(Slisp, 44), ARG(1));	/* STRING */
	COPY(SYMVAL(Slisp, 677), ARG(2));	/* *GENSYM-PREFIX* */
	COPY(SYMVAL(Slisp, 665), ARG(3));	/* *GENSYM-COUNTER* */
	LOAD_SMALLFIXNUM(10, ARG(4));
	LOAD_SYMBOL(SYMBOL(Slisp, 18), ARG(5));	/* CHARACTER */
	LOAD_NIL(ARG(6));
	LOAD_NIL(ARG(7));
	LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(8));	/* T */
	LOAD_SMALLFIXNUM(0, ARG(9));
	LOAD_NIL(ARG(10));
	LOAD_SMALLFIXNUM(0, ARG(11));
	LOAD_NIL(ARG(12));
	LOAD_NIL(ARG(13));
	make_array1(ARG(4));
	make_string_output_stream1(ARG(4));
	COPY(ARG(3), ARG(5));
	COPY(ARG(4), ARG(6));
	prin11(ARG(5));
	COPY(ARG(4), ARG(5));
	LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(6));	/* STREAM */
	rt_struct_typep(ARG(5));
	if(CL_TRUEP(ARG(5)))
	{
		COPY(OFFSET(AR_BASE(GET_FORM(ARG(4))), 0 + 1), ARG(5));
	}
	else
	{
		COPY(SYMVAL(Slisp, 342), ARG(5));	/* NO_STRUCT */
		COPY(ARG(4), ARG(6));
		LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(7));	/* STREAM */
		Ferror(ARG(5), 3);
	}
	if(CL_SYMBOLP(ARG(5)) && GET_SYMBOL(ARG(5)) == SYMBOL(Slisp, 102))	/* STRING-OUTPUT */
	{
	}
	else
	{
		LOAD_SMSTR((CL_FORM *)&KClisp[245], ARG(5));	/* string-output-stream expected */
		Ferror(ARG(5), 1);
	}
	COPY(ARG(4), ARG(5));
	COPY(ARG(5), ARG(6));
	LOAD_SMALLFIXNUM(1, ARG(7));
	COPY(ARG(6), ARG(8));
	LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(9));	/* STREAM */
	rt_struct_typep(ARG(8));
	if(CL_TRUEP(ARG(8)))
	{
		COPY(OFFSET(AR_BASE(GET_FORM(ARG(6))), GET_FIXNUM(ARG(7)) + 1), ARG(5));
	}
	else
	{
		COPY(SYMVAL(Slisp, 342), ARG(5));	/* NO_STRUCT */
		LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(7));	/* STREAM */
		Ferror(ARG(5), 3);
	}
	Ffuncall(ARG(5), 1);
	mv_count = 1;
	COPY(ARG(5), ARG(3));
	Fconcatenate(ARG(1), 3);
	Fmake_symbol(ARG(1));
	COPY(SYMVAL(Slisp, 665), ARG(2));	/* *GENSYM-COUNTER* */
	F1plus(ARG(2));
	COPY(ARG(2), SYMVAL(Slisp, 665));	/* *GENSYM-COUNTER* */
	COPY(ARG(1), ARG(0));
}
