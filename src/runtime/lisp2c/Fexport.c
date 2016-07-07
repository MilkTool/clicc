#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

CL_INIT2(KFexport)
{
	MAKE_STRING(26, "~S is not accessible in ~S"),	/* 0 */
	MAKE_STRING(35, "~S will cause a name conflict in ~S"),	/* 2 */
};

void Fexport(CL_FORM *base, int nargs)
{
	switch(nargs)
	{
		case 1:
		COPY(SYMVAL(Slisp, 272), STACK(base, 1));	/* *PACKAGE* */
		case 2:
		break;
		default:
		Labort(TOO_MANY_ARGS);
	}
	coerce_to_package(STACK(base, 1));
	if(CL_LISTP(STACK(base, 0)))
	{
	}
	else
	{
		COPY(STACK(base, 0), STACK(base, 2));
		Flist(STACK(base, 2), 1);
		COPY(STACK(base, 2), STACK(base, 0));
	}
	LOAD_NIL(STACK(base, 2));
	COPY(STACK(base, 0), STACK(base, 3));
	M54_1:;
	if(CL_ATOMP(STACK(base, 3)))
	{
		LOAD_NIL(STACK(base, 2));
		goto RETURN62;
	}
	COPY(STACK(base, 3), STACK(base, 4));
	Fcar(STACK(base, 4));
	COPY(STACK(base, 4), STACK(base, 2));
	Fsymbol_name(STACK(base, 4));
	COPY(STACK(base, 1), STACK(base, 5));
	Ffind_symbol(STACK(base, 4), 2);
	COPY(&mv_buf[0], STACK(base, 5));
	{
		int nargs;
		nargs = 2;
		mv_count = 1;
		switch(nargs)
		{
			case 0:
			LOAD_NIL(STACK(base, 4));
			case 1:
			LOAD_NIL(STACK(base, 5));
			nargs = 2;
		}
		Flist(STACK(base, 6), nargs - 2);
		if(NOT(CL_TRUEP(STACK(base, 5))))
		{
			LOAD_T(STACK(base, 7));
		}
		else
		{
			LOAD_NIL(STACK(base, 7));
		}
		if(CL_TRUEP(STACK(base, 7)))
		{
			bool_result = TRUE;
		}
		else
		{
			bool_result = NOT(EQ(STACK(base, 4), STACK(base, 2)));
		}
		if(bool_result)
		{
			LOAD_SMSTR((CL_FORM *)&KFexport[0], STACK(base, 7));	/* ~S is not accessible in ~S */
			COPY(STACK(base, 2), STACK(base, 8));
			COPY(STACK(base, 1), STACK(base, 9));
			Ferror(STACK(base, 7), 3);
		}
		if(CL_SYMBOLP(STACK(base, 5)) && GET_SYMBOL(STACK(base, 5)) == SYMBOL(Slisp, 306))	/* EXTERNAL */
		{
			goto RETURN62;
		}
		LOAD_NIL(STACK(base, 7));
		COPY(STACK(base, 1), STACK(base, 8));
		LOAD_FIXNUM(6, STACK(base, 9));
		LOAD_SYMBOL(SYMBOL(Slisp, 273), STACK(base, 10));	/* PACKAGE */
		struct_ref(STACK(base, 8));
		M55_1:;
		if(CL_ATOMP(STACK(base, 8)))
		{
			LOAD_NIL(STACK(base, 7));
			goto RETURN63;
		}
		COPY(STACK(base, 8), STACK(base, 9));
		Fcar(STACK(base, 9));
		COPY(STACK(base, 9), STACK(base, 7));
		COPY(STACK(base, 2), STACK(base, 9));
		Fsymbol_name(STACK(base, 9));
		COPY(STACK(base, 7), STACK(base, 10));
		Ffind_symbol(STACK(base, 9), 2);
		COPY(&mv_buf[0], STACK(base, 10));
		{
			int nargs;
			nargs = 2;
			mv_count = 1;
			switch(nargs)
			{
				case 0:
				LOAD_NIL(STACK(base, 9));
				case 1:
				LOAD_NIL(STACK(base, 10));
				nargs = 2;
			}
			Flist(STACK(base, 11), nargs - 2);
			if(CL_TRUEP(STACK(base, 10)))
			{
				if(EQ(STACK(base, 9), STACK(base, 2)))
				{
					bool_result = FALSE;
				}
				else
				{
					COPY(STACK(base, 9), STACK(base, 12));
					COPY(STACK(base, 7), STACK(base, 13));
					LOAD_FIXNUM(4, STACK(base, 14));
					LOAD_SYMBOL(SYMBOL(Slisp, 273), STACK(base, 15));	/* PACKAGE */
					struct_ref(STACK(base, 13));
					Fmember(STACK(base, 12), 2);
					bool_result = NOT(CL_TRUEP(STACK(base, 12)));
				}
			}
			else
			{
				bool_result = FALSE;
			}
			if(bool_result)
			{
				LOAD_SMSTR((CL_FORM *)&KFexport[2], STACK(base, 12));	/* ~S will cause a name conflict in ~S */
				COPY(STACK(base, 2), STACK(base, 13));
				COPY(STACK(base, 7), STACK(base, 14));
				Ferror(STACK(base, 12), 3);
			}
		}
		Fcdr(STACK(base, 8));
		goto M55_1;
		RETURN63:;
		COPY(STACK(base, 2), STACK(base, 7));
		Fsymbol_name(STACK(base, 7));
		LOAD_FIXNUM(101, STACK(base, 8));
		string_hash(STACK(base, 7));
		if(CL_SYMBOLP(STACK(base, 5)) && GET_SYMBOL(STACK(base, 5)) == SYMBOL(Slisp, 305))	/* INTERNAL */
		{
			COPY(STACK(base, 2), STACK(base, 8));
			COPY(STACK(base, 1), STACK(base, 9));
			LOAD_FIXNUM(2, STACK(base, 10));
			LOAD_SYMBOL(SYMBOL(Slisp, 273), STACK(base, 11));	/* PACKAGE */
			struct_ref(STACK(base, 9));
			COPY(STACK(base, 7), STACK(base, 10));
			del_pack_sym(STACK(base, 8));
		}
		COPY(STACK(base, 1), STACK(base, 8));
		LOAD_FIXNUM(3, STACK(base, 9));
		LOAD_SYMBOL(SYMBOL(Slisp, 273), STACK(base, 10));	/* PACKAGE */
		struct_ref(STACK(base, 8));
		COPY(STACK(base, 8), STACK(base, 9));
		COPY(STACK(base, 7), STACK(base, 10));
		Fsvref(STACK(base, 9));
		{
			CL_FORM *lptr;
			lptr = form_alloc(STACK(base, 10), 2);
			COPY(STACK(base, 2), CAR(lptr));
			COPY(STACK(base, 9), CDR(lptr));
			LOAD_CONS(lptr, STACK(base, 9));
		}
		COPY(STACK(base, 9), STACK(base, 10));
		COPY(STACK(base, 8), STACK(base, 11));
		COPY(STACK(base, 7), STACK(base, 12));
		Fset_svref(STACK(base, 10));
	}
	Fcdr(STACK(base, 3));
	goto M54_1;
	RETURN62:;
	LOAD_SYMBOL(SYMBOL(Ssys, 1), STACK(base, 0));	/* T */
}
