#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */

	typedef struct FormatType {
		char type;
		void (*print_function)(va_list);
	} FormatType;


	void print_char(va_list args)
	{
		char c;
		c = va_arg(args, int);
		printf("%c", c);
	}

	void print_int(va_list args)
	{
		int i;
		i = va_arg(args, int);
		printf("%d", i);
	}

	void print_float(va_list args)
	{
		float f;
		f = va_arg(args, double);
		printf("%f", f);
	}

	void print_string(va_list args)
	{
		char *s;
		s = va_arg(args, char*);
	}

	void print_all(const char * const format, ...)
	{

	va_list args;
	va_start(args, format);

	FormatType formats[] = {

		{ 'c', print_char },
		{ 'i', print_int },
		{ 'f', print_float },
		{ 's', print_string },
	};

	}

