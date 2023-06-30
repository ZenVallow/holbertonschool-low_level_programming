#include "main.h"

/**
 * _strncpy - check the code
 *
 * Return: dest.
 *
 *@dest: destination.
 *
 *@src: source.
 *
 *@n: integer.
 */

char *_strncpy(char *dest, char *src, int n)
{

	int index = 0;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{

		dest[index] = src[index];
	}

	for (; index < n; index++)
	{
		dest[index] = '\0';
	}

	return (dest);
}
