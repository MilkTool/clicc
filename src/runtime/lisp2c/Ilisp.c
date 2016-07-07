/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

extern CL_INIT XIIlisp[];
extern CL_INIT XFIlisp[];
CL_INIT KIlisp[] =
{
	MAKE_STRING(4, "UNIX"),	/* 0 */
	MAKE_STRING(11, "#<Package \""),	/* 2 */
	MAKE_STRING(2, "\">"),	/* 4 */
	MAKE_STRING(7, "KEYWORD"),	/* 6 */
	MAKE_CONS,	/* 8 CONS(8) */
	MAKE_STRREF(&KIlisp[11]),
	MAKE_NIL,
	MAKE_STRING(0, ""),
	MAKE_STRING(4, "LISP"),	/* 13 */
	MAKE_CONS,	/* 15 CONS(15) */
	MAKE_NIL,
	MAKE_NIL,
	MAKE_STRING(5, "COMMA"),	/* 18 */
	MAKE_STRING(12, "COMMA-ATSIGN"),	/* 20 */
	MAKE_STRING(9, "COMMA-DOT"),	/* 22 */
	MAKE_STRING(7, "BQ-LIST"),	/* 24 */
	MAKE_STRING(9, "BQ-APPEND"),	/* 26 */
	MAKE_STRING(8, "BQ-LIST*"),	/* 28 */
	MAKE_STRING(8, "BQ-NCONC"),	/* 30 */
	MAKE_STRING(14, "BQ-CLOBBERABLE"),	/* 32 */
	MAKE_STRING(8, "BQ-QUOTE"),	/* 34 */
	MAKE_STRING(6, "VECTOR"),	/* 36 */
	MAKE_CONS,	/* 38 CONS(38) */
	MAKE_SYMREF(SYMBOL(Slisp, 438)),	/* CLICC */
	MAKE_NIL,
	MAKE_CONS,	/* 41 CONS(41) */
	MAKE_CHAR('\t'),
	MAKE_CONSREF(&KIlisp[44]),
	MAKE_CONS,	/* CONS(44) */
	MAKE_CHAR('\n'),
	MAKE_CONSREF(&KIlisp[47]),
	MAKE_CONS,	/* CONS(47) */
	MAKE_CHAR('\f'),
	MAKE_CONSREF(&KIlisp[50]),
	MAKE_CONS,	/* CONS(50) */
	MAKE_CHAR('\r'),
	MAKE_CONSREF(&KIlisp[53]),
	MAKE_CONS,	/* CONS(53) */
	MAKE_CHAR(' '),
	MAKE_NIL,
	MAKE_STRING(12, "#<readtable>"),	/* 56 */
	MAKE_STRING(1, "G"),	/* 58 */
	MAKE_CONS,	/* 60 CONS(60) */
	MAKE_NIL,
	MAKE_NIL,
	MAKE_STRING(7, "KEYWORD"),	/* 63 */
	MAKE_STRING(4, "LISP"),	/* 65 */
	MAKE_STRING(2, "RT"),	/* 67 */
	MAKE_STRING(3, "FFI"),	/* 69 */
	MAKE_STRING(4, "LISP"),	/* 71 */
};

static void Z166_lambda(CL_FORM *base);
GEN_STATIC_GLOBAL_FUNARG(CZ166_lambda, Z166_lambda, 3);
static void Z167_lambda(CL_FORM *base);
GEN_STATIC_GLOBAL_FUNARG(CZ167_lambda, Z167_lambda, 3);

