#include "main.h"

/**
 * swap_int - check the code
 *
 *@a: one swapper of integer
 *
 *@b: same
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
