#include <stdlib.h>

/**
 * array_range -> creates an array of integers
 * @min: minimum order
 * @max: maximum order
 *
 * Rerturn: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *pta, i;

	if (min > max)
		return (NULL);
	pta = malloc((max - min + 1) * sizeof(int));
	if (pta == NULL)
		return (NULL);

	for (i = 0; i < (max - min +1); i++)
		pta[i] = min + i;
	return (pta);
}
