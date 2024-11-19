#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -> Allocates memory using malloc
 * @b: size of memory to be allocated
 *
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *pta;

	pta = malloc(b);
	if (pta == NULL)
		exit(98);
	return (pta);
}
