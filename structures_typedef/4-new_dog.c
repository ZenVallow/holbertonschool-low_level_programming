#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creation of new dog
 *
 *@name: pointer for the name of the dog
 *
 *@age: age of the dog
 *
 *@owner: pointer to the owner of the dog
 *
 *
 * Return: dog
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
