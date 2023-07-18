#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}

#include "dog.h"
#include <stdlib.h>

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
