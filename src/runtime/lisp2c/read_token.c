/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

extern CL_INIT XIread_token[];
extern CL_INIT XFread_token[];
CL_INIT Kread_token[] =
{
	MAKE_STRING(42, "unexpected End of File after single escape"),	/* 0 */
	MAKE_STRING(17, "illegal character"),	/* 2 */
	MAKE_STRING(44, "unexpected End of File after multiple escape"),	/* 4 */
	MAKE_STRING(42, "unexpected End of File after single escape"),	/* 6 */
	MAKE_STRING(17, "illegal Character"),	/* 8 */
	MAKE_CONS,	/* 10 CONS(10) */
	MAKE_CHAR('e'),
	MAKE_CONSREF(&Kread_token[13]),
	MAKE_CONS,	/* CONS(13) */
	MAKE_CHAR('s'),
	MAKE_CONSREF(&Kread_token[16]),
	MAKE_CONS,	/* CONS(16) */
	MAKE_CHAR('f'),
	MAKE_CONSREF(&Kread_token[19]),
	MAKE_CONS,	/* CONS(19) */
	MAKE_CHAR('d'),
	MAKE_CONSREF(&Kread_token[22]),
	MAKE_CONS,	/* CONS(22) */
	MAKE_CHAR('l'),
	MAKE_NIL,
	MAKE_STRING(31, "ratio ~a/~a has been read as ~s"),	/* 25 */
	MAKE_STRING(28, "token may not contain colons"),	/* 27 */
	MAKE_STRING(16, "illegal token ~S"),	/* 29 */
	MAKE_STRING(23, "illegal package-name ~S"),	/* 31 */
	MAKE_STRING(39, "can\'t find the external symbol ~S in ~S"),	/* 33 */
	MAKE_STRING(16, "illegal Token ~S"),	/* 35 */
	MAKE_STRING(16, "illegal token ~S"),	/* 37 */
};

static void Z144_read_digits(CL_FORM *base, CL_FORM *display[]);
static void Z145_read_sign(CL_FORM *base, CL_FORM *display[]);
static void Z146_read_float2(CL_FORM *base, CL_FORM *display[]);

