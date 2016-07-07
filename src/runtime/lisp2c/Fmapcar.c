/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

static void Z131_mapcar_internal(CL_FORM *base, CL_FORM *display[]);

void Fmapcar(CL_FORM *base, int nargs)
{
	CL_FORM *display[2];
	Flist(ARG(2), nargs - 2);
	display[0] = ARG(0);
	Z131_mapcar_internal(ARG(3), display);
	COPY(ARG(3), ARG(0));
}

static void Z132_get_rest_args(CL_FORM *base, CL_FORM *display[]);

static void Z131_mapcar_internal(CL_FORM *base, CL_FORM *display[])
{
	CONTENV new_cont;
	CL_FORM *caller_base;
	new_cont.bind_top = bind_top;
	new_cont.last = last_cont;
	LOAD_UNIQUE_TAG(ARG(0));
	caller_base = (CL_FORM *)SETJMP(new_cont.jmp_buf);
	if(caller_base == NULL)
	{
		last_cont = &new_cont;
		if(CL_ATOMP(&display[0][1]))
		{
			LOAD_NIL(ARG(0));
		}
		else
		{
			COPY(&display[0][0], ARG(1));
			COPY(GET_CAR(&display[0][1]), ARG(2));
			COPY(&display[0][1], ARG(3));
			COPY(ARG(3), ARG(4));
			COPY(GET_CDR(ARG(4)), &display[0][1]);
			COPY(&display[0][2], ARG(3));
			display[1] = ARG(0);
			Z132_get_rest_args(ARG(3), display);
			Fapply(ARG(1), 3);
			mv_count = 1;
			Z131_mapcar_internal(ARG(2), display);
			ALLOC_CONS(ARG(3), ARG(1), ARG(2), ARG(0));
		}
		RETURN1:;
		last_cont = new_cont.last;
	}
	else
	{
		last_cont = new_cont.last;
		if(EQ(STACK(caller_base, 0), ARG(0)))
		{
			COPY(STACK(caller_base, 1), ARG(0));
		}
		else
		{
			call_cont(caller_base);
		}
	}
}

static void Z132_get_rest_args(CL_FORM *base, CL_FORM *display[])
{
	if(CL_ATOMP(ARG(0)))
	{
		LOAD_NIL(ARG(0));
	}
	else
	{
		COPY(GET_CAR(ARG(0)), ARG(1));
		if(CL_ATOMP(ARG(1)))
		{
			COPY(&display[1][0], ARG(1));
			LOAD_NIL(ARG(2));
			call_cont(ARG(1));
		}
		COPY(GET_CAR(ARG(0)), ARG(1));
		if(CL_CONSP(ARG(1)))
		{
			COPY(GET_CAR(ARG(1)), ARG(2));
		}
		else
		{
			if(CL_TRUEP(ARG(1)))
			{
				LOAD_SMSTR((CL_FORM *)&KClisp[239], ARG(2));	/* ~a is not a list */
				COPY(ARG(1), ARG(3));
				Ferror(ARG(2), 2);
			}
			else
			{
				COPY(ARG(1), ARG(2));
			}
		}
		COPY(ARG(1), ARG(3));
		COPY(ARG(3), ARG(4));
		if(CL_CONSP(ARG(4)))
		{
			COPY(GET_CDR(ARG(4)), ARG(1));
		}
		else
		{
			if(CL_TRUEP(ARG(4)))
			{
				LOAD_SMSTR((CL_FORM *)&KClisp[241], ARG(5));	/* ~a is not a list */
				COPY(ARG(4), ARG(6));
				Ferror(ARG(5), 2);
			}
			else
			{
				LOAD_NIL(ARG(1));
			}
		}
		COPY(ARG(1), GET_CAR(ARG(0)));
		COPY(ARG(2), ARG(1));
		COPY(GET_CDR(ARG(0)), ARG(2));
		Z132_get_rest_args(ARG(2), display);
		ALLOC_CONS(ARG(3), ARG(1), ARG(2), ARG(0));
	}
}
