#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
