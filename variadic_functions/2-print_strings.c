#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints a strings
 *
 * @separator: string who be printed between numbers
 *
 * @n: numbers of integers
 *
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	const char *str;

	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}

	}

	va_end(args);
	printf("\n");

}
