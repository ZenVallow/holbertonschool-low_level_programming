#include "main.h"

/**
 * reverse_array - print an array of integers
 *
 *@a: an array of integers.
 *
 *@n: the number of elements to swap
 *
 * Return: void.
 */

void reverse_array(int *a, int n)

{
	int temp, num;

	for (num = 0; num < n / 2; num++)

	{
	       temp = a[num];
	       a[num] = a[n - 1 - num];
	       a[n - 1 - num] = temp;
	}
}
