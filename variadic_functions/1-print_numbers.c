#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints a list of numbers
 *
 * @separator: string who be printed between numbers
 *
 * @n: numbers of integers
 *
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int number;

	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(args, int);

		printf("%d", number);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}

	}

	va_end(args);
	printf("\n");

}
