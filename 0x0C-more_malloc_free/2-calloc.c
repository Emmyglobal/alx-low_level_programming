#include <stdlib.h>

/**
 * _calloc -> function that allocates memory for an array
 * @nmemb: given array
 * @size: size of array
 *
 * Return: pointer to the memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pta;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pta = malloc(nmemb * size);
	if (pta == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		pta[i] = 0;
	return (pta);
}
