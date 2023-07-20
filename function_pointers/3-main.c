#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 *
 *@argc: Number of arguments
 *
 *@argv: Array of strings who contains a value.
 *
 *
 *
 *
 * Return: Nothing.
*/

	int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op)(int, int);

	if (argc != 4)
{
	printf("Error\n");
	exit(98);
}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op = get_op_func(argv[2]);

	if (op == NULL)
{
	printf("Error\n");
	exit(99);
}

	result = op(num1, num2);
	printf("%d\n", result);
	exit(0);
}
