/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

extern CL_INIT XImake_array1[];
extern CL_INIT XFmake_array1[];
CL_INIT Kmake_array1[] =
{
	MAKE_STRING(30, "Invalid dimension argument ~A."),	/* 0 */
	MAKE_STRING(43, "Invalid displaced-index-offset argument ~A."),	/* 2 */
	MAKE_STRING(43, "Invalid displaced-index-offset argument ~A."),	/* 4 */
	MAKE_STRING(29, "Invalid dimension argument ~A"),	/* 6 */
};

void make_array1(CL_FORM *base)
{
	if(CL_TRUEP(ARG(0)))
	{
		LOAD_BOOL(CL_ATOMP(ARG(0)), ARG(10));
		if(CL_TRUEP(ARG(10)))
		{
			goto THEN1;
		}
		else
		{
			if(CL_CONSP(ARG(0)))
			{
				COPY(GET_CDR(ARG(0)), ARG(11));
			}
			else
			{
				LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(11));	/* ~a is not a list */
				COPY(ARG(0), ARG(12));
				Ferror(ARG(11), 2);
			}
			if(CL_ATOMP(ARG(11)))
			{
				COPY(ARG(0), ARG(11));
				if(CL_CONSP(ARG(11)))
				{
					COPY(GET_CAR(ARG(11)), ARG(0));
				}
				else
				{
					LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(12));	/* ~a is not a list */
					COPY(ARG(11), ARG(13));
					Ferror(ARG(12), 2);
				}
				goto THEN1;
			}
			else
			{
				goto ELSE2;
			}
		}
	}
	else
	{
		goto ELSE2;
	}
	{
		THEN1:;
		if(CL_FIXNUMP(ARG(0)))
		{
			LOAD_SMALLFIXNUM(0, ARG(10));
			COPY(ARG(0), ARG(11));
			COPY(SYMVAL(Slisp, 5), ARG(12));	/* ARRAY-DIMENSION-LIMIT */
			Fle(ARG(10), 3);
		}
		else
		{
			goto ELSE3;
		}
		if(CL_TRUEP(ARG(10)))
		{
		}
		else
		{
			ELSE3:;
			LOAD_SMSTR((CL_FORM *)&Kmake_array1[0], ARG(10));	/* Invalid dimension argument ~A. */
			COPY(ARG(0), ARG(11));
			Ferror(ARG(10), 2);
		}
		if(CL_TRUEP(ARG(5)))
		{
			if(CL_FIXNUMP(ARG(5)))
			{
				LOAD_SMALLFIXNUM(0, ARG(10));
				COPY(ARG(5), ARG(11));
				COPY(ARG(0), ARG(12));
				Fle(ARG(10), 3);
			}
			else
			{
				goto ELSE4;
			}
			if(CL_TRUEP(ARG(10)))
			{
			}
			else
			{
				ELSE4:;
				COPY(ARG(0), ARG(5));
			}
		}
		else
		{
			LOAD_SMALLFIXNUM(-1, ARG(5));
		}
		if(CL_TRUEP(ARG(6)))
		{
			if(CL_FIXNUMP(ARG(7)))
			{
				LOAD_SMALLFIXNUM(0, ARG(10));
				COPY(ARG(7), ARG(11));
				COPY(SYMVAL(Slisp, 5), ARG(12));	/* ARRAY-DIMENSION-LIMIT */
				Fle(ARG(10), 3);
			}
			else
			{
				goto ELSE5;
			}
			if(CL_TRUEP(ARG(10)))
			{
			}
			else
			{
				ELSE5:;
				LOAD_SMSTR((CL_FORM *)&Kmake_array1[2], ARG(10));	/* Invalid displaced-index-offset argument ~A. */
				COPY(ARG(7), ARG(11));
				Ferror(ARG(10), 2);
			}
			LOAD_SYMBOL(SYMBOL(Slisp, 150), ARG(10));	/* COMPLEX-VECTOR */
			COPY(ARG(6), ARG(11));
			COPY(ARG(7), ARG(12));
			COPY(ARG(0), ARG(13));
			COPY(ARG(5), ARG(14));
			rt_make_struct(ARG(10), 5);
			COPY(ARG(10), ARG(0));
		}
		else
		{
			COPY(ARG(0), ARG(10));
			COPY(ARG(1), ARG(11));
			to_type_code(ARG(11));
			make_plain_vector(ARG(10));
			if(CL_TRUEP(ARG(8)))
			{
				COPY(ARG(10), ARG(11));
				COPY(ARG(2), ARG(12));
				LOAD_SMALLFIXNUM(0, ARG(13));
				COPY(SYMVAL(Slisp, 0), ARG(14));	/* MOST-POSITIVE-FIXNUM */
				fill1(ARG(11));
			}
			else
			{
				if(CL_TRUEP(ARG(9)))
				{
					COPY(ARG(10), ARG(11));
					COPY(ARG(3), ARG(12));
					LOAD_SMALLFIXNUM(0, ARG(13));
					COPY(SYMVAL(Slisp, 0), ARG(14));	/* MOST-POSITIVE-FIXNUM */
					LOAD_SMALLFIXNUM(0, ARG(15));
					COPY(SYMVAL(Slisp, 0), ARG(16));	/* MOST-POSITIVE-FIXNUM */
					replace1(ARG(11));
				}
			}
			if(CL_TRUEP(ARG(4)))
			{
				goto THEN6;
			}
			else
			{
				LOAD_SMALLFIXNUM(-1, ARG(11));
				if(EQL(ARG(11), ARG(5)))
				{
					goto ELSE7;
				}
				else
				{
					goto THEN6;
				}
			}
			{
				THEN6:;
				LOAD_SMALLFIXNUM(-1, ARG(11));
				LOAD_SYMBOL(SYMBOL(Slisp, 150), ARG(12));	/* COMPLEX-VECTOR */
				COPY(ARG(10), ARG(13));
				COPY(ARG(11), ARG(14));
				COPY(ARG(0), ARG(15));
				COPY(ARG(5), ARG(16));
				rt_make_struct(ARG(12), 5);
				COPY(ARG(12), ARG(0));
			}
			goto ENDIF8;
			{
				ELSE7:;
				COPY(ARG(10), ARG(0));
			}
			ENDIF8:;
		}
	}
	goto ENDIF9;
	{
		ELSE2:;
		if(CL_TRUEP(ARG(6)))
		{
			if(CL_FIXNUMP(ARG(7)))
			{
				LOAD_SMALLFIXNUM(0, ARG(10));
				COPY(ARG(7), ARG(11));
				COPY(SYMVAL(Slisp, 5), ARG(12));	/* ARRAY-DIMENSION-LIMIT */
				Fle(ARG(10), 3);
			}
			else
			{
				goto ELSE10;
			}
			if(CL_TRUEP(ARG(10)))
			{
			}
			else
			{
				ELSE10:;
				LOAD_SMSTR((CL_FORM *)&Kmake_array1[4], ARG(10));	/* Invalid displaced-index-offset argument ~A. */
				COPY(ARG(7), ARG(11));
				Ferror(ARG(10), 2);
			}
			LOAD_SYMBOL(SYMBOL(Slisp, 147), ARG(10));	/* COMPLEX-ARRAY */
			COPY(ARG(6), ARG(11));
			COPY(ARG(7), ARG(12));
			COPY(ARG(0), ARG(13));
			rt_make_struct(ARG(10), 4);
			COPY(ARG(10), ARG(0));
		}
		else
		{
			COPY(ARG(0), ARG(10));
			LOAD_NIL(ARG(11));
			LOAD_SMALLFIXNUM(1, ARG(12));
			M1_1:;
			if(CL_TRUEP(ARG(10)))
			{
			}
			else
			{
				COPY(ARG(12), ARG(10));
				goto RETURN1;
			}
			COPY(ARG(10), ARG(13));
			COPY(ARG(13), ARG(14));
			if(CL_CONSP(ARG(14)))
			{
				COPY(GET_CAR(ARG(14)), ARG(13));
			}
			else
			{
				LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(13));	/* ~a is not a list */
				Ferror(ARG(13), 2);
			}
			COPY(ARG(10), ARG(14));
			COPY(ARG(14), ARG(15));
			if(CL_CONSP(ARG(15)))
			{
				COPY(GET_CDR(ARG(15)), ARG(10));
			}
			else
			{
				LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(16));	/* ~a is not a list */
				COPY(ARG(15), ARG(17));
				Ferror(ARG(16), 2);
			}
			COPY(ARG(13), ARG(11));
			if(CL_FIXNUMP(ARG(11)))
			{
				LOAD_SMALLFIXNUM(0, ARG(13));
				COPY(ARG(11), ARG(14));
				COPY(SYMVAL(Slisp, 5), ARG(15));	/* ARRAY-DIMENSION-LIMIT */
				Fle(ARG(13), 3);
			}
			else
			{
				goto ELSE11;
			}
			if(CL_TRUEP(ARG(13)))
			{
			}
			else
			{
				ELSE11:;
				LOAD_SMSTR((CL_FORM *)&Kmake_array1[6], ARG(13));	/* Invalid dimension argument ~A */
				COPY(ARG(11), ARG(14));
				Ferror(ARG(13), 2);
			}
			COPY(ARG(11), ARG(13));
			Fmult(ARG(12), 2);
			goto M1_1;
			RETURN1:;
			COPY(ARG(1), ARG(11));
			to_type_code(ARG(11));
			COPY(ARG(10), ARG(12));
			COPY(ARG(11), ARG(13));
			make_plain_vector(ARG(12));
			if(CL_TRUEP(ARG(8)))
			{
				COPY(ARG(12), ARG(13));
				COPY(ARG(2), ARG(14));
				LOAD_SMALLFIXNUM(0, ARG(15));
				COPY(SYMVAL(Slisp, 0), ARG(16));	/* MOST-POSITIVE-FIXNUM */
				fill1(ARG(13));
			}
			else
			{
				if(CL_TRUEP(ARG(9)))
				{
					COPY(ARG(12), ARG(13));
					COPY(ARG(0), ARG(14));
					COPY(ARG(3), ARG(15));
					fill_data_vector(ARG(13));
				}
			}
			LOAD_SMALLFIXNUM(-1, ARG(13));
			LOAD_SYMBOL(SYMBOL(Slisp, 147), ARG(14));	/* COMPLEX-ARRAY */
			COPY(ARG(12), ARG(15));
			COPY(ARG(13), ARG(16));
			COPY(ARG(0), ARG(17));
			rt_make_struct(ARG(14), 4);
			COPY(ARG(14), ARG(0));
		}
	}
	ENDIF9:;
}
