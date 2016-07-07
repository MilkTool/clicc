/* This file was generated by CLiCC 0.6.5 [OBREP 2] */
#include <c_decl.h>
#if OBREP != 2
	#error "Wrong OBREP!"
#endif
#include "sys.h"
#include "lisp.h"

void vector_substitute(CL_FORM *base)
{
	COPY(ARG(7), ARG(12));
	COPY(ARG(2), ARG(13));
	array_element_type_internal(ARG(13));
	to_element_type(ARG(13));
	LOAD_NIL(ARG(14));
	LOAD_NIL(ARG(15));
	LOAD_NIL(ARG(16));
	LOAD_NIL(ARG(17));
	LOAD_NIL(ARG(18));
	LOAD_SMALLFIXNUM(0, ARG(19));
	LOAD_NIL(ARG(20));
	LOAD_NIL(ARG(21));
	make_array1(ARG(12));
	COPY(ARG(5), ARG(13));
	M1_1:;
	COPY(ARG(13), ARG(14));
	COPY(ARG(8), ARG(15));
	Fnumeql(ARG(14), 2);
	if(CL_TRUEP(ARG(14)))
	{
		goto RETURN1;
	}
	LOAD_BOOL(CL_SMVECP(ARG(2)), ARG(14));
	if(CL_TRUEP(ARG(14)))
	{
		goto THEN1;
	}
	else
	{
		COPY(ARG(2), ARG(15));
		LOAD_SYMBOL(SYMBOL(Slisp, 150), ARG(16));	/* COMPLEX-VECTOR */
		rt_struct_typep(ARG(15));
	}
	if(CL_TRUEP(ARG(15)))
	{
		THEN1:;
	}
	else
	{
		COPY(SYMVAL(Slisp, 58), ARG(14));	/* WRONG_TYPE */
		COPY(ARG(2), ARG(15));
		LOAD_SYMBOL(SYMBOL(Slisp, 47), ARG(16));	/* VECTOR */
		Ferror(ARG(14), 3);
	}
	COPY(ARG(2), ARG(14));
	COPY(ARG(13), ARG(15));
	Frow_major_aref(ARG(14));
	COPY(ARG(14), ARG(15));
	COPY(ARG(12), ARG(16));
	COPY(ARG(13), ARG(17));
	rt_set_vref(ARG(15));
	COPY(ARG(4), ARG(14));
	Fplus(ARG(13), 2);
	goto M1_1;
	RETURN1:;
	LOAD_NIL(ARG(14));
	M2_1:;
	COPY(ARG(13), ARG(15));
	COPY(ARG(9), ARG(16));
	Fnumeql(ARG(15), 2);
	if(CL_TRUEP(ARG(15)))
	{
		goto THEN2;
	}
	else
	{
		COPY(ARG(10), ARG(16));
		Fzerop(ARG(16));
	}
	if(CL_TRUEP(ARG(16)))
	{
		THEN2:;
		goto RETURN2;
	}
	COPY(ARG(2), ARG(15));
	COPY(ARG(13), ARG(16));
	COPY(ARG(15), ARG(17));
	LOAD_BOOL(CL_SMVECP(ARG(17)), ARG(18));
	if(CL_TRUEP(ARG(18)))
	{
		goto THEN3;
	}
	else
	{
		COPY(ARG(17), ARG(19));
		COPY(ARG(19), ARG(20));
		LOAD_SYMBOL(SYMBOL(Slisp, 150), ARG(21));	/* COMPLEX-VECTOR */
		rt_struct_typep(ARG(20));
	}
	if(CL_TRUEP(ARG(20)))
	{
		THEN3:;
	}
	else
	{
		COPY(SYMVAL(Slisp, 58), ARG(17));	/* WRONG_TYPE */
		COPY(ARG(15), ARG(18));
		LOAD_SYMBOL(SYMBOL(Slisp, 47), ARG(19));	/* VECTOR */
		Ferror(ARG(17), 3);
	}
	COPY(ARG(15), ARG(14));
	COPY(ARG(16), ARG(15));
	Frow_major_aref(ARG(14));
	COPY(ARG(3), ARG(15));
	COPY(ARG(1), ARG(16));
	if(CL_TRUEP(ARG(11)))
	{
		COPY(ARG(11), ARG(17));
		COPY(ARG(14), ARG(18));
		Ffuncall(ARG(17), 2);
		mv_count = 1;
	}
	else
	{
		COPY(ARG(14), ARG(17));
	}
	Ffuncall(ARG(15), 3);
	mv_count = 1;
	if(CL_TRUEP(ARG(15)))
	{
		COPY(ARG(10), ARG(15));
		F1minus(ARG(15));
		COPY(ARG(15), ARG(10));
		COPY(ARG(0), ARG(15));
	}
	else
	{
		COPY(ARG(14), ARG(15));
	}
	COPY(ARG(15), ARG(16));
	COPY(ARG(12), ARG(17));
	COPY(ARG(13), ARG(18));
	rt_set_vref(ARG(16));
	COPY(ARG(13), ARG(15));
	COPY(ARG(4), ARG(16));
	Fplus(ARG(15), 2);
	COPY(ARG(15), ARG(13));
	goto M2_1;
	RETURN2:;
	M3_1:;
	COPY(ARG(13), ARG(14));
	COPY(ARG(6), ARG(15));
	Fnumeql(ARG(14), 2);
	if(CL_TRUEP(ARG(14)))
	{
		goto RETURN3;
	}
	LOAD_BOOL(CL_SMVECP(ARG(2)), ARG(14));
	if(CL_TRUEP(ARG(14)))
	{
		goto THEN4;
	}
	else
	{
		COPY(ARG(2), ARG(15));
		LOAD_SYMBOL(SYMBOL(Slisp, 150), ARG(16));	/* COMPLEX-VECTOR */
		rt_struct_typep(ARG(15));
	}
	if(CL_TRUEP(ARG(15)))
	{
		THEN4:;
	}
	else
	{
		COPY(SYMVAL(Slisp, 58), ARG(14));	/* WRONG_TYPE */
		COPY(ARG(2), ARG(15));
		LOAD_SYMBOL(SYMBOL(Slisp, 47), ARG(16));	/* VECTOR */
		Ferror(ARG(14), 3);
	}
	COPY(ARG(2), ARG(14));
	COPY(ARG(13), ARG(15));
	Frow_major_aref(ARG(14));
	COPY(ARG(14), ARG(15));
	COPY(ARG(12), ARG(16));
	COPY(ARG(13), ARG(17));
	rt_set_vref(ARG(15));
	COPY(ARG(4), ARG(14));
	Fplus(ARG(13), 2);
	goto M3_1;
	RETURN3:;
	COPY(ARG(12), ARG(0));
}
