#include "main.h"

/**
 * print_alphabet - Make a function prototype for print the alphabet
 *
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z' ; alpha++)
	{
		_putchar(alpha);
	}
	       _putchar('\n');
}
