#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize dog structure
 *
 *@d: pointer to the struct dog variable
 *
 *@name: name of the dog
 *
 *@age: age of the dog
 *
 *@owner: owner of the dog
 *
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

		d->name = name;
		d->age = age;
		d->owner = owner;
}