void Ilisp(CL_FORM *base)
{
	ONLY_ONCE;
	rt_most_positive_fixnum(ARG(0));
	COPY(ARG(0), SYMVAL(Slisp, 0));	/* MOST-POSITIVE-FIXNUM */
	rt_most_negative_fixnum(ARG(0));
	COPY(ARG(0), SYMVAL(Slisp, 1));	/* MOST-NEGATIVE-FIXNUM */
	COPY(SYMVAL(Slisp, 0), SYMVAL(Slisp, 5));	/* MOST-POSITIVE-FIXNUM ARRAY-DIMENSION-LIMIT */
	COPY(SYMVAL(Slisp, 0), SYMVAL(Slisp, 6));	/* MOST-POSITIVE-FIXNUM ARRAY-RANK-LIMIT */
	COPY(SYMVAL(Slisp, 0), SYMVAL(Slisp, 7));	/* MOST-POSITIVE-FIXNUM ARRAY-TOTAL-SIZE-LIMIT */
	COPY(SYMVAL(Slisp, 0), SYMVAL(Slisp, 8));	/* MOST-POSITIVE-FIXNUM CALL-ARGUMENTS-LIMIT */
	COPY(SYMVAL(Slisp, 0), SYMVAL(Slisp, 10));	/* MOST-POSITIVE-FIXNUM LAMBDA-PARAMETERS-LIMIT */
	LOAD_SYMBOL(SYMBOL(Slisp, 59), ARG(0));	/* *TERMINAL-IO* */
	make_terminal_io(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 60), ARG(0));	/* *STANDARD-INPUT* */
	LOAD_SYMBOL(SYMBOL(Slisp, 59), ARG(1));	/* *TERMINAL-IO* */
	Fmake_synonym_stream(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 61), ARG(0));	/* *STANDARD-OUTPUT* */
	COPY(SYMVAL(Slisp, 60), ARG(1));	/* *STANDARD-INPUT* */
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 62), ARG(0));	/* *ERROR-OUTPUT* */
	COPY(SYMVAL(Slisp, 60), ARG(1));	/* *STANDARD-INPUT* */
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 63), ARG(0));	/* *QUERY-IO* */
	COPY(SYMVAL(Slisp, 60), ARG(1));	/* *STANDARD-INPUT* */
	Fset(ARG(0));
	LOAD_GLOBFUN(&Cprint_stream, ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(1));	/* STREAM */
	LOAD_GLOBFUN(&Cprint_stream, ARG(2));
	LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(3));	/* STREAM */
	LOAD_SYMBOL(SYMBOL(Slisp, 341), ARG(4));	/* STRUCT-PRINTER */
	LOAD_NIL(ARG(5));
	set_get1(ARG(2));
	LOAD_GLOBFUN(&Crt_make_stream, ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(1));	/* STREAM */
	LOAD_GLOBFUN(&Crt_make_stream, ARG(2));
	LOAD_SYMBOL(SYMBOL(Slisp, 64), ARG(3));	/* STREAM */
	LOAD_SYMBOL(SYMBOL(Slisp, 340), ARG(4));	/* STRUCT-CONSTRUCTOR */
	LOAD_NIL(ARG(5));
	set_get1(ARG(2));
	LOAD_GLOBFUN(&Cmake_complex_base_array, ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 145), ARG(1));	/* COMPLEX-BASE-ARRAY */
	LOAD_GLOBFUN(&Cmake_complex_base_array, ARG(2));
	LOAD_SYMBOL(SYMBOL(Slisp, 145), ARG(3));	/* COMPLEX-BASE-ARRAY */
	LOAD_SYMBOL(SYMBOL(Slisp, 340), ARG(4));	/* STRUCT-CONSTRUCTOR */
	LOAD_NIL(ARG(5));
	set_get1(ARG(2));
	LOAD_SYMBOL(SYMBOL(Slisp, 145), ARG(0));	/* COMPLEX-BASE-ARRAY */
	LOAD_SYMBOL(SYMBOL(Slisp, 147), ARG(1));	/* COMPLEX-ARRAY */
	LOAD_SYMBOL(SYMBOL(Slisp, 148), ARG(2));	/* INCLUDED-STRUCT */
	LOAD_NIL(ARG(3));
	set_get1(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 145), ARG(0));	/* COMPLEX-BASE-ARRAY */
	LOAD_SYMBOL(SYMBOL(Slisp, 145), ARG(0));	/* COMPLEX-BASE-ARRAY */
	LOAD_SYMBOL(SYMBOL(Slisp, 341), ARG(1));	/* STRUCT-PRINTER */
	LOAD_NIL(ARG(2));
	get1(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 147), ARG(1));	/* COMPLEX-ARRAY */
	COPY(ARG(0), ARG(2));
	LOAD_SYMBOL(SYMBOL(Slisp, 147), ARG(3));	/* COMPLEX-ARRAY */
	LOAD_SYMBOL(SYMBOL(Slisp, 341), ARG(4));	/* STRUCT-PRINTER */
	LOAD_NIL(ARG(5));
	set_get1(ARG(2));
	LOAD_GLOBFUN(&Cmake_complex_array, ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 147), ARG(1));	/* COMPLEX-ARRAY */
	LOAD_GLOBFUN(&Cmake_complex_array, ARG(2));
	LOAD_SYMBOL(SYMBOL(Slisp, 147), ARG(3));	/* COMPLEX-ARRAY */
	LOAD_SYMBOL(SYMBOL(Slisp, 340), ARG(4));	/* STRUCT-CONSTRUCTOR */
	LOAD_NIL(ARG(5));
	set_get1(ARG(2));
	LOAD_SYMBOL(SYMBOL(Slisp, 145), ARG(0));	/* COMPLEX-BASE-ARRAY */
	LOAD_SYMBOL(SYMBOL(Slisp, 150), ARG(1));	/* COMPLEX-VECTOR */
	LOAD_SYMBOL(SYMBOL(Slisp, 148), ARG(2));	/* INCLUDED-STRUCT */
	LOAD_NIL(ARG(3));
	set_get1(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 145), ARG(0));	/* COMPLEX-BASE-ARRAY */
	LOAD_SYMBOL(SYMBOL(Slisp, 145), ARG(0));	/* COMPLEX-BASE-ARRAY */
	LOAD_SYMBOL(SYMBOL(Slisp, 341), ARG(1));	/* STRUCT-PRINTER */
	LOAD_NIL(ARG(2));
	get1(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 150), ARG(1));	/* COMPLEX-VECTOR */
	COPY(ARG(0), ARG(2));
	LOAD_SYMBOL(SYMBOL(Slisp, 150), ARG(3));	/* COMPLEX-VECTOR */
	LOAD_SYMBOL(SYMBOL(Slisp, 341), ARG(4));	/* STRUCT-PRINTER */
	LOAD_NIL(ARG(5));
	set_get1(ARG(2));
	LOAD_GLOBFUN(&Cmake_complex_vector, ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 150), ARG(1));	/* COMPLEX-VECTOR */
	LOAD_GLOBFUN(&Cmake_complex_vector, ARG(2));
	LOAD_SYMBOL(SYMBOL(Slisp, 150), ARG(3));	/* COMPLEX-VECTOR */
	LOAD_SYMBOL(SYMBOL(Slisp, 340), ARG(4));	/* STRUCT-CONSTRUCTOR */
	LOAD_NIL(ARG(5));
	set_get1(ARG(2));
	LOAD_GLOBFUN(&CPprint_pathname, ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 232), ARG(1));	/* PATHNAME */
	LOAD_GLOBFUN(&CPprint_pathname, ARG(2));
	LOAD_SYMBOL(SYMBOL(Slisp, 232), ARG(3));	/* PATHNAME */
	LOAD_SYMBOL(SYMBOL(Slisp, 341), ARG(4));	/* STRUCT-PRINTER */
	LOAD_NIL(ARG(5));
	set_get1(ARG(2));
	LOAD_GLOBFUN(&CPmake_pathname, ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 232), ARG(1));	/* PATHNAME */
	LOAD_GLOBFUN(&CPmake_pathname, ARG(2));
	LOAD_SYMBOL(SYMBOL(Slisp, 232), ARG(3));	/* PATHNAME */
	LOAD_SYMBOL(SYMBOL(Slisp, 340), ARG(4));	/* STRUCT-CONSTRUCTOR */
	LOAD_NIL(ARG(5));
	set_get1(ARG(2));
	LOAD_SYMBOL(SYMBOL(Slisp, 277), ARG(0));	/* *IGNORE-WILDCARDS* */
	LOAD_NIL(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 278), ARG(0));	/* *UNIX-HOST* */
	LOAD_SMSTR((CL_FORM *)&KIlisp[0], ARG(1));	/* UNIX */
	Fset(ARG(0));
	COPY(SYMVAL(Slisp, 278), ARG(0));	/* *UNIX-HOST* */
	COPY(ARG(0), ARG(1));
	LOAD_SYMBOL(SYMBOL(Slisp, 232), ARG(2));	/* PATHNAME */
	COPY(ARG(1), ARG(3));
	LOAD_NIL(ARG(4));
	LOAD_NIL(ARG(5));
	LOAD_NIL(ARG(6));
	LOAD_NIL(ARG(7));
	LOAD_SYMBOL(SYMBOL(Slisp, 259), ARG(8));	/* NEWEST */
	rt_make_struct(ARG(2), 7);
	COPY(ARG(2), SYMVAL(Slisp, 231));	/* *DEFAULT-PATHNAME-DEFAULTS* */
	LOAD_SYMBOL(SYMBOL(Slisp, 314), ARG(0));	/* FLOAT-RADIX */
	rt_calc_radix(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 332), ARG(0));	/* FLOAT-SIGNIFICAND-LENGTH */
	rt_calc_mant_dig(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 333), ARG(0));	/* I-D-F-FAKTOR */
	COPY(SYMVAL(Slisp, 314), ARG(1));	/* FLOAT-RADIX */
	COPY(SYMVAL(Slisp, 332), ARG(2));	/* FLOAT-SIGNIFICAND-LENGTH */
	Fmult(ARG(1), 2);
	Fset(ARG(0));
	LOAD_GLOBFUN(&CZ167_lambda, ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 344), ARG(1));	/* PACKAGE */
	COPY(ARG(0), ARG(2));
	LOAD_SYMBOL(SYMBOL(Slisp, 344), ARG(3));	/* PACKAGE */
	LOAD_SYMBOL(SYMBOL(Slisp, 341), ARG(4));	/* STRUCT-PRINTER */
	LOAD_NIL(ARG(5));
	set_get1(ARG(2));
	LOAD_GLOBFUN(&Craw_make_package, ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 344), ARG(1));	/* PACKAGE */
	LOAD_GLOBFUN(&Craw_make_package, ARG(2));
	LOAD_SYMBOL(SYMBOL(Slisp, 344), ARG(3));	/* PACKAGE */
	LOAD_SYMBOL(SYMBOL(Slisp, 340), ARG(4));	/* STRUCT-CONSTRUCTOR */
	LOAD_NIL(ARG(5));
	set_get1(ARG(2));
	LOAD_SYMBOL(SYMBOL(Slisp, 379), ARG(0));	/* *PACKAGE-ARRAY* */
	Fboundp(ARG(0));
	if(CL_TRUEP(ARG(0)))
	{
	}
	else
	{
		LOAD_SYMBOL(SYMBOL(Slisp, 379), ARG(0));	/* *PACKAGE-ARRAY* */
		LOAD_SMALLFIXNUM(6, ARG(1));
		LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(2));	/* T */
		LOAD_NIL(ARG(3));
		LOAD_NIL(ARG(4));
		LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(5));	/* T */
		LOAD_SMALLFIXNUM(0, ARG(6));
		LOAD_NIL(ARG(7));
		LOAD_SMALLFIXNUM(0, ARG(8));
		LOAD_NIL(ARG(9));
		LOAD_NIL(ARG(10));
		make_array1(ARG(1));
		Fset(ARG(0));
	}
	LOAD_SYMBOL(SYMBOL(Slisp, 380), ARG(0));	/* *KEYWORD-PACKAGE* */
	Fboundp(ARG(0));
	if(CL_TRUEP(ARG(0)))
	{
	}
	else
	{
		LOAD_SYMBOL(SYMBOL(Slisp, 380), ARG(0));	/* *KEYWORD-PACKAGE* */
		LOAD_SMSTR((CL_FORM *)&KIlisp[6], ARG(1));	/* KEYWORD */
		LOAD_CONS((CL_FORM *)&KIlisp[8], ARG(2));
		LOAD_NIL(ARG(3));
		make_package1(ARG(1));
		Fset(ARG(0));
	}
	LOAD_SMSTR((CL_FORM *)&KIlisp[13], ARG(0));	/* LISP */
	COPY(ARG(0), ARG(1));
	Ffind_package(ARG(1));
	if(CL_TRUEP(ARG(1)))
	{
		COPY(ARG(1), SYMVAL(Slisp, 343));	/* *PACKAGE* */
	}
	else
	{
		COPY(ARG(0), ARG(2));
		COPY(ARG(2), ARG(3));
		LOAD_NIL(ARG(4));
		LOAD_NIL(ARG(5));
		make_package1(ARG(3));
		COPY(ARG(3), SYMVAL(Slisp, 343));	/* *PACKAGE* */
	}
	LOAD_CONS((CL_FORM *)&KIlisp[15], ARG(0));
	COPY(SYMVAL(Slisp, 343), ARG(1));	/* *PACKAGE* */
	import1(ARG(0));
	LOAD_GLOBFUN(&Cnew_hash_table, ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 389), ARG(1));	/* HASH-TABLE */
	LOAD_GLOBFUN(&Cnew_hash_table, ARG(2));
	LOAD_SYMBOL(SYMBOL(Slisp, 389), ARG(3));	/* HASH-TABLE */
	LOAD_SYMBOL(SYMBOL(Slisp, 340), ARG(4));	/* STRUCT-CONSTRUCTOR */
	LOAD_NIL(ARG(5));
	set_get1(ARG(2));
	LOAD_SYMBOL(SYMBOL(Slisp, 426), ARG(0));	/* *COMMA* */
	LOAD_SMSTR((CL_FORM *)&KIlisp[18], ARG(1));	/* COMMA */
	Fmake_symbol(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 427), ARG(0));	/* *COMMA-ATSIGN* */
	LOAD_SMSTR((CL_FORM *)&KIlisp[20], ARG(1));	/* COMMA-ATSIGN */
	Fmake_symbol(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 428), ARG(0));	/* *COMMA-DOT* */
	LOAD_SMSTR((CL_FORM *)&KIlisp[22], ARG(1));	/* COMMA-DOT */
	Fmake_symbol(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 429), ARG(0));	/* *BQ-LIST* */
	LOAD_SMSTR((CL_FORM *)&KIlisp[24], ARG(1));	/* BQ-LIST */
	Fmake_symbol(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 430), ARG(0));	/* *BQ-APPEND* */
	LOAD_SMSTR((CL_FORM *)&KIlisp[26], ARG(1));	/* BQ-APPEND */
	Fmake_symbol(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 431), ARG(0));	/* *BQ-LIST** */
	LOAD_SMSTR((CL_FORM *)&KIlisp[28], ARG(1));	/* BQ-LIST* */
	Fmake_symbol(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 432), ARG(0));	/* *BQ-NCONC* */
	LOAD_SMSTR((CL_FORM *)&KIlisp[30], ARG(1));	/* BQ-NCONC */
	Fmake_symbol(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 433), ARG(0));	/* *BQ-CLOBBERABLE* */
	LOAD_SMSTR((CL_FORM *)&KIlisp[32], ARG(1));	/* BQ-CLOBBERABLE */
	Fmake_symbol(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 434), ARG(0));	/* *BQ-QUOTE* */
	LOAD_SMSTR((CL_FORM *)&KIlisp[34], ARG(1));	/* BQ-QUOTE */
	Fmake_symbol(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 435), ARG(0));	/* *BQ-QUOTE-NIL* */
	COPY(SYMVAL(Slisp, 434), ARG(1));	/* *BQ-QUOTE* */
	LOAD_NIL(ARG(2));
	Flist(ARG(1), 2);
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 436), ARG(0));	/* *BQ-VECTOR* */
	LOAD_SMSTR((CL_FORM *)&KIlisp[36], ARG(1));	/* VECTOR */
	Fmake_symbol(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 437), ARG(0));	/* *BQ-LEVEL* */
	LOAD_SMALLFIXNUM(0, ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 407), ARG(0));	/* *READ-BASE* */
	LOAD_SMALLFIXNUM(10, ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 408), ARG(0));	/* *READ-SUPPRESS* */
	LOAD_NIL(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 409), ARG(0));	/* *FEATURES* */
	LOAD_CONS((CL_FORM *)&KIlisp[38], ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 439), ARG(0));	/* *TOKEN* */
	LOAD_SMALLFIXNUM(80, ARG(1));
	LOAD_CHAR(ARG(2), ' ', ARG(2));
	make_string1(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 440), ARG(0));	/* *FILL-POINTER* */
	Fboundp(ARG(0));
	if(CL_TRUEP(ARG(0)))
	{
	}
	else
	{
		LOAD_SYMBOL(SYMBOL(Slisp, 440), ARG(0));	/* *FILL-POINTER* */
		LOAD_SMALLFIXNUM(0, ARG(1));
		Fset(ARG(0));
	}
	LOAD_SYMBOL(SYMBOL(Slisp, 441), ARG(0));	/* *TOKEN-LENGTH* */
	Fboundp(ARG(0));
	if(CL_TRUEP(ARG(0)))
	{
	}
	else
	{
		LOAD_SYMBOL(SYMBOL(Slisp, 441), ARG(0));	/* *TOKEN-LENGTH* */
		LOAD_SMALLFIXNUM(80, ARG(1));
		Fset(ARG(0));
	}
	LOAD_SYMBOL(SYMBOL(Slisp, 443), ARG(0));	/* *UNINTERNED* */
	LOAD_NIL(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 444), ARG(0));	/* *PRESERVE-WHITESPACE* */
	LOAD_NIL(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 445), ARG(0));	/* *DOT-FLAG* */
	LOAD_NIL(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 446), ARG(0));	/* *PARENTHESIS-OPEN* */
	LOAD_NIL(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 448), ARG(0));	/* *STANDARD-READTABLE* */
	COPY(SYMVAL(Slisp, 12), ARG(1));	/* CHAR-CODE-LIMIT */
	LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(2));	/* T */
	LOAD_NIL(ARG(3));
	LOAD_NIL(ARG(4));
	LOAD_NIL(ARG(5));
	LOAD_NIL(ARG(6));
	LOAD_NIL(ARG(7));
	LOAD_SMALLFIXNUM(0, ARG(8));
	LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(9));	/* T */
	LOAD_NIL(ARG(10));
	make_array1(ARG(1));
	LOAD_NIL(ARG(2));
	LOAD_SYMBOL(SYMBOL(Slisp, 410), ARG(3));	/* READTABLE */
	COPY(ARG(1), ARG(4));
	LOAD_NIL(ARG(5));
	rt_make_struct(ARG(3), 3);
	COPY(ARG(3), ARG(1));
	COPY(ARG(1), ARG(2));
	readtable_syntax(ARG(2));
	LOAD_NIL(ARG(3));
	LOAD_CONS((CL_FORM *)&KIlisp[41], ARG(4));
	M1_1:;
	if(CL_ATOMP(ARG(4)))
	{
		LOAD_NIL(ARG(3));
		goto RETURN1;
	}
	COPY(ARG(4), ARG(5));
	COPY(GET_CAR(ARG(5)), ARG(3));
	if(CL_CHARP(ARG(3)))
	{
		COPY(ARG(3), ARG(5));
	}
	else
	{
		COPY(SYMVAL(Slisp, 58), ARG(5));	/* WRONG_TYPE */
		COPY(ARG(3), ARG(6));
		LOAD_SYMBOL(SYMBOL(Slisp, 18), ARG(7));	/* CHARACTER */
		Ferror(ARG(5), 3);
	}
	rt_char_code(ARG(5));
	LOAD_SYMBOL(SYMBOL(Slisp, 459), ARG(6));	/* WHITESPACE */
	COPY(ARG(2), ARG(7));
	COPY(ARG(5), ARG(8));
	rt_set_vref(ARG(6));
	COPY(ARG(4), ARG(5));
	COPY(GET_CDR(ARG(5)), ARG(4));
	goto M1_1;
	RETURN1:;
	LOAD_CHAR(ARG(3), '\b', ARG(3));
	rt_char_code(ARG(3));
	LOAD_SYMBOL(SYMBOL(Slisp, 460), ARG(4));	/* CONSTITUENT */
	COPY(ARG(2), ARG(5));
	COPY(ARG(3), ARG(6));
	rt_set_vref(ARG(4));
	LOAD_CHAR(ARG(3), '!', ARG(3));
	rt_char_code(ARG(3));
	M2_1:;
	COPY(ARG(3), ARG(4));
	LOAD_CHAR(ARG(5), '\177', ARG(5));
	rt_char_code(ARG(5));
	Fge(ARG(4), 2);
	if(CL_TRUEP(ARG(4)))
	{
		goto RETURN2;
	}
	LOAD_SYMBOL(SYMBOL(Slisp, 460), ARG(4));	/* CONSTITUENT */
	COPY(ARG(2), ARG(5));
	COPY(ARG(3), ARG(6));
	rt_set_vref(ARG(4));
	F1plus(ARG(3));
	goto M2_1;
	RETURN2:;
	LOAD_CHAR(ARG(3), '\\', ARG(3));
	rt_char_code(ARG(3));
	LOAD_SYMBOL(SYMBOL(Slisp, 461), ARG(4));	/* SINGLE-ESCAPE */
	COPY(ARG(2), ARG(5));
	COPY(ARG(3), ARG(6));
	rt_set_vref(ARG(4));
	LOAD_CHAR(ARG(3), '|', ARG(3));
	rt_char_code(ARG(3));
	LOAD_SYMBOL(SYMBOL(Slisp, 462), ARG(4));	/* MULTIPLE-ESCAPE */
	COPY(ARG(2), ARG(5));
	COPY(ARG(3), ARG(6));
	rt_set_vref(ARG(4));
	LOAD_CHAR(ARG(3), '#', ARG(3));
	LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(4));	/* T */
	COPY(ARG(1), ARG(5));
	make_dispatch_macro_character1(ARG(3));
	LOAD_CHAR(ARG(3), '#', ARG(3));
	LOAD_CHAR(ARG(4), '\\', ARG(4));
	LOAD_GLOBFUN(&Cchar_reader, ARG(5));
	COPY(ARG(1), ARG(6));
	set_dispatch_macro_character1(ARG(3));
	LOAD_CHAR(ARG(3), '#', ARG(3));
	LOAD_CHAR(ARG(4), '\'', ARG(4));
	LOAD_GLOBFUN(&Cfunction_reader, ARG(5));
	COPY(ARG(1), ARG(6));
	set_dispatch_macro_character1(ARG(3));
	LOAD_CHAR(ARG(3), '#', ARG(3));
	LOAD_CHAR(ARG(4), '(', ARG(4));
	LOAD_GLOBFUN(&Cvector_reader, ARG(5));
	COPY(ARG(1), ARG(6));
	set_dispatch_macro_character1(ARG(3));
	LOAD_CHAR(ARG(3), '#', ARG(3));
	LOAD_CHAR(ARG(4), ':', ARG(4));
	LOAD_GLOBFUN(&Cuninterned_reader, ARG(5));
	COPY(ARG(1), ARG(6));
	set_dispatch_macro_character1(ARG(3));
	LOAD_CHAR(ARG(3), '#', ARG(3));
	LOAD_CHAR(ARG(4), 'B', ARG(4));
	LOAD_GLOBFUN(&Cbinary_reader, ARG(5));
	COPY(ARG(1), ARG(6));
	set_dispatch_macro_character1(ARG(3));
	LOAD_CHAR(ARG(3), '#', ARG(3));
	LOAD_CHAR(ARG(4), 'O', ARG(4));
	LOAD_GLOBFUN(&Coctal_reader, ARG(5));
	COPY(ARG(1), ARG(6));
	set_dispatch_macro_character1(ARG(3));
	LOAD_CHAR(ARG(3), '#', ARG(3));
	LOAD_CHAR(ARG(4), 'X', ARG(4));
	LOAD_GLOBFUN(&Chex_reader, ARG(5));
	COPY(ARG(1), ARG(6));
	set_dispatch_macro_character1(ARG(3));
	LOAD_CHAR(ARG(3), '#', ARG(3));
	LOAD_CHAR(ARG(4), 'R', ARG(4));
	LOAD_GLOBFUN(&Cradix_reader, ARG(5));
	COPY(ARG(1), ARG(6));
	set_dispatch_macro_character1(ARG(3));
	LOAD_CHAR(ARG(3), '#', ARG(3));
	LOAD_CHAR(ARG(4), 'A', ARG(4));
	LOAD_GLOBFUN(&Carray_reader, ARG(5));
	COPY(ARG(1), ARG(6));
	set_dispatch_macro_character1(ARG(3));
	LOAD_CHAR(ARG(3), '#', ARG(3));
	LOAD_CHAR(ARG(4), 'S', ARG(4));
	LOAD_GLOBFUN(&Cstruct_reader, ARG(5));
	COPY(ARG(1), ARG(6));
	set_dispatch_macro_character1(ARG(3));
	LOAD_CHAR(ARG(3), '#', ARG(3));
	LOAD_CHAR(ARG(4), '+', ARG(4));
	LOAD_GLOBFUN(&Cfeature_plus_reader, ARG(5));
	COPY(ARG(1), ARG(6));
	set_dispatch_macro_character1(ARG(3));
	LOAD_CHAR(ARG(3), '#', ARG(3));
	LOAD_CHAR(ARG(4), '-', ARG(4));
	LOAD_GLOBFUN(&Cfeature_minus_reader, ARG(5));
	COPY(ARG(1), ARG(6));
	set_dispatch_macro_character1(ARG(3));
	LOAD_CHAR(ARG(3), '#', ARG(3));
	LOAD_CHAR(ARG(4), '|', ARG(4));
	LOAD_GLOBFUN(&Ccomment_block_reader, ARG(5));
	COPY(ARG(1), ARG(6));
	set_dispatch_macro_character1(ARG(3));
	LOAD_CHAR(ARG(3), '\'', ARG(3));
	LOAD_GLOBFUN(&Cquote_reader, ARG(4));
	LOAD_NIL(ARG(5));
	COPY(ARG(1), ARG(6));
	set_macro_character1(ARG(3));
	LOAD_CHAR(ARG(3), '(', ARG(3));
	LOAD_GLOBFUN(&Ccons_reader, ARG(4));
	LOAD_NIL(ARG(5));
	COPY(ARG(1), ARG(6));
	set_macro_character1(ARG(3));
	LOAD_CHAR(ARG(3), ')', ARG(3));
	LOAD_GLOBFUN(&Cright_parenthesis_reader, ARG(4));
	LOAD_NIL(ARG(5));
	COPY(ARG(1), ARG(6));
	set_macro_character1(ARG(3));
	LOAD_CHAR(ARG(3), ',', ARG(3));
	LOAD_GLOBFUN(&Ccomma_reader, ARG(4));
	LOAD_NIL(ARG(5));
	COPY(ARG(1), ARG(6));
	set_macro_character1(ARG(3));
	LOAD_CHAR(ARG(3), ';', ARG(3));
	LOAD_GLOBFUN(&Csemicolon_reader, ARG(4));
	LOAD_NIL(ARG(5));
	COPY(ARG(1), ARG(6));
	set_macro_character1(ARG(3));
	LOAD_CHAR(ARG(3), '\"', ARG(3));
	LOAD_GLOBFUN(&Cstring_reader, ARG(4));
	LOAD_NIL(ARG(5));
	COPY(ARG(1), ARG(6));
	set_macro_character1(ARG(3));
	LOAD_CHAR(ARG(3), '`', ARG(3));
	LOAD_GLOBFUN(&Cbackquote_reader, ARG(4));
	LOAD_NIL(ARG(5));
	COPY(ARG(1), ARG(6));
	set_macro_character1(ARG(3));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 449), ARG(0));	/* *READTABLE* */
	LOAD_NIL(ARG(1));
	LOAD_NIL(ARG(2));
	copy_readtable1(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 450), ARG(0));	/* *READTABLE-SYNTAX* */
	COPY(SYMVAL(Slisp, 449), ARG(1));	/* *READTABLE* */
	readtable_syntax(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 451), ARG(0));	/* *THE-READTABLE* */
	COPY(SYMVAL(Slisp, 449), ARG(1));	/* *READTABLE* */
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 48), SYMVAL(Slisp, 447));	/* *READTABLE-UNCHANGED* T */
	LOAD_GLOBFUN(&CZ166_lambda, ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 410), ARG(1));	/* READTABLE */
	COPY(ARG(0), ARG(2));
	LOAD_SYMBOL(SYMBOL(Slisp, 410), ARG(3));	/* READTABLE */
	LOAD_SYMBOL(SYMBOL(Slisp, 341), ARG(4));	/* STRUCT-PRINTER */
	LOAD_NIL(ARG(5));
	set_get1(ARG(2));
	LOAD_GLOBFUN(&Cmake_readtable, ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 410), ARG(1));	/* READTABLE */
	LOAD_GLOBFUN(&Cmake_readtable, ARG(2));
	LOAD_SYMBOL(SYMBOL(Slisp, 410), ARG(3));	/* READTABLE */
	LOAD_SYMBOL(SYMBOL(Slisp, 340), ARG(4));	/* STRUCT-CONSTRUCTOR */
	LOAD_NIL(ARG(5));
	set_get1(ARG(2));
	LOAD_SYMBOL(SYMBOL(Slisp, 468), ARG(0));	/* *PRINT-ARRAY* */
	LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(1));	/* T */
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 469), ARG(0));	/* *PRINT-BASE* */
	LOAD_SMALLFIXNUM(10, ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 470), ARG(0));	/* *PRINT-CASE* */
	LOAD_SYMBOL(SYMBOL(Slisp, 490), ARG(1));	/* UPCASE */
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 471), ARG(0));	/* *PRINT-CIRCLE* */
	LOAD_NIL(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 472), ARG(0));	/* *PRINT-ESCAPE* */
	LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(1));	/* T */
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 473), ARG(0));	/* *PRINT-GENSYM* */
	LOAD_SYMBOL(SYMBOL(Slisp, 48), ARG(1));	/* T */
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 474), ARG(0));	/* *PRINT-LENGTH* */
	LOAD_SMALLFIXNUM(50, ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 475), ARG(0));	/* *PRINT-LEVEL* */
	LOAD_SMALLFIXNUM(50, ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 476), ARG(0));	/* *PRINT-PRETTY* */
	LOAD_NIL(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 477), ARG(0));	/* *PRINT-RADIX* */
	LOAD_NIL(ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 504), ARG(0));	/* *ERROR-PRINT-LENGTH* */
	LOAD_SMALLFIXNUM(6, ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 505), ARG(0));	/* *ERROR-PRINT-LEVEL* */
	LOAD_SMALLFIXNUM(6, ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 677), ARG(0));	/* *GENSYM-PREFIX* */
	LOAD_SMSTR((CL_FORM *)&KIlisp[58], ARG(1));	/* G */
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 665), ARG(0));	/* *GENSYM-COUNTER* */
	LOAD_SMALLFIXNUM(0, ARG(1));
	Fset(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 678), ARG(0));	/* *GENTEMP-COUNTER* */
	LOAD_SMALLFIXNUM(0, ARG(1));
	Fset(ARG(0));
	LOAD_CONS((CL_FORM *)&KIlisp[60], ARG(0));
	COPY(SYMVAL(Slisp, 343), ARG(1));	/* *PACKAGE* */
	export1(ARG(0));
	LOAD_SYMBOL(SYMBOL(Slisp, 0), ARG(0));	/* MOST-POSITIVE-FIXNUM */
	LOAD_SMSTR((CL_FORM *)&KIlisp[63], ARG(1));	/* KEYWORD */
	COPY(ARG(1), ARG(2));
	Ffind_package(ARG(2));
	if(CL_TRUEP(ARG(2)))
	{
		COPY(ARG(2), ARG(1));
	}
	else
	{
		LOAD_NIL(ARG(2));
		LOAD_NIL(ARG(3));
		make_package1(ARG(1));
	}
	LOAD_SMSTR((CL_FORM *)&KIlisp[65], ARG(2));	/* LISP */
	COPY(ARG(2), ARG(3));
	Ffind_package(ARG(3));
	if(CL_TRUEP(ARG(3)))
	{
		COPY(ARG(3), ARG(2));
	}
	else
	{
		LOAD_NIL(ARG(3));
		LOAD_NIL(ARG(4));
		make_package1(ARG(2));
	}
	LOAD_SMSTR((CL_FORM *)&KIlisp[67], ARG(3));	/* RT */
	COPY(ARG(3), ARG(4));
	Ffind_package(ARG(4));
	if(CL_TRUEP(ARG(4)))
	{
		COPY(ARG(4), ARG(3));
	}
	else
	{
		LOAD_NIL(ARG(4));
		LOAD_NIL(ARG(5));
		make_package1(ARG(3));
	}
	LOAD_SMSTR((CL_FORM *)&KIlisp[69], ARG(4));	/* FFI */
	COPY(ARG(4), ARG(5));
	Ffind_package(ARG(5));
	if(CL_TRUEP(ARG(5)))
	{
		COPY(ARG(5), ARG(4));
	}
	else
	{
		LOAD_NIL(ARG(5));
		LOAD_NIL(ARG(6));
		make_package1(ARG(4));
	}
	Fvector(ARG(1), 4);
	rt_setup_symbols_iterator(ARG(0));
	LOAD_SMSTR((CL_FORM *)&KIlisp[71], ARG(0));	/* LISP */
	Ffind_package(ARG(0));
	COPY(ARG(0), SYMVAL(Slisp, 343));	/* *PACKAGE* */
}

