#include "main.h"
/**
 * print_last_digit - add print_last_digit return printer.
 *
 *@number: use a to print the absolute value
 *
 * Return: lastdigit
 */
int print_last_digit(int number)
{
	int lastdigit = number % 10;

	if (number >= 0)
	{
		_putchar('0' + lastdigit);
		return (lastdigit);

	}
	else
	{
		lastdigit = lastdigit * -1;
		_putchar('0' + lastdigit);
		return (lastdigit);
	}
}
