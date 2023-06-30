#include "main.h"

/**
 * _strcmp - check the code
 *
 *@s1: string 1.
 *
 *@s2: string 2.
 *
 * Return: Always sum.
 */

int _strcmp(char *s1, char *s2)
{
	int index = 0;
	int sum = 0;

	while (s1[index] && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
		{
			return (sum = s1[index] - s2[index]);
		}
		index++;
	}

	return (sum);
}
