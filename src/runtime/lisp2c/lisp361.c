/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

CL_INIT Kmaybe_make_pattern[] =
{
	MAKE_STRING(39, "``[\'\' with no corresponding ``]\'\' in ~S"),	/* 0 */
	MAKE_STRING(0, ""),	/* 2 */
};

static void Z121_flush_pending_regulars(CL_FORM *base, CL_FORM *display[]);

void maybe_make_pattern(CL_FORM *base)
{
	CL_FORM *display[1];
	if(CL_TRUEP(SYMVAL(Slisp, 287)))	/* *IGNORE-WILDCARDS* */
	{
		subseq1(ARG(0));
	}
	else
	{
		LOAD_NIL(ARG(3));
		LOAD_NIL(ARG(4));
		ALLOC_CONS(ARG(5), ARG(3), ARG(4), ARG(3));
		LOAD_NIL(ARG(4));
		LOAD_NIL(ARG(5));
		LOAD_NIL(ARG(6));
		COPY(ARG(1), ARG(7));
		M1_1:;
		COPY(ARG(7), ARG(8));
		COPY(ARG(2), ARG(9));
		Fge(ARG(8), 2);
		if(CL_TRUEP(ARG(8)))
		{
			goto RETURN1;
		}
		if(CL_SMSTRP(ARG(0)))
		{
		}
		else
		{
			COPY(SYMVAL(Slisp, 58), ARG(8));	/* WRONG_TYPE */
			COPY(ARG(0), ARG(9));
			LOAD_SYMBOL(SYMBOL(Slisp, 40), ARG(10));	/* SIMPLE-STRING */
			Ferror(ARG(8), 3);
		}
		COPY(ARG(0), ARG(8));
		COPY(ARG(7), ARG(9));
		pvref(ARG(8));
		if(CL_TRUEP(ARG(4)))
		{
			F1plus(ARG(7));
			LOAD_NIL(ARG(4));
		}
		else
		{
			COPY(ARG(8), ARG(9));
			LOAD_CHAR(ARG(10), '\\', ARG(10));
			rt_charE(ARG(9));
			if(CL_TRUEP(ARG(9)))
			{
				LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(4));	/* T */
				LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(5));	/* T */
				if(CL_TRUEP(ARG(6)))
				{
				}
				else
				{
					COPY(ARG(7), ARG(6));
				}
				F1plus(ARG(7));
			}
			else
			{
				COPY(ARG(8), ARG(9));
				LOAD_CHAR(ARG(10), '?', ARG(10));
				rt_charE(ARG(9));
				if(CL_TRUEP(ARG(9)))
				{
					display[0] = ARG(0);
					Z121_flush_pending_regulars(ARG(9), display);
					LOAD_SYMBOL(SYMBOL(Slisp, 283), ARG(9));	/* SINGLE-CHAR-WILD */
					COPY(ARG(3), ARG(10));
					add_q(ARG(9));
					F1plus(ARG(7));
				}
				else
				{
					COPY(ARG(8), ARG(9));
					LOAD_CHAR(ARG(10), '*', ARG(10));
					rt_charE(ARG(9));
					if(CL_TRUEP(ARG(9)))
					{
						display[0] = ARG(0);
						Z121_flush_pending_regulars(ARG(9), display);
						LOAD_SYMBOL(SYMBOL(Slisp, 272), ARG(9));	/* MULTI-CHAR-WILD */
						COPY(ARG(3), ARG(10));
						add_q(ARG(9));
						F1plus(ARG(7));
					}
					else
					{
						COPY(ARG(8), ARG(9));
						LOAD_CHAR(ARG(10), '[', ARG(10));
						rt_charE(ARG(9));
						if(CL_TRUEP(ARG(9)))
						{
							display[0] = ARG(0);
							Z121_flush_pending_regulars(ARG(9), display);
							LOAD_CHAR(ARG(9), ']', ARG(9));
							COPY(ARG(0), ARG(10));
							LOAD_SYMBOL(SYMBOL(Slisp, 231), ARG(11));	/* START */
							COPY(ARG(7), ARG(12));
							LOAD_SYMBOL(SYMBOL(Slisp, 232), ARG(13));	/* END */
							COPY(ARG(2), ARG(14));
							Fposition(ARG(9), 6);
							if(CL_TRUEP(ARG(9)))
							{
							}
							else
							{
								LOAD_SMSTR((CL_FORM *)&Kmaybe_make_pattern[0], ARG(10));	/* ``['' with no corresponding ``]'' in ~S */
								COPY(ARG(0), ARG(11));
								Ferror(ARG(10), 2);
							}
							LOAD_SYMBOL(SYMBOL(Slisp, 265), ARG(10));	/* CHARACTER-SET */
							COPY(ARG(0), ARG(11));
							COPY(ARG(7), ARG(12));
							F1plus(ARG(12));
							COPY(ARG(9), ARG(13));
							subseq1(ARG(11));
							Flist(ARG(10), 2);
							COPY(ARG(3), ARG(11));
							add_q(ARG(10));
							COPY(ARG(9), ARG(7));
							F1plus(ARG(7));
						}
						else
						{
							if(CL_TRUEP(ARG(6)))
							{
							}
							else
							{
								COPY(ARG(7), ARG(6));
							}
							F1plus(ARG(7));
						}
					}
				}
			}
		}
		goto M1_1;
		RETURN1:;
		display[0] = ARG(0);
		Z121_flush_pending_regulars(ARG(8), display);
		COPY(ARG(3), ARG(4));
		COPY(ARG(4), ARG(5));
		COPY(GET_CAR(ARG(5)), ARG(3));
		if(CL_TRUEP(ARG(3)))
		{
			if(CL_CONSP(ARG(3)))
			{
				bool_result = CL_TRUEP(GET_CDR(ARG(3)));
			}
			else
			{
				LOAD_SMSTR((CL_FORM *)&KClisp[262], ARG(4));	/* ~a is not a list */
				COPY(ARG(3), ARG(5));
				Ferror(ARG(4), 2);
			}
			if(bool_result)
			{
				goto ELSE1;
			}
			else
			{
				if(CL_CONSP(ARG(3)))
				{
					COPY(GET_CAR(ARG(3)), ARG(4));
				}
				else
				{
					LOAD_SMSTR((CL_FORM *)&KClisp[264], ARG(4));	/* ~a is not a list */
					COPY(ARG(3), ARG(5));
					Ferror(ARG(4), 2);
				}
			}
			if(CL_SMSTRP(ARG(4)))
			{
				if(CL_CONSP(ARG(3)))
				{
					COPY(GET_CAR(ARG(3)), ARG(0));
				}
				else
				{
					LOAD_SMSTR((CL_FORM *)&KClisp[264], ARG(0));	/* ~a is not a list */
					COPY(ARG(3), ARG(1));
					Ferror(ARG(0), 2);
				}
			}
			else
			{
				ELSE1:;
				LOAD_SYMBOL(SYMBOL(Slisp, 250), ARG(0));	/* PATTERN */
				COPY(ARG(3), ARG(1));
				rt_make_struct(ARG(0), 2);
			}
		}
		else
		{
			LOAD_SMSTR((CL_FORM *)&Kmaybe_make_pattern[2], ARG(0));	/*  */
		}
	}
}

static void Z121_flush_pending_regulars(CL_FORM *base, CL_FORM *display[])
{
	if(CL_TRUEP(&display[0][6]))
	{
		if(CL_TRUEP(&display[0][5]))
		{
			COPY(&display[0][0], ARG(0));
			COPY(&display[0][6], ARG(1));
			COPY(&display[0][7], ARG(2));
			remove_backslashes(ARG(0));
		}
		else
		{
			COPY(&display[0][0], ARG(0));
			COPY(&display[0][6], ARG(1));
			COPY(&display[0][7], ARG(2));
			subseq1(ARG(0));
		}
		COPY(&display[0][3], ARG(1));
		add_q(ARG(0));
		LOAD_NIL(&display[0][5]);
		LOAD_NIL(&display[0][6]);
		COPY(&display[0][6], ARG(0));
	}
	else
	{
		LOAD_NIL(ARG(0));
	}
}
