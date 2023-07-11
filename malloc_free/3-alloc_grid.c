#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function who return pointer 2 dimensional array of integers
 *
 *@width: ligne.
 *
 *@height: colonne.
 *
 * Return: NULL or tab.
 */

int **alloc_grid(int width, int height)
{
	int **tab;
	int x, y;

	if (width <= 0 || height <= 0)

		return (NULL);

	tab = malloc(sizeof(int *) * height);

		if (tab == NULL)

			return (NULL);

	for (x = 0; x < height; x++)
	{

		tab[x] = malloc(sizeof(int) * width);

	if (tab[x] == NULL)
		{

	for (y = 0; y < x; y++)
		free(tab[y]);
	free(tab);
	return (NULL);

		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			tab[x][y] = 0;
		}
	}
	return (tab);
}
