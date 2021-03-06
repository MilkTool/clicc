/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

static void Z162_sort(CL_FORM *base, CL_FORM *display[]);

void list_merge_sort(CL_FORM *base)
{
	CL_FORM *display[1];
	COPY(ARG(0), ARG(3));
	display[0] = ARG(0);
	Z162_sort(ARG(3), display);
	COPY(ARG(3), ARG(0));
}

static void Z162_sort(CL_FORM *base, CL_FORM *display[])
{
	COPY(ARG(0), ARG(1));
	Flength(ARG(1));
	LOAD_NIL(ARG(2));
	LOAD_NIL(ARG(3));
	LOAD_NIL(ARG(4));
	LOAD_NIL(ARG(5));
	LOAD_NIL(ARG(6));
	LOAD_NIL(ARG(7));
	COPY(ARG(1), ARG(8));
	LOAD_SMALLFIXNUM(2, ARG(9));
	Flt(ARG(8), 2);
	if(CL_TRUEP(ARG(8)))
	{
	}
	else
	{
		COPY(ARG(1), ARG(8));
		LOAD_SMALLFIXNUM(2, ARG(9));
		Fnumeql(ARG(8), 2);
		if(CL_TRUEP(ARG(8)))
		{
			if(CL_TRUEP(&display[0][2]))
			{
				COPY(&display[0][2], ARG(8));
				COPY(ARG(0), ARG(9));
				if(CL_CONSP(ARG(9)))
				{
					COPY(GET_CAR(ARG(9)), ARG(9));
				}
				else
				{
					if(CL_TRUEP(ARG(9)))
					{
						LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(10));	/* ~a is not a list */
						COPY(ARG(9), ARG(11));
						Ferror(ARG(10), 2);
					}
					else
					{
						LOAD_NIL(ARG(9));
					}
				}
				Ffuncall(ARG(8), 2);
				mv_count = 1;
				COPY(ARG(8), ARG(6));
			}
			else
			{
				COPY(ARG(0), ARG(8));
				if(CL_CONSP(ARG(8)))
				{
					COPY(GET_CAR(ARG(8)), ARG(6));
				}
				else
				{
					if(CL_TRUEP(ARG(8)))
					{
						LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(9));	/* ~a is not a list */
						COPY(ARG(8), ARG(10));
						Ferror(ARG(9), 2);
					}
					else
					{
						LOAD_NIL(ARG(6));
					}
				}
			}
			if(CL_TRUEP(&display[0][2]))
			{
				COPY(&display[0][2], ARG(8));
				COPY(ARG(0), ARG(9));
				COPY(ARG(9), ARG(10));
				if(CL_CONSP(ARG(10)))
				{
					COPY(GET_CDR(ARG(10)), ARG(10));
				}
				else
				{
					if(CL_TRUEP(ARG(10)))
					{
						LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(11));	/* ~a is not a list */
						COPY(ARG(10), ARG(12));
						Ferror(ARG(11), 2);
					}
					else
					{
						LOAD_NIL(ARG(10));
					}
				}
				if(CL_CONSP(ARG(10)))
				{
					COPY(GET_CAR(ARG(10)), ARG(9));
				}
				else
				{
					if(CL_TRUEP(ARG(10)))
					{
						LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(9));	/* ~a is not a list */
						Ferror(ARG(9), 2);
					}
					else
					{
						LOAD_NIL(ARG(9));
					}
				}
				Ffuncall(ARG(8), 2);
				mv_count = 1;
				COPY(ARG(8), ARG(7));
			}
			else
			{
				COPY(ARG(0), ARG(8));
				COPY(ARG(8), ARG(9));
				if(CL_CONSP(ARG(9)))
				{
					COPY(GET_CDR(ARG(9)), ARG(9));
				}
				else
				{
					if(CL_TRUEP(ARG(9)))
					{
						LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(10));	/* ~a is not a list */
						COPY(ARG(9), ARG(11));
						Ferror(ARG(10), 2);
					}
					else
					{
						LOAD_NIL(ARG(9));
					}
				}
				if(CL_CONSP(ARG(9)))
				{
					COPY(GET_CAR(ARG(9)), ARG(7));
				}
				else
				{
					if(CL_TRUEP(ARG(9)))
					{
						LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(7));	/* ~a is not a list */
						COPY(ARG(9), ARG(8));
						Ferror(ARG(7), 2);
					}
					else
					{
						LOAD_NIL(ARG(7));
					}
				}
			}
			COPY(&display[0][1], ARG(8));
			COPY(ARG(6), ARG(9));
			COPY(ARG(7), ARG(10));
			Ffuncall(ARG(8), 3);
			mv_count = 1;
			if(CL_TRUEP(ARG(8)))
			{
				goto THEN1;
			}
			else
			{
				COPY(&display[0][1], ARG(9));
				COPY(ARG(7), ARG(10));
				COPY(ARG(6), ARG(11));
				Ffuncall(ARG(9), 3);
				mv_count = 1;
				if(CL_TRUEP(ARG(9)))
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
			}
			goto ENDIF3;
			{
				ELSE2:;
				if(CL_TRUEP(ARG(0)))
				{
					if(CL_CONSP(ARG(0)))
					{
						list_nreverse(ARG(0));
					}
					else
					{
						vector_nreverse(ARG(0));
					}
				}
				else
				{
					LOAD_NIL(ARG(0));
				}
			}
			ENDIF3:;
		}
		else
		{
			COPY(ARG(1), ARG(8));
			LOAD_SMALLFIXNUM(2, ARG(9));
			COPY(ARG(8), ARG(10));
			COPY(ARG(9), ARG(11));
			COPY(ARG(10), ARG(12));
			COPY(ARG(11), ARG(13));
			LOAD_SMALLFIXNUM(0, ARG(14));
			rt_convert_to_int(ARG(12));
			mv_count = 1;
			COPY(ARG(12), ARG(1));
			LOAD_SMALLFIXNUM(1, ARG(8));
			COPY(ARG(0), ARG(9));
			M1_1:;
			COPY(ARG(8), ARG(10));
			COPY(ARG(1), ARG(11));
			Fge(ARG(10), 2);
			if(CL_TRUEP(ARG(10)))
			{
				COPY(ARG(0), ARG(2));
				COPY(ARG(9), ARG(10));
				if(CL_CONSP(ARG(10)))
				{
					COPY(GET_CDR(ARG(10)), ARG(3));
				}
				else
				{
					if(CL_TRUEP(ARG(10)))
					{
						LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(11));	/* ~a is not a list */
						COPY(ARG(10), ARG(12));
						Ferror(ARG(11), 2);
					}
					else
					{
						LOAD_NIL(ARG(3));
					}
				}
				if(CL_CONSP(ARG(9)))
				{
					LOAD_NIL(ARG(11));
					COPY(ARG(11), GET_CDR(ARG(9)));
				}
				else
				{
					LOAD_SMSTR((CL_FORM *)&KClisp[235], ARG(10));	/* ~a is not a cons */
					COPY(ARG(9), ARG(11));
					Ferror(ARG(10), 2);
				}
				goto RETURN1;
			}
			COPY(ARG(8), ARG(10));
			F1plus(ARG(10));
			COPY(ARG(9), ARG(11));
			if(CL_CONSP(ARG(11)))
			{
				COPY(GET_CDR(ARG(11)), ARG(9));
			}
			else
			{
				if(CL_TRUEP(ARG(11)))
				{
					LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(12));	/* ~a is not a list */
					COPY(ARG(11), ARG(13));
					Ferror(ARG(12), 2);
				}
				else
				{
					LOAD_NIL(ARG(9));
				}
			}
			COPY(ARG(10), ARG(8));
			goto M1_1;
			RETURN1:;
			COPY(ARG(2), ARG(8));
			Z162_sort(ARG(8), display);
			COPY(ARG(8), ARG(2));
			COPY(ARG(3), ARG(8));
			Z162_sort(ARG(8), display);
			COPY(ARG(8), ARG(3));
			if(CL_TRUEP(ARG(2)))
			{
				if(CL_CONSP(ARG(2)))
				{
					goto ELSE4;
				}
				else
				{
					LOAD_SMSTR((CL_FORM *)&KClisp[233], ARG(8));	/* ~a is not a list */
					COPY(ARG(2), ARG(9));
					Ferror(ARG(8), 2);
				}
			}
			else
			{
				goto THEN5;
			}
			{
				THEN5:;
				COPY(ARG(3), ARG(0));
			}
			goto ENDIF6;
			{
				ELSE4:;
				if(CL_TRUEP(ARG(3)))
				{
					if(CL_CONSP(ARG(3)))
					{
						goto ELSE7;
					}
					else
					{
						LOAD_SMSTR((CL_FORM *)&KClisp[233], ARG(8));	/* ~a is not a list */
						COPY(ARG(3), ARG(9));
						Ferror(ARG(8), 2);
					}
				}
				else
				{
					goto THEN8;
				}
				{
					THEN8:;
					COPY(ARG(2), ARG(0));
				}
				goto ENDIF9;
				{
					ELSE7:;
					LOAD_NIL(ARG(8));
					LOAD_NIL(ARG(9));
					ALLOC_CONS(ARG(10), ARG(8), ARG(9), ARG(4));
					COPY(ARG(4), ARG(5));
					if(CL_TRUEP(&display[0][2]))
					{
						COPY(&display[0][2], ARG(8));
						COPY(ARG(2), ARG(9));
						if(CL_CONSP(ARG(9)))
						{
							COPY(GET_CAR(ARG(9)), ARG(9));
						}
						else
						{
							if(CL_TRUEP(ARG(9)))
							{
								LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(10));	/* ~a is not a list */
								COPY(ARG(9), ARG(11));
								Ferror(ARG(10), 2);
							}
							else
							{
								LOAD_NIL(ARG(9));
							}
						}
						Ffuncall(ARG(8), 2);
						mv_count = 1;
						COPY(ARG(8), ARG(6));
					}
					else
					{
						COPY(ARG(2), ARG(8));
						if(CL_CONSP(ARG(8)))
						{
							COPY(GET_CAR(ARG(8)), ARG(6));
						}
						else
						{
							if(CL_TRUEP(ARG(8)))
							{
								LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(9));	/* ~a is not a list */
								COPY(ARG(8), ARG(10));
								Ferror(ARG(9), 2);
							}
							else
							{
								LOAD_NIL(ARG(6));
							}
						}
					}
					if(CL_TRUEP(&display[0][2]))
					{
						COPY(&display[0][2], ARG(8));
						COPY(ARG(3), ARG(9));
						if(CL_CONSP(ARG(9)))
						{
							COPY(GET_CAR(ARG(9)), ARG(9));
						}
						else
						{
							if(CL_TRUEP(ARG(9)))
							{
								LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(10));	/* ~a is not a list */
								COPY(ARG(9), ARG(11));
								Ferror(ARG(10), 2);
							}
							else
							{
								LOAD_NIL(ARG(9));
							}
						}
						Ffuncall(ARG(8), 2);
						mv_count = 1;
						COPY(ARG(8), ARG(7));
					}
					else
					{
						COPY(ARG(3), ARG(8));
						if(CL_CONSP(ARG(8)))
						{
							COPY(GET_CAR(ARG(8)), ARG(7));
						}
						else
						{
							if(CL_TRUEP(ARG(8)))
							{
								LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(7));	/* ~a is not a list */
								Ferror(ARG(7), 2);
							}
							else
							{
								LOAD_NIL(ARG(7));
							}
						}
					}
					M2_1:;
					COPY(&display[0][1], ARG(8));
					COPY(ARG(6), ARG(9));
					COPY(ARG(7), ARG(10));
					Ffuncall(ARG(8), 3);
					mv_count = 1;
					if(CL_TRUEP(ARG(8)))
					{
						goto THEN10;
					}
					else
					{
						COPY(&display[0][1], ARG(9));
						COPY(ARG(7), ARG(10));
						COPY(ARG(6), ARG(11));
						Ffuncall(ARG(9), 3);
						mv_count = 1;
						if(CL_TRUEP(ARG(9)))
						{
							goto ELSE11;
						}
						else
						{
							goto THEN10;
						}
					}
					{
						THEN10:;
						if(CL_CONSP(ARG(5)))
						{
							COPY(ARG(2), GET_CDR(ARG(5)));
						}
						else
						{
							LOAD_SMSTR((CL_FORM *)&KClisp[235], ARG(8));	/* ~a is not a cons */
							COPY(ARG(5), ARG(9));
							Ferror(ARG(8), 2);
						}
						COPY(ARG(5), ARG(8));
						if(CL_CONSP(ARG(8)))
						{
							COPY(GET_CDR(ARG(8)), ARG(5));
						}
						else
						{
							LOAD_NIL(ARG(5));
						}
						COPY(ARG(2), ARG(8));
						if(CL_CONSP(ARG(8)))
						{
							COPY(GET_CDR(ARG(8)), ARG(2));
						}
						else
						{
							if(CL_TRUEP(ARG(8)))
							{
								LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(9));	/* ~a is not a list */
								COPY(ARG(8), ARG(10));
								Ferror(ARG(9), 2);
							}
							else
							{
								LOAD_NIL(ARG(2));
							}
						}
						if(CL_TRUEP(ARG(2)))
						{
							if(CL_CONSP(ARG(2)))
							{
								goto ELSE12;
							}
							else
							{
								LOAD_SMSTR((CL_FORM *)&KClisp[233], ARG(8));	/* ~a is not a list */
								COPY(ARG(2), ARG(9));
								Ferror(ARG(8), 2);
							}
						}
						else
						{
							goto THEN13;
						}
						{
							THEN13:;
							if(CL_CONSP(ARG(5)))
							{
								COPY(ARG(3), GET_CDR(ARG(5)));
							}
							else
							{
								LOAD_SMSTR((CL_FORM *)&KClisp[235], ARG(8));	/* ~a is not a cons */
								COPY(ARG(5), ARG(9));
								Ferror(ARG(8), 2);
							}
							COPY(GET_CDR(ARG(4)), ARG(0));
							goto RETURN2;
						}
						ELSE12:;
						if(CL_TRUEP(&display[0][2]))
						{
							COPY(&display[0][2], ARG(8));
							COPY(ARG(2), ARG(9));
							if(CL_CONSP(ARG(9)))
							{
								COPY(GET_CAR(ARG(9)), ARG(9));
							}
							else
							{
								if(CL_TRUEP(ARG(9)))
								{
									LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(10));	/* ~a is not a list */
									COPY(ARG(9), ARG(11));
									Ferror(ARG(10), 2);
								}
								else
								{
									LOAD_NIL(ARG(9));
								}
							}
							Ffuncall(ARG(8), 2);
							mv_count = 1;
							COPY(ARG(8), ARG(6));
						}
						else
						{
							COPY(ARG(2), ARG(8));
							if(CL_CONSP(ARG(8)))
							{
								COPY(GET_CAR(ARG(8)), ARG(6));
							}
							else
							{
								if(CL_TRUEP(ARG(8)))
								{
									LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(9));	/* ~a is not a list */
									COPY(ARG(8), ARG(10));
									Ferror(ARG(9), 2);
								}
								else
								{
									LOAD_NIL(ARG(6));
								}
							}
						}
					}
					goto ENDIF14;
					{
						ELSE11:;
						if(CL_CONSP(ARG(5)))
						{
							COPY(ARG(3), GET_CDR(ARG(5)));
						}
						else
						{
							LOAD_SMSTR((CL_FORM *)&KClisp[235], ARG(8));	/* ~a is not a cons */
							COPY(ARG(5), ARG(9));
							Ferror(ARG(8), 2);
						}
						COPY(ARG(5), ARG(8));
						if(CL_CONSP(ARG(8)))
						{
							COPY(GET_CDR(ARG(8)), ARG(5));
						}
						else
						{
							LOAD_NIL(ARG(5));
						}
						COPY(ARG(3), ARG(8));
						if(CL_CONSP(ARG(8)))
						{
							COPY(GET_CDR(ARG(8)), ARG(3));
						}
						else
						{
							if(CL_TRUEP(ARG(8)))
							{
								LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(9));	/* ~a is not a list */
								COPY(ARG(8), ARG(10));
								Ferror(ARG(9), 2);
							}
							else
							{
								LOAD_NIL(ARG(3));
							}
						}
						if(CL_TRUEP(ARG(3)))
						{
							if(CL_CONSP(ARG(3)))
							{
								goto ELSE15;
							}
							else
							{
								LOAD_SMSTR((CL_FORM *)&KClisp[233], ARG(8));	/* ~a is not a list */
								COPY(ARG(3), ARG(9));
								Ferror(ARG(8), 2);
							}
						}
						else
						{
							goto THEN16;
						}
						{
							THEN16:;
							if(CL_CONSP(ARG(5)))
							{
								COPY(ARG(2), GET_CDR(ARG(5)));
							}
							else
							{
								LOAD_SMSTR((CL_FORM *)&KClisp[235], ARG(8));	/* ~a is not a cons */
								COPY(ARG(5), ARG(9));
								Ferror(ARG(8), 2);
							}
							COPY(GET_CDR(ARG(4)), ARG(0));
							goto RETURN2;
						}
						ELSE15:;
						if(CL_TRUEP(&display[0][2]))
						{
							COPY(&display[0][2], ARG(8));
							COPY(ARG(3), ARG(9));
							if(CL_CONSP(ARG(9)))
							{
								COPY(GET_CAR(ARG(9)), ARG(9));
							}
							else
							{
								if(CL_TRUEP(ARG(9)))
								{
									LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(10));	/* ~a is not a list */
									COPY(ARG(9), ARG(11));
									Ferror(ARG(10), 2);
								}
								else
								{
									LOAD_NIL(ARG(9));
								}
							}
							Ffuncall(ARG(8), 2);
							mv_count = 1;
							COPY(ARG(8), ARG(7));
						}
						else
						{
							COPY(ARG(3), ARG(8));
							if(CL_CONSP(ARG(8)))
							{
								COPY(GET_CAR(ARG(8)), ARG(7));
							}
							else
							{
								if(CL_TRUEP(ARG(8)))
								{
									LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(7));	/* ~a is not a list */
									Ferror(ARG(7), 2);
								}
								else
								{
									LOAD_NIL(ARG(7));
								}
							}
						}
					}
					ENDIF14:;
					goto M2_1;
					RETURN2:;
				}
				ENDIF9:;
			}
			ENDIF6:;
		}
	}
}