void read_token(CL_FORM *base)
{
	CL_FORM *display[1];
	LOAD_NIL(ARG(3));
	LOAD_NIL(ARG(4));
	LOAD_NIL(ARG(5));
	LOAD_NIL(ARG(6));
	M1_1:;
	if(CL_TRUEP(ARG(3)))
	{
		if(CL_SYMBOLP(ARG(2)) && GET_SYMBOL(ARG(2)) == SYMBOL(Slisp, 460))	/* CONSTITUENT */
		{
			COPY(ARG(1), ARG(7));
			token_push_extend(ARG(7));
			COPY(ARG(0), ARG(7));
			COPY(ARG(7), ARG(8));
			LOAD_NIL(ARG(9));
			LOAD_NIL(ARG(10));
			LOAD_NIL(ARG(11));
			read_char1(ARG(8));
			COPY(ARG(8), ARG(1));
			if(CL_TRUEP(SYMVAL(Slisp, 447)))	/* *READTABLE-UNCHANGED* */
			{
				M2_1:;
				if(CL_TRUEP(ARG(1)))
				{
					if(CL_CHARP(ARG(1)))	/* *READTABLE-SYNTAX* */
					{
						COPY(ARG(1), ARG(7));
					}
					else
					{
						COPY(SYMVAL(Slisp, 58), ARG(7));	/* WRONG_TYPE */
						COPY(ARG(1), ARG(8));
						LOAD_SYMBOL(SYMBOL(Slisp, 18), ARG(9));	/* CHARACTER */
						Ferror(ARG(7), 3);
					}
					rt_char_code(ARG(7));
					COPY(OFFSET(AR_BASE(GET_FORM(SYMVAL(Slisp, 450))), GET_FIXNUM(ARG(7))), ARG(7));
				}	/* CONSTITUENT */
				else
				{
					goto ELSE1;
				}
				if(CL_SYMBOLP(ARG(7)) && GET_SYMBOL(ARG(7)) == SYMBOL(Slisp, 460))
				{
				}
				else
				{
					ELSE1:;
					goto RETURN3;
				}
				COPY(ARG(1), ARG(7));
				token_push_extend(ARG(7));
				COPY(ARG(0), ARG(7));
				COPY(ARG(7), ARG(8));
				LOAD_NIL(ARG(9));
				LOAD_NIL(ARG(10));
				LOAD_NIL(ARG(11));
				read_char1(ARG(8));
				COPY(ARG(8), ARG(1));
				goto M2_1;
				RETURN3:;
			}
		}
		else
		{
			if(CL_SYMBOLP(ARG(2)) && GET_SYMBOL(ARG(2)) == SYMBOL(Slisp, 461))	/* SINGLE-ESCAPE */
			{
				COPY(ARG(0), ARG(7));
				COPY(ARG(7), ARG(8));
				LOAD_NIL(ARG(9));
				LOAD_NIL(ARG(10));
				LOAD_NIL(ARG(11));
				read_char1(ARG(8));
				COPY(ARG(8), ARG(1));
				if(CL_TRUEP(ARG(1)))
				{
				}
				else
				{
					LOAD_SMSTR((CL_FORM *)&Kread_token[0], ARG(7));	/* unexpected End of File after single escape */
					Ferror(ARG(7), 1);
				}
				COPY(ARG(1), ARG(7));
				token_push_extend(ARG(7));
				COPY(ARG(0), ARG(7));
				COPY(ARG(7), ARG(8));
				LOAD_NIL(ARG(9));
				LOAD_NIL(ARG(10));
				LOAD_NIL(ARG(11));
				read_char1(ARG(8));
				COPY(ARG(8), ARG(1));
			}
			else
			{
				if(CL_SYMBOLP(ARG(2)) && GET_SYMBOL(ARG(2)) == SYMBOL(Slisp, 462))	/* MULTIPLE-ESCAPE */
				{
					LOAD_NIL(ARG(3));
					COPY(ARG(0), ARG(7));
					COPY(ARG(7), ARG(8));
					LOAD_NIL(ARG(9));
					LOAD_NIL(ARG(10));
					LOAD_NIL(ARG(11));
					read_char1(ARG(8));
					COPY(ARG(8), ARG(1));
				}
				else
				{
					if(CL_TRUEP(ARG(2)))
					{
						COPY(ARG(1), ARG(7));
						token_push_extend(ARG(7));
						COPY(ARG(0), ARG(7));
						COPY(ARG(7), ARG(8));
						LOAD_NIL(ARG(9));
						LOAD_NIL(ARG(10));
						LOAD_NIL(ARG(11));
						read_char1(ARG(8));
						COPY(ARG(8), ARG(1));
					}
					else
					{
						LOAD_SMSTR((CL_FORM *)&Kread_token[2], ARG(7));	/* illegal character */
						Ferror(ARG(7), 1);
					}
				}
			}
		}
		if(CL_TRUEP(ARG(1)))
		{
		}
		else
		{
			LOAD_SMSTR((CL_FORM *)&Kread_token[4], ARG(7));	/* unexpected End of File after multiple escape */
			Ferror(ARG(7), 1);
		}
		if(CL_TRUEP(SYMVAL(Slisp, 447)))	/* *READTABLE-UNCHANGED* */
		{
			COPY(ARG(1), ARG(7));	/* *READTABLE-SYNTAX* */
			if(CL_CHARP(ARG(7)))
			{
				COPY(ARG(7), ARG(8));
			}
			else
			{
				COPY(SYMVAL(Slisp, 58), ARG(8));	/* WRONG_TYPE */
				COPY(ARG(7), ARG(9));
				LOAD_SYMBOL(SYMBOL(Slisp, 18), ARG(10));	/* CHARACTER */
				Ferror(ARG(8), 3);
			}
			rt_char_code(ARG(8));
			COPY(ARG(8), ARG(7));
			COPY(OFFSET(AR_BASE(GET_FORM(SYMVAL(Slisp, 450))), GET_FIXNUM(ARG(7))), ARG(2));
		}
		else
		{
			COPY(SYMVAL(Slisp, 449), ARG(7));	/* *READTABLE* */
			readtable_syntax(ARG(7));
			COPY(ARG(1), ARG(8));
			if(CL_CHARP(ARG(8)))
			{
				COPY(ARG(8), ARG(9));
			}
			else
			{
				COPY(SYMVAL(Slisp, 58), ARG(9));	/* WRONG_TYPE */
				COPY(ARG(8), ARG(10));
				LOAD_SYMBOL(SYMBOL(Slisp, 18), ARG(11));	/* CHARACTER */
				Ferror(ARG(9), 3);
			}
			rt_char_code(ARG(9));
			COPY(ARG(9), ARG(8));
			COPY(ARG(7), ARG(9));
			LOAD_BOOL(CL_SMVECP(ARG(9)), ARG(10));
			if(CL_TRUEP(ARG(10)))
			{
				goto THEN2;
			}
			else
			{
				COPY(ARG(9), ARG(11));
				COPY(ARG(11), ARG(12));
				LOAD_SYMBOL(SYMBOL(Slisp, 150), ARG(13));	/* COMPLEX-VECTOR */
				rt_struct_typep(ARG(12));
			}
			if(CL_TRUEP(ARG(12)))
			{
				THEN2:;
			}
			else
			{
				COPY(SYMVAL(Slisp, 58), ARG(9));	/* WRONG_TYPE */
				COPY(ARG(7), ARG(10));
				LOAD_SYMBOL(SYMBOL(Slisp, 47), ARG(11));	/* VECTOR */
				Ferror(ARG(9), 3);
			}
			COPY(ARG(7), ARG(9));
			COPY(ARG(8), ARG(10));
			Frow_major_aref(ARG(9));
			COPY(ARG(9), ARG(2));
		}
	}
	else
	{
		if(CL_SYMBOLP(ARG(2)) && GET_SYMBOL(ARG(2)) == SYMBOL(Slisp, 459))	/* WHITESPACE */
		{
			COPY(ARG(1), ARG(7));
			COPY(ARG(0), ARG(8));
			unread_char1(ARG(7));
			mv_count = 1;
			goto RETURN2;
		}
		else
		{
			if(CL_SYMBOLP(ARG(2)) && GET_SYMBOL(ARG(2)) == SYMBOL(Slisp, 460))	/* CONSTITUENT */
			{
				if(CL_CHARP(ARG(1)) && GET_CHAR(ARG(1)) == ':')
				{
					if(CL_TRUEP(ARG(5)))
					{
						LOAD_SMALLFIXNUM(1, ARG(8));
						if(EQL(ARG(5), ARG(8)))
						{
							LOAD_SMALLFIXNUM(2, ARG(5));
							COPY(SYMVAL(Slisp, 440), ARG(8));	/* *FILL-POINTER* */
							F1minus(ARG(8));
							if(EQL(ARG(6), ARG(8)))
							{
							}
							else
							{
								LOAD_SMALLFIXNUM(3, ARG(5));
							}
						}
						else
						{
							LOAD_SMALLFIXNUM(3, ARG(5));
						}
					}
					else
					{
						LOAD_SMALLFIXNUM(1, ARG(5));
						COPY(SYMVAL(Slisp, 440), ARG(6));	/* *FILL-POINTER* */
					}
				}
				if(CL_CHARP(ARG(1)))
				{
					COPY(ARG(1), ARG(7));
				}
				else
				{
					COPY(SYMVAL(Slisp, 58), ARG(7));	/* WRONG_TYPE */
					COPY(ARG(1), ARG(8));
					LOAD_SYMBOL(SYMBOL(Slisp, 18), ARG(9));	/* CHARACTER */
					Ferror(ARG(7), 3);
				}
				rt_char_upcase(ARG(7));
				token_push_extend(ARG(7));
				COPY(ARG(0), ARG(7));
				COPY(ARG(7), ARG(8));
				LOAD_NIL(ARG(9));
				LOAD_NIL(ARG(10));
				LOAD_NIL(ARG(11));
				read_char1(ARG(8));
				COPY(ARG(8), ARG(1));
				if(CL_TRUEP(SYMVAL(Slisp, 447)))	/* *READTABLE-UNCHANGED* */
				{
					M3_1:;
					if(CL_TRUEP(ARG(1)))
					{
						if(CL_CHARP(ARG(1)))	/* *READTABLE-SYNTAX* */
						{
							COPY(ARG(1), ARG(7));
						}
						else
						{
							COPY(SYMVAL(Slisp, 58), ARG(7));	/* WRONG_TYPE */
							COPY(ARG(1), ARG(8));
							LOAD_SYMBOL(SYMBOL(Slisp, 18), ARG(9));	/* CHARACTER */
							Ferror(ARG(7), 3);
						}
						rt_char_code(ARG(7));
						COPY(OFFSET(AR_BASE(GET_FORM(SYMVAL(Slisp, 450))), GET_FIXNUM(ARG(7))), ARG(7));
					}	/* CONSTITUENT */
					else
					{
						goto ELSE3;
					}
					if(CL_SYMBOLP(ARG(7)) && GET_SYMBOL(ARG(7)) == SYMBOL(Slisp, 460))
					{
					}
					else
					{
						ELSE3:;
						goto RETURN4;
					}
					if(CL_CHARP(ARG(1)) && GET_CHAR(ARG(1)) == ':')
					{
						if(CL_TRUEP(ARG(5)))
						{
							LOAD_SMALLFIXNUM(1, ARG(8));
							if(EQL(ARG(5), ARG(8)))
							{
								LOAD_SMALLFIXNUM(2, ARG(5));
								COPY(SYMVAL(Slisp, 440), ARG(8));	/* *FILL-POINTER* */
								F1minus(ARG(8));
								if(EQL(ARG(6), ARG(8)))
								{
								}
								else
								{
									LOAD_SMALLFIXNUM(3, ARG(5));
								}
							}
							else
							{
								LOAD_SMALLFIXNUM(3, ARG(5));
							}
						}
						else
						{
							LOAD_SMALLFIXNUM(1, ARG(5));
							COPY(SYMVAL(Slisp, 440), ARG(6));	/* *FILL-POINTER* */
						}
					}
					if(CL_CHARP(ARG(1)))
					{
						COPY(ARG(1), ARG(7));
					}
					else
					{
						COPY(SYMVAL(Slisp, 58), ARG(7));	/* WRONG_TYPE */
						COPY(ARG(1), ARG(8));
						LOAD_SYMBOL(SYMBOL(Slisp, 18), ARG(9));	/* CHARACTER */
						Ferror(ARG(7), 3);
					}
					rt_char_upcase(ARG(7));
					token_push_extend(ARG(7));
					COPY(ARG(0), ARG(7));
					COPY(ARG(7), ARG(8));
					LOAD_NIL(ARG(9));
					LOAD_NIL(ARG(10));
					LOAD_NIL(ARG(11));
					read_char1(ARG(8));
					COPY(ARG(8), ARG(1));
					goto M3_1;
					RETURN4:;
				}
			}
			else
			{
				if(CL_SYMBOLP(ARG(2)) && GET_SYMBOL(ARG(2)) == SYMBOL(Slisp, 461))	/* SINGLE-ESCAPE */
				{
					COPY(ARG(0), ARG(7));
					COPY(ARG(7), ARG(8));
					LOAD_NIL(ARG(9));
					LOAD_NIL(ARG(10));
					LOAD_NIL(ARG(11));
					read_char1(ARG(8));
					COPY(ARG(8), ARG(1));
					if(CL_TRUEP(ARG(1)))
					{
					}
					else
					{
						LOAD_SMSTR((CL_FORM *)&Kread_token[6], ARG(7));	/* unexpected End of File after single escape */
						Ferror(ARG(7), 1);
					}
					LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(4));	/* T */
					COPY(ARG(1), ARG(7));
					token_push_extend(ARG(7));
					COPY(ARG(0), ARG(7));
					COPY(ARG(7), ARG(8));
					LOAD_NIL(ARG(9));
					LOAD_NIL(ARG(10));
					LOAD_NIL(ARG(11));
					read_char1(ARG(8));
					COPY(ARG(8), ARG(1));
				}
				else
				{
					if(CL_SYMBOLP(ARG(2)) && GET_SYMBOL(ARG(2)) == SYMBOL(Slisp, 462))	/* MULTIPLE-ESCAPE */
					{
						LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(4));	/* T */
						LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(3));	/* T */
						COPY(ARG(0), ARG(7));
						COPY(ARG(7), ARG(8));
						LOAD_NIL(ARG(9));
						LOAD_NIL(ARG(10));
						LOAD_NIL(ARG(11));
						read_char1(ARG(8));
						COPY(ARG(8), ARG(1));
					}
					else
					{
						if(CL_TRUEP(ARG(2)))
						{
							if(CL_CONSP(ARG(2)))
							{
								COPY(GET_CDR(ARG(2)), ARG(7));
								if(CL_TRUEP(ARG(7)))
								{
									goto ELSE4;
								}
								else
								{
									goto THEN5;
								}
							}
							else
							{
								goto ELSE4;
							}
							{
								THEN5:;
								COPY(ARG(1), ARG(7));
								COPY(ARG(0), ARG(8));
								unread_char1(ARG(7));
								mv_count = 1;
								goto RETURN2;
							}
							ELSE4:;
							if(CL_CHARP(ARG(1)) && GET_CHAR(ARG(1)) == ':')
							{
								if(CL_TRUEP(ARG(5)))
								{
									LOAD_SMALLFIXNUM(1, ARG(8));
									if(EQL(ARG(5), ARG(8)))
									{
										LOAD_SMALLFIXNUM(2, ARG(5));
										COPY(SYMVAL(Slisp, 440), ARG(8));	/* *FILL-POINTER* */
										F1minus(ARG(8));
										if(EQL(ARG(6), ARG(8)))
										{
										}
										else
										{
											LOAD_SMALLFIXNUM(3, ARG(5));
										}
									}
									else
									{
										LOAD_SMALLFIXNUM(3, ARG(5));
									}
								}
								else
								{
									LOAD_SMALLFIXNUM(1, ARG(5));
									COPY(SYMVAL(Slisp, 440), ARG(6));	/* *FILL-POINTER* */
								}
							}
							if(CL_CHARP(ARG(1)))
							{
								COPY(ARG(1), ARG(7));
							}
							else
							{
								COPY(SYMVAL(Slisp, 58), ARG(7));	/* WRONG_TYPE */
								COPY(ARG(1), ARG(8));
								LOAD_SYMBOL(SYMBOL(Slisp, 18), ARG(9));	/* CHARACTER */
								Ferror(ARG(7), 3);
							}
							rt_char_upcase(ARG(7));
							token_push_extend(ARG(7));
							COPY(ARG(0), ARG(7));
							COPY(ARG(7), ARG(8));
							LOAD_NIL(ARG(9));
							LOAD_NIL(ARG(10));
							LOAD_NIL(ARG(11));
							read_char1(ARG(8));
							COPY(ARG(8), ARG(1));
						}
						else
						{
							LOAD_SMSTR((CL_FORM *)&Kread_token[8], ARG(7));	/* illegal Character */
							Ferror(ARG(7), 1);
						}
					}
				}
			}
		}
		if(CL_TRUEP(ARG(1)))
		{
		}
		else
		{
			goto RETURN2;
		}
		if(CL_TRUEP(SYMVAL(Slisp, 447)))	/* *READTABLE-UNCHANGED* */
		{
			COPY(ARG(1), ARG(7));	/* *READTABLE-SYNTAX* */
			if(CL_CHARP(ARG(7)))
			{
				COPY(ARG(7), ARG(8));
			}
			else
			{
				COPY(SYMVAL(Slisp, 58), ARG(8));	/* WRONG_TYPE */
				COPY(ARG(7), ARG(9));
				LOAD_SYMBOL(SYMBOL(Slisp, 18), ARG(10));	/* CHARACTER */
				Ferror(ARG(8), 3);
			}
			rt_char_code(ARG(8));
			COPY(ARG(8), ARG(7));
			COPY(OFFSET(AR_BASE(GET_FORM(SYMVAL(Slisp, 450))), GET_FIXNUM(ARG(7))), ARG(2));
		}
		else
		{
			COPY(SYMVAL(Slisp, 449), ARG(7));	/* *READTABLE* */
			readtable_syntax(ARG(7));
			COPY(ARG(1), ARG(8));
			if(CL_CHARP(ARG(8)))
			{
				COPY(ARG(8), ARG(9));
			}
			else
			{
				COPY(SYMVAL(Slisp, 58), ARG(9));	/* WRONG_TYPE */
				COPY(ARG(8), ARG(10));
				LOAD_SYMBOL(SYMBOL(Slisp, 18), ARG(11));	/* CHARACTER */
				Ferror(ARG(9), 3);
			}
			rt_char_code(ARG(9));
			COPY(ARG(9), ARG(8));
			COPY(ARG(7), ARG(9));
			LOAD_BOOL(CL_SMVECP(ARG(9)), ARG(10));
			if(CL_TRUEP(ARG(10)))
			{
				goto THEN6;
			}
			else
			{
				COPY(ARG(9), ARG(11));
				COPY(ARG(11), ARG(12));
				LOAD_SYMBOL(SYMBOL(Slisp, 150), ARG(13));	/* COMPLEX-VECTOR */
				rt_struct_typep(ARG(12));
			}
			if(CL_TRUEP(ARG(12)))
			{
				THEN6:;
			}
			else
			{
				COPY(SYMVAL(Slisp, 58), ARG(9));	/* WRONG_TYPE */
				COPY(ARG(7), ARG(10));
				LOAD_SYMBOL(SYMBOL(Slisp, 47), ARG(11));	/* VECTOR */
				Ferror(ARG(9), 3);
			}
			COPY(ARG(7), ARG(9));
			COPY(ARG(8), ARG(10));
			Frow_major_aref(ARG(9));
			COPY(ARG(9), ARG(2));
		}
	}
	goto M1_1;
	RETURN2:;
	if(CL_TRUEP(SYMVAL(Slisp, 408)))	/* *READ-SUPPRESS* */
	{
		LOAD_NIL(ARG(0));
		goto RETURN1;
	}
	LOAD_SMALLFIXNUM(0, ARG(7));
	COPY(SYMVAL(Slisp, 440), ARG(8));	/* *FILL-POINTER* */
	LOAD_SMALLFIXNUM(1, ARG(9));
	LOAD_SMALLFIXNUM(0, ARG(10));
	GEN_FLOAT(ARG(11), 0.0, ARG(11));
	COPY(SYMVAL(Slisp, 407), ARG(12));	/* *READ-BASE* */
	LOAD_NIL(ARG(13));
	if(CL_TRUEP(ARG(4)))
	{
		goto THEN7;
	}
	else
	{
	}
	if(CL_TRUEP(ARG(5)))
	{
		THEN7:;
		goto M4_5;
	}
	COPY(SYMVAL(Slisp, 439), ARG(14));	/* *TOKEN* */
	COPY(ARG(8), ARG(15));
	F1minus(ARG(15));
	pvref(ARG(14));
	if(CL_CHARP(ARG(14)) && GET_CHAR(ARG(14)) == '.')
	{
		LOAD_SMALLFIXNUM(10, ARG(12));
	}
	display[0] = ARG(0);
	Z145_read_sign(ARG(14), display);
	COPY(ARG(14), ARG(9));
	display[0] = ARG(0);
	Z144_read_digits(ARG(14), display);
	COPY(ARG(14), ARG(10));
	if(CL_TRUEP(ARG(10)))
	{
	}
	else
	{
		goto M4_1;
	}
	if(EQL(ARG(7), ARG(8)))
	{
		COPY(ARG(9), ARG(0));
		COPY(ARG(10), ARG(1));
		Fmult(ARG(0), 2);
		goto RETURN1;
	}
	COPY(SYMVAL(Slisp, 439), ARG(13));	/* *TOKEN* */
	COPY(ARG(7), ARG(14));
	pvref(ARG(13));
	COPY(ARG(7), ARG(14));
	F1plus(ARG(14));
	COPY(ARG(14), ARG(7));
	if(CL_CHARP(ARG(13)) && GET_CHAR(ARG(13)) == '.')
	{
		if(EQL(ARG(7), ARG(8)))
		{
			COPY(ARG(9), ARG(0));
			COPY(ARG(10), ARG(1));
			Fmult(ARG(0), 2);
			goto RETURN1;
		}
		LOAD_SMALLFIXNUM(10, ARG(15));
		if(EQL(ARG(12), ARG(15)))
		{
		}
		else
		{
			LOAD_SMALLFIXNUM(10, ARG(12));
			LOAD_SMALLFIXNUM(0, ARG(7));
			display[0] = ARG(0);
			Z145_read_sign(ARG(14), display);
			COPY(ARG(14), ARG(9));
			display[0] = ARG(0);
			Z144_read_digits(ARG(14), display);
			COPY(ARG(14), ARG(10));
			COPY(ARG(7), ARG(14));
			F1plus(ARG(14));
			COPY(ARG(14), ARG(7));
		}
		GEN_FLOAT(ARG(14), 10.0, ARG(14));
		display[0] = ARG(0);
		Z146_read_float2(ARG(14), display);
		COPY(ARG(14), ARG(11));
		goto M4_2;
	}
	else
	{
		if(CL_CHARP(ARG(13)) && GET_CHAR(ARG(13)) == '/')
		{
			goto M4_4;
		}
		else
		{
			goto M4_3;
		}
	}
	M4_1:;
	LOAD_SMALLFIXNUM(0, ARG(10));
	if(EQL(ARG(7), ARG(8)))
	{
		goto M4_5;
	}
	COPY(SYMVAL(Slisp, 439), ARG(13));	/* *TOKEN* */
	COPY(ARG(7), ARG(14));
	pvref(ARG(13));
	COPY(ARG(7), ARG(14));
	F1plus(ARG(14));
	COPY(ARG(14), ARG(7));
	if(CL_CHARP(ARG(13)) && GET_CHAR(ARG(13)) == '.')
	{
	}
	else
	{
		goto M4_5;
	}
	if(EQL(ARG(7), ARG(8)))
	{
		goto M4_5;
	}
	COPY(SYMVAL(Slisp, 439), ARG(13));	/* *TOKEN* */
	COPY(ARG(7), ARG(14));
	pvref(ARG(13));
	COPY(ARG(7), ARG(14));
	F1plus(ARG(14));
	COPY(ARG(14), ARG(7));
	COPY(ARG(13), ARG(14));
	LOAD_SMALLFIXNUM(10, ARG(15));
	COPY(ARG(14), ARG(16));
	COPY(ARG(15), ARG(17));
	digit_char_p1(ARG(16));
	COPY(ARG(16), ARG(11));
	if(CL_TRUEP(ARG(11)))
	{
	}
	else
	{
		goto M4_5;
	}
	COPY(ARG(11), ARG(14));
	GEN_FLOAT(ARG(15), 10.0, ARG(15));
	Fdiv(ARG(14), 2);
	COPY(ARG(14), ARG(11));
	GEN_FLOAT(ARG(14), 100.0, ARG(14));
	display[0] = ARG(0);
	Z146_read_float2(ARG(14), display);
	COPY(ARG(14), ARG(11));
	M4_2:;
	if(EQL(ARG(7), ARG(8)))
	{
		COPY(ARG(9), ARG(0));
		COPY(ARG(10), ARG(1));
		COPY(ARG(11), ARG(2));
		Fplus(ARG(1), 2);
		Fmult(ARG(0), 2);
		goto RETURN1;
	}
	COPY(SYMVAL(Slisp, 439), ARG(13));	/* *TOKEN* */
	COPY(ARG(7), ARG(14));
	pvref(ARG(13));
	COPY(ARG(7), ARG(14));
	F1plus(ARG(14));
	COPY(ARG(14), ARG(7));
	M4_3:;
	if(CL_CHARP(ARG(13)))
	{
		COPY(ARG(13), ARG(14));
	}
	else
	{
		COPY(SYMVAL(Slisp, 58), ARG(14));	/* WRONG_TYPE */
		COPY(ARG(13), ARG(15));
		LOAD_SYMBOL(SYMBOL(Slisp, 18), ARG(16));	/* CHARACTER */
		Ferror(ARG(14), 3);
	}
	rt_char_downcase(ARG(14));
	LOAD_CONS((CL_FORM *)&Kread_token[10], ARG(15));
	COPY(ARG(14), ARG(16));
	COPY(ARG(15), ARG(17));
	LOAD_NIL(ARG(18));
	LOAD_NIL(ARG(19));
	LOAD_NIL(ARG(20));
	member1(ARG(16));
	if(CL_TRUEP(ARG(16)))
	{
	}
	else
	{
		goto M4_5;
	}
	if(EQL(ARG(7), ARG(8)))
	{
		goto M4_5;
	}
	LOAD_SMALLFIXNUM(10, ARG(12));
	display[0] = ARG(0);
	Z145_read_sign(ARG(14), display);
	display[0] = ARG(0);
	Z144_read_digits(ARG(15), display);
	if(CL_TRUEP(ARG(15)))
	{
		LOAD_NIL(ARG(16));
	}
	else
	{
		LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(16));	/* T */
	}
	if(CL_TRUEP(ARG(16)))
	{
		goto THEN8;
	}
	else
	{
		COPY(ARG(7), ARG(17));
		COPY(ARG(8), ARG(18));
		Flt(ARG(17), 2);
	}
	if(CL_TRUEP(ARG(17)))
	{
		THEN8:;
		goto M4_5;
	}
	COPY(ARG(9), ARG(16));
	COPY(ARG(10), ARG(17));
	COPY(ARG(11), ARG(18));
	Fplus(ARG(17), 2);
	LOAD_SMALLFIXNUM(10, ARG(18));
	COPY(ARG(14), ARG(19));
	COPY(ARG(15), ARG(20));
	Fmult(ARG(19), 2);
	COPY(ARG(19), ARG(20));
	Fminusp(ARG(20));
	if(CL_TRUEP(ARG(20)))
	{
		LOAD_SMALLFIXNUM(1, ARG(20));
		COPY(ARG(18), ARG(21));
		COPY(ARG(19), ARG(22));
		Fminus(ARG(22), 1);
		Fexpt(ARG(21));
		Fdiv(ARG(20), 2);
		COPY(ARG(20), ARG(18));
	}
	else
	{
		rt_expt(ARG(18));
	}
	Fmult(ARG(16), 3);
	COPY(ARG(16), ARG(0));
	goto RETURN1;
	M4_4:;
	display[0] = ARG(0);
	Z144_read_digits(ARG(14), display);
	COPY(ARG(14), ARG(11));
	if(CL_TRUEP(ARG(11)))
	{
		LOAD_NIL(ARG(14));
	}
	else
	{
		LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(14));	/* T */
	}
	if(CL_TRUEP(ARG(14)))
	{
		goto THEN9;
	}
	else
	{
		COPY(ARG(7), ARG(15));
		COPY(ARG(8), ARG(16));
		Flt(ARG(15), 2);
	}
	if(CL_TRUEP(ARG(15)))
	{
		THEN9:;
		goto M4_5;
	}
	COPY(ARG(10), ARG(14));
	COPY(ARG(11), ARG(15));
	Fdiv(ARG(14), 2);
	LOAD_SMSTR((CL_FORM *)&Kread_token[25], ARG(15));	/* ratio ~a/~a has been read as ~s */
	COPY(ARG(10), ARG(16));
	COPY(ARG(11), ARG(17));
	COPY(ARG(14), ARG(18));
	Fwarn(ARG(15), 4);
	mv_count = 1;
	COPY(ARG(14), ARG(0));
	goto RETURN1;
	M4_5:;
	if(CL_TRUEP(ARG(5)))
	{
		if(CL_TRUEP(SYMVAL(Slisp, 443)))	/* *UNINTERNED* */
		{
			LOAD_SMSTR((CL_FORM *)&Kread_token[27], ARG(14));	/* token may not contain colons */
			Ferror(ARG(14), 1);
		}
		else
		{
			LOAD_SMALLFIXNUM(0, ARG(15));
			if(EQL(ARG(6), ARG(15)))
			{
				LOAD_SMALLFIXNUM(1, ARG(15));
				if(EQL(ARG(5), ARG(15)))
				{
				}
				else
				{
					LOAD_SMSTR((CL_FORM *)&Kread_token[29], ARG(14));	/* illegal token ~S */
					get_token_string(ARG(15));
					Ferror(ARG(14), 2);
				}
				LOAD_SMALLFIXNUM(1, ARG(14));
				COPY(SYMVAL(Slisp, 440), ARG(15));	/* *FILL-POINTER* */
				token_subseq(ARG(14));
				COPY(ARG(14), ARG(0));
				COPY(SYMVAL(Slisp, 380), ARG(1));	/* *KEYWORD-PACKAGE* */
				intern1(ARG(0));
				mv_count = 1;
				goto RETURN1;
			}
			else
			{
				LOAD_SMALLFIXNUM(0, ARG(14));
				COPY(ARG(6), ARG(15));
				token_subseq(ARG(14));
				COPY(ARG(14), ARG(15));
				Ffind_package(ARG(15));
				COPY(ARG(6), ARG(16));
				COPY(ARG(5), ARG(17));
				Fplus(ARG(16), 2);
				COPY(SYMVAL(Slisp, 440), ARG(17));	/* *FILL-POINTER* */
				token_subseq(ARG(16));
				if(CL_TRUEP(ARG(15)))
				{
				}
				else
				{
					LOAD_SMSTR((CL_FORM *)&Kread_token[31], ARG(17));	/* illegal package-name ~S */
					COPY(ARG(14), ARG(18));
					Ferror(ARG(17), 2);
				}
				LOAD_SMALLFIXNUM(2, ARG(18));
				if(EQL(ARG(5), ARG(18)))
				{
					COPY(ARG(16), ARG(0));
					COPY(ARG(15), ARG(1));
					intern1(ARG(0));
					mv_count = 1;
					goto RETURN1;
				}
				else
				{
					LOAD_SMALLFIXNUM(1, ARG(18));
					if(EQL(ARG(5), ARG(18)))
					{
						COPY(ARG(16), ARG(17));
						COPY(ARG(15), ARG(18));
						find_symbol1(ARG(17));
						COPY(&mv_buf[0], ARG(18));
						{
							int nargs;
							nargs = 2;
							mv_count = 1;
							{
								switch(nargs)
								{
									case 0:
									LOAD_NIL(ARG(17));
									case 1:
									LOAD_NIL(ARG(18));
									nargs = 2;
								}
								if(CL_SYMBOLP(ARG(18)) && GET_SYMBOL(ARG(18)) == SYMBOL(Slisp, 375))	/* EXTERNAL */
								{
								}
								else
								{
									LOAD_SMSTR((CL_FORM *)&Kread_token[33], ARG(19));	/* can't find the external symbol ~S in ~S */
									COPY(ARG(16), ARG(20));
									COPY(ARG(15), ARG(21));
									Ferror(ARG(19), 3);
								}
								COPY(ARG(17), ARG(0));
								goto RETURN1;
							}
						}
					}
					else
					{
						LOAD_SMSTR((CL_FORM *)&Kread_token[35], ARG(17));	/* illegal Token ~S */
						get_token_string(ARG(18));
						Ferror(ARG(17), 2);
					}
				}
			}
		}
	}
	else
	{
		if(CL_TRUEP(ARG(4)))
		{
		}
		else
		{
			LOAD_SMALLFIXNUM(1, ARG(15));
			if(EQL(ARG(8), ARG(15)))
			{
				COPY(SYMVAL(Slisp, 439), ARG(14));	/* *TOKEN* */
				LOAD_SMALLFIXNUM(0, ARG(15));
				pvref(ARG(14));
				if(CL_CHARP(ARG(14)) && GET_CHAR(ARG(14)) == '.')
				{
				}	/* *DOT-FLAG* */
				else
				{
					goto ELSE10;
				}
			}
			else
			{
				goto ELSE10;
			}
			if(CL_TRUEP(SYMVAL(Slisp, 445)))
			{
				LOAD_NIL(SYMVAL(Slisp, 445));	/* *DOT-FLAG* */
				LOAD_NIL(ARG(0));
				goto RETURN1;
			}
			ELSE10:;
			LOAD_SMALLFIXNUM(0, ARG(14));
			M5_1:;
			COPY(ARG(14), ARG(15));
			COPY(ARG(8), ARG(16));
			Fge(ARG(15), 2);
			if(CL_TRUEP(ARG(15)))
			{
				LOAD_SMSTR((CL_FORM *)&Kread_token[37], ARG(15));	/* illegal token ~S */
				get_token_string(ARG(16));
				Ferror(ARG(15), 2);
				goto RETURN5;
			}
			COPY(SYMVAL(Slisp, 439), ARG(15));	/* *TOKEN* */
			COPY(ARG(14), ARG(16));
			pvref(ARG(15));
			if(CL_CHARP(ARG(15)) && GET_CHAR(ARG(15)) == '.')
			{
			}
			else
			{
				goto RETURN5;
			}
			F1plus(ARG(14));
			goto M5_1;
			RETURN5:;
		}
		if(CL_TRUEP(SYMVAL(Slisp, 443)))	/* *UNINTERNED* */
		{
			get_token_string(ARG(0));
			Fmake_symbol(ARG(0));
		}
		else
		{
			get_token_string(ARG(14));
			COPY(ARG(14), ARG(0));
			COPY(SYMVAL(Slisp, 343), ARG(1));	/* *PACKAGE* */
			intern1(ARG(0));
			mv_count = 1;
		}
		goto RETURN1;
	}
	LOAD_NIL(ARG(0));
	RETURN1:;
}

