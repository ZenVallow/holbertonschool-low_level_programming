#include "main.h"

/**
 * _print_rev_recursion- check the code
 *
 *@s: string.
 *
 * Return: void.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{

	}
	else
	{
		s++;
		_print_rev_recursion(s);
		 s--;
		_putchar(*s);
	}
}