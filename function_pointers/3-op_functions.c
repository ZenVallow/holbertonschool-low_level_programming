#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - operator who made a addition
 *
 * @a: Number 1
 *
 * @b: Number 2
 *
 * Return : sum
 */

int op_add(int a, int b)
{
	int sum;

	sum = a + b;

	return (sum);
}

/**
 * op_sub - operator who made a substraction
 *
 *@a: Number 1
 *
 *@b: Number 2
 *
 * Return : dif.
 */
int op_sub(int a, int b)
{
	int dif;

	dif = a - b;

	return (dif);
}

/**
 * op_mul - operator who made a multiplication
 *
 * @a: Number 1
 *
 * @b: Number 2
 *
 * Return: product.
 */

int op_mul(int a, int b)
{
	int product;

	product = a * b;

	return (product);
}

/**
 *
 * op_div - operator who made a division
 *
 * @a: Number 1
 *
 * @b: Number 2
 *
 * Return: result
 */

int op_div(int a, int b)
{
	int result;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = a / b;

	return (result);
}

/**
 * op_mod: operator who made a euclidian division
 *
 * @a: Number 1
 *
 * @b: Number 2
 *
 * Return: rest
 */

int op_mod(int a, int b)
{
	int rest;

	if (b == 0)
	{
		printf("Error");
		exit(100);
	}

	rest = a % b;

	return (rest);
}
