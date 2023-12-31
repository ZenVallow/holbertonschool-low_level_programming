#include "main.h"
#include <stdlib.h>

/**
 * create_array - prints a array of char
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Null.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);
	unsigned int i;

	if (ptr == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}

		return (ptr);
	}

}
