#include <stdlib.h>
#include "main.h"

/**
 *_calloc - allocates memory for an array
 *
 *@nmemb: numero memory bytes.
 *
 *@size: taille.
 *
 * Return: ptr.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *ptr2;
	unsigned int totalsize;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr != NULL)
	{
		ptr2 = ptr;
		totalsize = nmemb * size;

		for (i = 0; i < totalsize; i++)
		{
			ptr2[i] = 0;
		}
	}

	return (ptr);
}