static void Z166_lambda(CL_FORM *base)
{
	LOAD_SMSTR((CL_FORM *)&KIlisp[56], ARG(3));	/* #<readtable> */
	COPY(ARG(3), ARG(0));
	LOAD_SMALLFIXNUM(0, ARG(2));
	Flength(ARG(3));
	write_string1(ARG(0));
}

static void Z167_lambda(CL_FORM *base)
{
	LOAD_SMSTR((CL_FORM *)&KIlisp[2], ARG(3));	/* #<Package " */
	COPY(ARG(3), ARG(4));
	COPY(ARG(1), ARG(5));
	LOAD_SMALLFIXNUM(0, ARG(6));
	COPY(ARG(3), ARG(7));
	Flength(ARG(7));
	write_string1(ARG(4));
	COPY(ARG(0), ARG(3));
	Ppackage_name(ARG(3));
	COPY(ARG(3), ARG(4));
	COPY(ARG(1), ARG(5));
	LOAD_SMALLFIXNUM(0, ARG(6));
	COPY(ARG(3), ARG(7));
	Flength(ARG(7));
	write_string1(ARG(4));
	LOAD_SMSTR((CL_FORM *)&KIlisp[4], ARG(3));	/* "> */
	COPY(ARG(3), ARG(0));
	LOAD_SMALLFIXNUM(0, ARG(2));
	Flength(ARG(3));
	write_string1(ARG(0));
}
