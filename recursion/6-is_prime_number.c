#include "main.h"

/**
 * prime_recursive_number - check the code
 *
 *@n: number.
 *
 *@div: division.
 *
 * Return: check the code.
 */
int prime_recursive_number(int n, int div)
{
	if (n < 2 || n % div == 0)
	{
		return (0);
	}
	else if (div * div > n)
	{
		return (1);
	}
	else
	{
		return (prime_recursive_number(n, div + 1));


	}
}

/**
 * is_prime_number - check the code
 *
 *@n: number.
 *
 * Return: check the code.
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (prime_recursive_number(n, 2));
	}
}
