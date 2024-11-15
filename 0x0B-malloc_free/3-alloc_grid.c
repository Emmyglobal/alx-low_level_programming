#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -> Returns a pointer to a 2 dimensional array of integers
 * @width: the width
 * @height: the height
 * Return: a pointer to array of integer
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **pta;

	if (width <= 0 || height <= 0)
		return (NULL);

	pta = malloc(height * sizeof(int *));
	if (pta == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		pta[i] = malloc(width * sizeof(int));
		if (pta[i] == NULL)
		{
		for (j = 0; j < i; j++)
			free(pta[j]);
		free(pta);
		return (NULL);
		}
		for (j = 0; j < width; j++)
			pta[i][j] = 0;
	}
	return (pta);
}
