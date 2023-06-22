#include "main.h"
/**
 * jack_bauer - add printer of every hours and every minutes of a day of jack.
 *
 *@int: print the value of time with hour and min.
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour, min;

	for (hour = 0; hour <= 23; hour++)
	{
		for (min = 0; min < 60; min++)
		{

		_putchar('0' + hour / 10);
		_putchar('0' + hour % 10);
		_putchar(':');
		_putchar('0' + min / 10);
		_putchar('0' + min % 10);
		_putchar('\n');

		}
	}
}
