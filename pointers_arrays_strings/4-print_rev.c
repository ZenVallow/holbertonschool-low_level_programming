#include "main.h"

/**
 * print_rev - check the code
 *
 *@s: reverse
 *
 * Return: void.
 */

void print_rev(char *s)
{
	char *rev = s;

	while (*rev != '\0')
	{
		rev++;
	}
	rev--;
	while (rev >= s)
	{
		_putchar(*rev);
		rev--;
	}
	_putchar('\n');
}
