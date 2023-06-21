#include "main.h"

/**
 * print_alphabet_x10 - Make a function prototype for print the alphabet x 10
 *
 */

void print_alphabet_x10(void)
{
	char a, b;

	for (b = 0; b < 10; b++)
	{
		for (a = 'a'; a <= 'z' ; a++)
			_putchar(a);
		     _putchar('\n');
	}
}
