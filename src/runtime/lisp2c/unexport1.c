/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

extern CL_INIT XIunexport1[];
extern CL_INIT XFunexport1[];
CL_INIT Kunexport1[] =
{
	MAKE_STRING(22, "can\'t unexport from ~S"),	/* 0 */
	MAKE_STRING(26, "~S is not accessible in ~S"),	/* 2 */
};

void unexport1(CL_FORM *base)
{
	COPY(ARG(1), ARG(2));
	if(CL_SYMBOLP(ARG(2)) || CL_NILP(ARG(2)))
	{
		COPY(ARG(2), ARG(3));
		if(CL_SYMBOLP(ARG(3)))
		{
			GET_SYM_NAME(ARG(5), ARG(3), ARG(2));
		}
		else
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[243], ARG(2));	/* NIL */
		}
	}
	COPY(ARG(2), ARG(3));
	Fstringp(ARG(3));
	if(CL_TRUEP(ARG(3)))
	{
		Ffind_package(ARG(2));
	}
	COPY(ARG(2), ARG(1));
	if(EQ(SYMVAL(Slisp, 380), ARG(1)))	/* *KEYWORD-PACKAGE* */
	{
		LOAD_SMSTR((CL_FORM *)&Kunexport1[0], ARG(2));	/* can't unexport from ~S */
		COPY(ARG(1), ARG(3));
		Ferror(ARG(2), 2);
	}
	if(CL_LISTP(ARG(0)))
	{
	}
	else
	{
		COPY(ARG(0), ARG(2));
		Flist(ARG(2), 1);
		COPY(ARG(2), ARG(0));
	}
	LOAD_NIL(ARG(2));
	COPY(ARG(0), ARG(3));
	M1_1:;
	if(CL_ATOMP(ARG(3)))
	{
		LOAD_NIL(ARG(2));
		goto RETURN1;
	}
	COPY(ARG(3), ARG(4));
	COPY(GET_CAR(ARG(4)), ARG(2));
	if(CL_SYMBOLP(ARG(2)))
	{
		GET_SYM_NAME(ARG(5), ARG(2), ARG(4));
	}
	else
	{
		if(CL_TRUEP(ARG(2)))
		{
			COPY(SYMVAL(Slisp, 679), ARG(4));	/* SYM_EXPECTED */
			COPY(ARG(2), ARG(5));
			Ferror(ARG(4), 2);
		}
		else
		{
			LOAD_SMSTR((CL_FORM *)&KClisp[243], ARG(4));	/* NIL */
		}
	}
	COPY(ARG(1), ARG(5));
	find_symbol1(ARG(4));
	COPY(&mv_buf[0], ARG(5));
	{
		int nargs;
		nargs = 2;
		mv_count = 1;
		{
			switch(nargs)
			{
				case 0:
				LOAD_NIL(ARG(4));
				case 1:
				LOAD_NIL(ARG(5));
				nargs = 2;
			}
			if(CL_TRUEP(ARG(5)))
			{
				LOAD_NIL(ARG(6));
			}
			else
			{
				LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(6));	/* T */
			}
			if(CL_TRUEP(ARG(6)))
			{
				goto THEN1;
			}
			else
			{
				if(EQ(ARG(4), ARG(2)))
				{
					goto ELSE2;
				}
				else
				{
					goto THEN1;
				}
			}
			{
				THEN1:;
				LOAD_SMSTR((CL_FORM *)&Kunexport1[2], ARG(6));	/* ~S is not accessible in ~S */
				COPY(ARG(2), ARG(7));
				COPY(ARG(1), ARG(8));
				Ferror(ARG(6), 3);
			}
			ELSE2:;
			if(CL_SYMBOLP(ARG(5)) && GET_SYMBOL(ARG(5)) == SYMBOL(Slisp, 375))	/* EXTERNAL */
			{
				if(CL_SYMBOLP(ARG(2)))
				{
					GET_SYM_NAME(ARG(7), ARG(2), ARG(6));
				}
				else
				{
					if(CL_TRUEP(ARG(2)))
					{
						COPY(SYMVAL(Slisp, 679), ARG(6));	/* SYM_EXPECTED */
						COPY(ARG(2), ARG(7));
						Ferror(ARG(6), 2);
					}
					else
					{
						LOAD_SMSTR((CL_FORM *)&KClisp[243], ARG(6));	/* NIL */
					}
				}
				COPY(SYMVAL(Slisp, 372), ARG(7));	/* PACKAGE-HASHTAB-SIZE */
				COPY(ARG(6), ARG(8));
				string_to_simple_string(ARG(8));
				rt_sxhash_string(ARG(8));
				COPY(ARG(8), ARG(9));
				COPY(ARG(7), ARG(10));
				LOAD_SMALLFIXNUM(0, ARG(11));
				rt_convert_to_int(ARG(9));
				COPY(&mv_buf[0], ARG(10));
				mv_count = 1;
				{
					COPY(ARG(10), ARG(6));
				}
				COPY(ARG(2), ARG(7));
				COPY(ARG(1), ARG(8));
				LOAD_SYMBOL(SYMBOL(Slisp, 344), ARG(9));	/* PACKAGE */
				rt_struct_typep(ARG(8));
				if(CL_TRUEP(ARG(8)))
				{
					COPY(OFFSET(AR_BASE(GET_FORM(ARG(1))), 3 + 1), ARG(8));
				}
				else
				{
					COPY(SYMVAL(Slisp, 342), ARG(8));	/* NO_STRUCT */
					COPY(ARG(1), ARG(9));
					LOAD_SYMBOL(SYMBOL(Slisp, 344), ARG(10));	/* PACKAGE */
					Ferror(ARG(8), 3);
				}
				COPY(ARG(6), ARG(9));
				del_pack_sym(ARG(7));
				COPY(ARG(1), ARG(7));
				LOAD_SYMBOL(SYMBOL(Slisp, 344), ARG(8));	/* PACKAGE */
				rt_struct_typep(ARG(7));
				if(CL_TRUEP(ARG(7)))
				{
					COPY(OFFSET(AR_BASE(GET_FORM(ARG(1))), 2 + 1), ARG(7));
				}
				else
				{
					COPY(SYMVAL(Slisp, 342), ARG(7));	/* NO_STRUCT */
					COPY(ARG(1), ARG(8));
					LOAD_SYMBOL(SYMBOL(Slisp, 344), ARG(9));	/* PACKAGE */
					Ferror(ARG(7), 3);
				}
				COPY(ARG(7), ARG(9));
				COPY(ARG(6), ARG(10));
				Fsvref(ARG(9));
				ALLOC_CONS(ARG(10), ARG(2), ARG(9), ARG(8));
				COPY(ARG(8), ARG(9));
				COPY(ARG(7), ARG(10));
				COPY(ARG(6), ARG(11));
				Fset_svref(ARG(9));
			}
		}
	}
	COPY(ARG(3), ARG(4));
	COPY(GET_CDR(ARG(4)), ARG(3));
	goto M1_1;
	RETURN1:;
	LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(0));	/* T */
}
