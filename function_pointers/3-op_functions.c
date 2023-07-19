#include <stdlib.h>
#include <stdio.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

int op_add(int a, int b)
{
	int sum;

	sum = a + b;

	return (sum);
}

int op_sub(int a, int b)
{
	int dif;

	dif = a - b;

	return (dif);
}

int op_mul(int a, int b)
{
	int product;

	product = a * b;

	return (product);
}

int op_div(int a, int b)
{
	int result;

	result = a / b;

	return (result);
}

int op_mod(int a, int b)
{
	int rest;

	rest = a % b;

	return (rest);
}
