#include "main.h"

/**
 * sqrt_add - check the code
 *
 *@n: number.
 *
 *@g: int.
 *
 * Return: check the code.
 */

int sqrt_add(int n, int g)
{
	if (g * g == n)
		return (g);

	else if (g * g > n)
		return (-1);

	else
		return (sqrt_add(n, g + 1));
}

/**
 * _sqrt_recursion - check the code
 *
 *@n: number.
 *
 * Return: check the code.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_add(n, 0));
	}
}
