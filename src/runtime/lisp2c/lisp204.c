/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

static void Z108_lambda(CL_FORM *base);
static void Z109_lambda(CL_FORM *base);
static void Z110_lambda(CL_FORM *base);
static void Z111_lambda(CL_FORM *base);
static void Z112_lambda(CL_FORM *base);
static void Z113_lambda(CL_FORM *base);
static void Z114_lambda(CL_FORM *base);

void make_file_io_stream(CL_FORM *base)
{
	GEN_HEAPVAR(ARG(0), ARG(2));
	LOAD_SYMBOL(SYMBOL(Slisp, 92), ARG(2));	/* FILE-IO */
	{
		GEN_CLOSURE(array, ARG(3), 4, Z114_lambda, 0);
		COPY(ARG(0), &array[3]);
		LOAD_CLOSURE(array, ARG(3));
	}
	COPY(ARG(3), ARG(3));
	{
		GEN_CLOSURE(array, ARG(4), 4, Z113_lambda, 1);
		COPY(ARG(0), &array[3]);
		LOAD_CLOSURE(array, ARG(4));
	}
	COPY(ARG(4), ARG(4));
	{
		GEN_CLOSURE(array, ARG(5), 4, Z112_lambda, 0);
		COPY(ARG(0), &array[3]);
		LOAD_CLOSURE(array, ARG(5));
	}
	COPY(ARG(5), ARG(5));
	{
		GEN_CLOSURE(array, ARG(6), 4, Z111_lambda, 1);
		COPY(ARG(0), &array[3]);
		LOAD_CLOSURE(array, ARG(6));
	}
	COPY(ARG(6), ARG(6));
	{
		GEN_CLOSURE(array, ARG(7), 4, Z110_lambda, 0);
		COPY(ARG(0), &array[3]);
		LOAD_CLOSURE(array, ARG(7));
	}
	COPY(ARG(7), ARG(7));
	{
		GEN_CLOSURE(array, ARG(8), 4, Z109_lambda, 1);
		COPY(ARG(0), &array[3]);
		LOAD_CLOSURE(array, ARG(8));
	}
	COPY(ARG(8), ARG(8));
	{
		GEN_CLOSURE(array, ARG(9), 4, Z108_lambda, 1);
		COPY(ARG(0), &array[3]);
		LOAD_CLOSURE(array, ARG(9));
	}
	COPY(ARG(9), ARG(9));
	LOAD_GLOBFUN(&Cnil_fun, ARG(10));
	LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(11));	/* STREAM */
	COPY(ARG(2), ARG(12));
	COPY(ARG(1), ARG(13));
	COPY(ARG(3), ARG(14));
	COPY(ARG(4), ARG(15));
	COPY(ARG(8), ARG(16));
	LOAD_GLOBFUN(&Cnil_fun, ARG(17));
	COPY(ARG(5), ARG(18));
	COPY(ARG(6), ARG(19));
	COPY(ARG(7), ARG(20));
	COPY(ARG(9), ARG(21));
	rt_make_struct(ARG(11), 11);
	COPY(ARG(11), ARG(0));
}

static void Z108_lambda(CL_FORM *base)
{
	COPY(INDIRECT(GET_FORM(ARG(0)) + 3), ARG(2));
	c_fclose(ARG(2));
	COPY(ARG(1), ARG(2));
	close1(ARG(2));
	COPY(ARG(2), ARG(0));
}

static void Z109_lambda(CL_FORM *base)
{
	COPY(ARG(1), ARG(2));
	COPY(INDIRECT(GET_FORM(ARG(0)) + 3), ARG(3));
	c_fputc(ARG(2));
	COPY(ARG(2), ARG(0));
}

static void Z110_lambda(CL_FORM *base)
{
	COPY(INDIRECT(GET_FORM(ARG(0)) + 3), ARG(1));
	c_file_length(ARG(1));
	COPY(ARG(1), ARG(0));
}

static void Z111_lambda(CL_FORM *base)
{
	COPY(INDIRECT(GET_FORM(ARG(0)) + 3), ARG(2));
	COPY(ARG(1), ARG(3));
	c_fseek(ARG(2));
	COPY(ARG(2), ARG(0));
}

static void Z112_lambda(CL_FORM *base)
{
	COPY(INDIRECT(GET_FORM(ARG(0)) + 3), ARG(1));
	c_ftell(ARG(1));
	COPY(ARG(1), ARG(0));
}

static void Z113_lambda(CL_FORM *base)
{
	COPY(ARG(1), ARG(2));
	COPY(INDIRECT(GET_FORM(ARG(0)) + 3), ARG(3));
	c_ungetc(ARG(2));
	COPY(ARG(2), ARG(0));
}

static void Z114_lambda(CL_FORM *base)
{
	COPY(INDIRECT(GET_FORM(ARG(0)) + 3), ARG(1));
	c_fgetc(ARG(1));
	COPY(ARG(1), ARG(0));
}
