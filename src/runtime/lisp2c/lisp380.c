/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

extern CL_INIT XIPenumerate_matches[];
extern CL_INIT XFPenumerate_matches[];
CL_INIT KPenumerate_matches[] =
{
	MAKE_STRING(42, "Cannot supply a type without a name:~%  ~S"),	/* 0 */
	MAKE_CONS,	/* 2 CONS(2) */
	MAKE_NIL,
	MAKE_CONSREF(&KPenumerate_matches[5]),
	MAKE_CONS,	/* CONS(5) */
	MAKE_SYMREF(SYMBOL(Slisp, 256)),	/* UNSPECIFIC */
	MAKE_NIL,
	MAKE_STRING(45, "Cannot supply a version without a type:~%  ~S"),	/* 8 */
	MAKE_STRING(1, "/"),	/* 10 */
	MAKE_STRING(0, ""),	/* 12 */
	MAKE_STRING(40, "ecase: the value ~a is not a legal value"),	/* 14 */
	MAKE_STRING(0, ""),	/* 16 */
};

void Penumerate_matches(CL_FORM *base)
{
	COPY(ARG(0), ARG(3));
	LOAD_SYMBOL(SYMBOL(Slisp, 267), ARG(4));	/* LOCAL */
	pathname_type1(ARG(3));
	mv_count = 1;
	if(CL_TRUEP(ARG(3)))
	{
		COPY(ARG(0), ARG(3));
		LOAD_SYMBOL(SYMBOL(Slisp, 267), ARG(4));	/* LOCAL */
		pathname_name1(ARG(3));
		mv_count = 1;
		if(CL_TRUEP(ARG(3)))
		{
		}
		else
		{
			LOAD_SMSTR((CL_FORM *)&KPenumerate_matches[0], ARG(3));	/* Cannot supply a type without a name:~%  ~S */
			COPY(ARG(0), ARG(4));
			Ferror(ARG(3), 2);
		}
	}
	COPY(ARG(0), ARG(3));
	Fpathname_version(ARG(3));
	if(CL_FIXNUMP(ARG(3)))
	{
		COPY(ARG(0), ARG(3));
		LOAD_SYMBOL(SYMBOL(Slisp, 267), ARG(4));	/* LOCAL */
		pathname_type1(ARG(3));
		mv_count = 1;
		LOAD_CONS((CL_FORM *)&KPenumerate_matches[2], ARG(4));
		COPY(ARG(3), ARG(5));
		COPY(ARG(4), ARG(6));
		LOAD_NIL(ARG(7));
		LOAD_NIL(ARG(8));
		LOAD_NIL(ARG(9));
		member1(ARG(5));
	}
	else
	{
		goto ELSE1;
	}
	if(CL_TRUEP(ARG(5)))
	{
		LOAD_SMSTR((CL_FORM *)&KPenumerate_matches[8], ARG(3));	/* Cannot supply a version without a type:~%  ~S */
		COPY(ARG(0), ARG(4));
		Ferror(ARG(3), 2);
	}
	ELSE1:;
	COPY(ARG(0), ARG(3));
	LOAD_SYMBOL(SYMBOL(Slisp, 267), ARG(4));	/* LOCAL */
	pathname_directory1(ARG(3));
	mv_count = 1;
	if(CL_TRUEP(ARG(3)))
	{
		if(CL_CONSP(ARG(3)))
		{
			COPY(GET_CAR(ARG(3)), ARG(4));
		}
		else
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(4));	/* ~a is not a list */
			COPY(ARG(3), ARG(5));
			Ferror(ARG(4), 2);
		}
		if(CL_SYMBOLP(ARG(4)) && GET_SYMBOL(ARG(4)) == SYMBOL(Slisp, 257))	/* ABSOLUTE */
		{
			LOAD_SMSTR((CL_FORM *)&KPenumerate_matches[10], ARG(5));	/* / */
			if(CL_CONSP(ARG(3)))
			{
				COPY(GET_CDR(ARG(3)), ARG(6));
			}
			else
			{
				LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(6));	/* ~a is not a list */
				COPY(ARG(3), ARG(7));
				Ferror(ARG(6), 2);
			}
			COPY(ARG(0), ARG(7));
			LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(8));	/* T */
			COPY(ARG(2), ARG(9));
			Penumerate_directories(ARG(5));
			COPY(ARG(5), ARG(0));
		}
		else
		{
			if(CL_SYMBOLP(ARG(4)) && GET_SYMBOL(ARG(4)) == SYMBOL(Slisp, 261))	/* RELATIVE */
			{
				LOAD_SMSTR((CL_FORM *)&KPenumerate_matches[12], ARG(5));	/*  */
				if(CL_CONSP(ARG(3)))
				{
					COPY(GET_CDR(ARG(3)), ARG(6));
				}
				else
				{
					LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(6));	/* ~a is not a list */
					COPY(ARG(3), ARG(7));
					Ferror(ARG(6), 2);
				}
				COPY(ARG(0), ARG(7));
				LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(8));	/* T */
				COPY(ARG(2), ARG(9));
				Penumerate_directories(ARG(5));
				COPY(ARG(5), ARG(0));
			}
			else
			{
				LOAD_SMSTR((CL_FORM *)&KPenumerate_matches[14], ARG(0));	/* ecase: the value ~a is not a legal value */
				COPY(ARG(4), ARG(1));
				Ferror(ARG(0), 2);
			}
		}
	}
	else
	{
		LOAD_SMSTR((CL_FORM *)&KPenumerate_matches[16], ARG(4));	/*  */
		COPY(ARG(0), ARG(5));
		LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(6));	/* T */
		COPY(ARG(2), ARG(7));
		Penumerate_files(ARG(4));
		COPY(ARG(4), ARG(0));
	}
}
