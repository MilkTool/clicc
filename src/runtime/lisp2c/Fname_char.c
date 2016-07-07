/* This file was generated by CLiCC 0.6.4 [obrep 1] */
#define __OBREP 1
#include <c_decl.h>
#include "sys.h"
#include "lisp.h"

void Fname_char(CL_FORM *base)
{
	Fstring(ARG(0));
	COPY(ARG(0), ARG(1));
	LOAD_SMSTR((CL_FORM *)&KClisp[164], ARG(2));	/* Space */
	LOAD_FIXNUM(ARG(3), 0, ARG(3));
	LOAD_NIL(ARG(4));
	LOAD_FIXNUM(ARG(5), 0, ARG(5));
	LOAD_NIL(ARG(6));
	string_equal1(ARG(1));
	if(CL_TRUEP(ARG(1)))
	{
		LOAD_CHAR(ARG(1), ' ', ARG(0));
	}
	else
	{
		COPY(ARG(0), ARG(1));
		LOAD_SMSTR((CL_FORM *)&KClisp[162], ARG(2));	/* Newline */
		LOAD_FIXNUM(ARG(3), 0, ARG(3));
		LOAD_NIL(ARG(4));
		LOAD_FIXNUM(ARG(5), 0, ARG(5));
		LOAD_NIL(ARG(6));
		string_equal1(ARG(1));
		if(CL_TRUEP(ARG(1)))
		{
			LOAD_CHAR(ARG(1), '\n', ARG(0));
		}
		else
		{
			COPY(ARG(0), ARG(1));
			LOAD_SMSTR((CL_FORM *)&KClisp[160], ARG(2));	/* Backspace */
			LOAD_FIXNUM(ARG(3), 0, ARG(3));
			LOAD_NIL(ARG(4));
			LOAD_FIXNUM(ARG(5), 0, ARG(5));
			LOAD_NIL(ARG(6));
			string_equal1(ARG(1));
			if(CL_TRUEP(ARG(1)))
			{
				LOAD_CHAR(ARG(1), '\b', ARG(0));
			}
			else
			{
				COPY(ARG(0), ARG(1));
				LOAD_SMSTR((CL_FORM *)&KClisp[158], ARG(2));	/* Tab */
				LOAD_FIXNUM(ARG(3), 0, ARG(3));
				LOAD_NIL(ARG(4));
				LOAD_FIXNUM(ARG(5), 0, ARG(5));
				LOAD_NIL(ARG(6));
				string_equal1(ARG(1));
				if(CL_TRUEP(ARG(1)))
				{
					LOAD_CHAR(ARG(1), '\t', ARG(0));
				}
				else
				{
					COPY(ARG(0), ARG(1));
					LOAD_SMSTR((CL_FORM *)&KClisp[156], ARG(2));	/* Linefeed */
					LOAD_FIXNUM(ARG(3), 0, ARG(3));
					LOAD_NIL(ARG(4));
					LOAD_FIXNUM(ARG(5), 0, ARG(5));
					LOAD_NIL(ARG(6));
					string_equal1(ARG(1));
					if(CL_TRUEP(ARG(1)))
					{
						LOAD_CHAR(ARG(1), '\n', ARG(0));
					}
					else
					{
						COPY(ARG(0), ARG(1));
						LOAD_SMSTR((CL_FORM *)&KClisp[154], ARG(2));	/* Page */
						LOAD_FIXNUM(ARG(3), 0, ARG(3));
						LOAD_NIL(ARG(4));
						LOAD_FIXNUM(ARG(5), 0, ARG(5));
						LOAD_NIL(ARG(6));
						string_equal1(ARG(1));
						if(CL_TRUEP(ARG(1)))
						{
							LOAD_CHAR(ARG(1), '\f', ARG(0));
						}
						else
						{
							COPY(ARG(0), ARG(1));
							LOAD_SMSTR((CL_FORM *)&KClisp[152], ARG(2));	/* Return */
							LOAD_FIXNUM(ARG(3), 0, ARG(3));
							LOAD_NIL(ARG(4));
							LOAD_FIXNUM(ARG(5), 0, ARG(5));
							LOAD_NIL(ARG(6));
							string_equal1(ARG(1));
							if(CL_TRUEP(ARG(1)))
							{
								LOAD_CHAR(ARG(1), '\r', ARG(0));
							}
							else
							{
								COPY(ARG(0), ARG(1));
								LOAD_SMSTR((CL_FORM *)&KClisp[150], ARG(2));	/* Rubout */
								LOAD_FIXNUM(ARG(3), 0, ARG(3));
								LOAD_NIL(ARG(4));
								LOAD_FIXNUM(ARG(5), 0, ARG(5));
								LOAD_NIL(ARG(6));
								string_equal1(ARG(1));
								if(CL_TRUEP(ARG(1)))
								{
									LOAD_CHAR(ARG(1), '\177', ARG(0));
								}
								else
								{
									LOAD_NIL(ARG(0));
								}
							}
						}
					}
				}
			}
		}
	}
}