#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that give a parameter on each element of an array
 *
 * @array: array of integer
 *
 * @size: size of the array
 *
 * @action: pointer to a function
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
	{
		return;
	}

	if (action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
