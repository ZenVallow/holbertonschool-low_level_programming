#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - prints a array of char
 * @str: pointer to string.
 *
 *
 * Return: Null.
 */

char *_strdup(char *str)
{
	unsigned int line = 0;
	unsigned int i;
	char *cpy;


	if (str == NULL)
	{
		return (NULL);
	}
	while (str[line] != '\0')
	{
		line++;
	}
	cpy = malloc((line + 1) * sizeof(char));
	if (cpy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= line; i++)
	{
		cpy[i] = str[i];
	}
	cpy[i] = '\0';
	return (cpy);
}

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

	dog->name = _strdup(name);
	dog->age = age;
	dog->owner = _strdup(owner);

	return (dog);
}
