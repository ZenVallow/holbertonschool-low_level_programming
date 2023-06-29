#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)

{       int index = 0;

	for (index = 0; index < n && src[index] != '\0'; index++)
		{

			dest[index] = src[index];
		}

        for (; index < n; index++)
	{
		dest[index] = '\0';
	}

	return dest;
}