static void Z144_read_digits(CL_FORM *base, CL_FORM *display[])
{
	LOAD_NIL(ARG(0));
	LOAD_NIL(ARG(1));
	if(EQL(&display[0][7], &display[0][8]))
	{
		LOAD_NIL(ARG(0));
	}
	else
	{
		COPY(SYMVAL(Slisp, 439), ARG(2));	/* *TOKEN* */
		COPY(&display[0][7], ARG(3));
		pvref(ARG(2));
		COPY(&display[0][12], ARG(3));
		COPY(ARG(2), ARG(4));
		COPY(ARG(3), ARG(5));
		digit_char_p1(ARG(4));
		COPY(ARG(4), ARG(0));
		if(CL_TRUEP(ARG(0)))
		{
			COPY(&display[0][7], ARG(2));
			F1plus(ARG(2));
			COPY(ARG(2), &display[0][7]);
			M1_1:;
			if(EQL(&display[0][7], &display[0][8]))
			{
				goto RETURN1;
			}
			COPY(SYMVAL(Slisp, 439), ARG(2));	/* *TOKEN* */
			COPY(&display[0][7], ARG(3));
			pvref(ARG(2));
			COPY(&display[0][12], ARG(3));
			COPY(ARG(2), ARG(1));
			COPY(ARG(3), ARG(2));
			digit_char_p1(ARG(1));
			if(CL_TRUEP(ARG(1)))
			{
			}
			else
			{
				goto RETURN1;
			}
			COPY(&display[0][7], ARG(2));
			F1plus(ARG(2));
			COPY(ARG(2), &display[0][7]);
			COPY(&display[0][12], ARG(2));
			COPY(ARG(0), ARG(3));
			Fmult(ARG(2), 2);
			COPY(ARG(1), ARG(3));
			Fplus(ARG(2), 2);
			COPY(ARG(2), ARG(0));
			goto M1_1;
			RETURN1:;
		}
		else
		{
			LOAD_NIL(ARG(0));
		}
	}
}

