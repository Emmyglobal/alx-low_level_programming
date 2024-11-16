#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -> frees a 2 dimensional grid previously created by
 * your alloc_grid function
 * @grid: the grid
 * @height: the height
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
