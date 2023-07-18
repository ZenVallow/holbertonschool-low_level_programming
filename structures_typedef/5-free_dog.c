#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - write a function for free the memory
 *
 *@d: pointer to dog
 *
 * Return: void.
 */

void free_dog(dog_t *d)
{
	if (d == NULL)

		return;

	free(d->name);
	free(d->owner);
	free(d);
}
