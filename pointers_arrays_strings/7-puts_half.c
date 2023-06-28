#include "main.h"
#include "2-strlen.c"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void puts_half(char *str)

{
	int index = 0;
	int length = _strlen(str);


        if (length % 2 == 1)
		length--;

	while (str[index] != '\0')
	{
		if (index >= length /2)
		_putchar(str[index]);
		index++;
	}

	_putchar('\n');
}
