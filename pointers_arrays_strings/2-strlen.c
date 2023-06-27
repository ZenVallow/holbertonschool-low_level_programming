#include "main.h"

/**
 * _strlen - check the code
 *
 * Return: Always i.
 *
 *@i: value of index
 */

int _strlen(char *s)
{
	int i = '0';

	while(s[i] != '\0')
	{

		i++;
	}

	return (i);
}
