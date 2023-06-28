#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void puts_half(char *str)

{
	int a = 0;

	while (str[a] != '\0')

	{
		if (a >= 5)
		_putchar(str[a]);
		a++;
	}

	_putchar('\n');
}
