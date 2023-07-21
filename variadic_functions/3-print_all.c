#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - Function who print anything
 *@format: array for print different types of characters or integers.
 *Return: void.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char c, *s;
	int index, i;
	float f;

	va_start(args, format);
	while (format && format[index])
	{
		i = 0;
		switch (format[index])
		{
			case 'c':
			c = va_arg(args, int);
			printf("%c", c);
			break;
			case 'i':
			i = va_arg(args, int);
			printf("%d", i);
			break;
			case 'f':
			f = va_arg(args, double);
			printf("%f", f);
			break;
			case 's':
			s = va_arg(args, char*);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		}
		if (format[index + 1] != '\0' && (format[index] == 'c' ||
		format[index] == 'i' || format[index] == 'f' || format[index] == 's'))
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(args);
}
