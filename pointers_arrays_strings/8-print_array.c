#include "main.h"
#include "stdio.h"

/**
 * print_array - check the code for
 *
 *@a:
 *
 *@n: number
 *
 *
 * Return: void.
 */

void print_array(int *a, int n)

{        int loop;

	for (loop = 0; loop < n; loop++)

		if (loop < n - 1)
		{
			printf("%d, ", a[loop]);
		}

		else
		{
			printf("%d", a[loop]);
		}
	printf("\n");
}
