#include "main.h"

/**
 * _sqrt_recursion - check the code
 *
 *@n: integer.
 *
 * Return: check the code.
 */

int sqrt_helper(int n, int guess)
{
        if (guess * guess == n)
        {
                return guess;
        }
        else if (guess * guess > n)
        {
                return -1;
        }
        else
        {
                return sqrt_helper(n, guess + 1);
        }
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_helper(n, 0));
	}
}
