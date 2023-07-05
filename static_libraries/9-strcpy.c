#include "main.h"

/**
 * _strcpy - check the code
 *
 *@dest: destination.
 *
 *@src: source.
 *
 * Return: cpy.
 */

char *_strcpy(char *dest, char *src)
{
	char *cpy = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (cpy);
}
