#include "main.h"

/**
 * more_numbers - check the code
 *
 * Return: void.
 */

void more_numbers(void)
{
        int a, b;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a < 10)
				_putchar(a + '0');
			else
				_putchar(a - 10 + '1');
		}
		_putchar('\n');
	}
}