static void Z145_read_sign(CL_FORM *base, CL_FORM *display[])
{
	if(EQL(&display[0][7], &display[0][8]))
	{
		LOAD_SMALLFIXNUM(1, ARG(0));
	}
	else
	{
		COPY(SYMVAL(Slisp, 439), ARG(0));	/* *TOKEN* */
		COPY(&display[0][7], ARG(1));
		pvref(ARG(0));
		if(CL_CHARP(ARG(0)) && GET_CHAR(ARG(0)) == '-')
		{
			COPY(&display[0][7], ARG(1));
			F1plus(ARG(1));
			COPY(ARG(1), &display[0][7]);
			LOAD_SMALLFIXNUM(-1, ARG(0));
		}
		else
		{
			if(CL_CHARP(ARG(0)) && GET_CHAR(ARG(0)) == '+')
			{
				COPY(&display[0][7], ARG(1));
				F1plus(ARG(1));
				COPY(ARG(1), &display[0][7]);
				LOAD_SMALLFIXNUM(1, ARG(0));
			}
			else
			{
				LOAD_SMALLFIXNUM(1, ARG(0));
			}
		}
	}
}

static void Z146_read_float2(CL_FORM *base, CL_FORM *display[])
{
	LOAD_NIL(ARG(1));
	M1_1:;
	if(EQL(&display[0][7], &display[0][8]))
	{
		goto RETURN1;
	}
	COPY(SYMVAL(Slisp, 439), ARG(2));	/* *TOKEN* */
	COPY(&display[0][7], ARG(3));
	pvref(ARG(2));
	COPY(ARG(2), &display[0][13]);
	LOAD_SMALLFIXNUM(10, ARG(3));
	COPY(ARG(2), ARG(1));
	COPY(ARG(3), ARG(2));
	digit_char_p1(ARG(1));
	if(CL_TRUEP(ARG(1)))
	{
	}
	else
	{
		goto RETURN1;
	}
	COPY(&display[0][7], ARG(2));
	F1plus(ARG(2));
	COPY(ARG(2), &display[0][7]);
	COPY(&display[0][11], ARG(2));
	COPY(ARG(1), ARG(3));
	COPY(ARG(0), ARG(4));
	Fdiv(ARG(3), 2);
	Fplus(ARG(2), 2);
	COPY(ARG(2), &display[0][11]);
	COPY(ARG(0), ARG(2));
	GEN_FLOAT(ARG(3), 10.0, ARG(3));
	Fmult(ARG(2), 2);
	COPY(ARG(2), ARG(0));
	goto M1_1;
	RETURN1:;
	COPY(&display[0][11], ARG(0));
}
