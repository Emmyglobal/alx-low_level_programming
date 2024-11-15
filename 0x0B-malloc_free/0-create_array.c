#include "main.h"
#include <stdlib.h>

/**
 * create_array -> creates an array of chars and initializes it with
 * it with specific char.
 * @size: the specific size
 * @c: array
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = (char *)malloc(size * sizeof(1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
