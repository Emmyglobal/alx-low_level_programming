#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @unsigned int b: parameter
 * returna a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *t = malloc(b);

	if (t == NULL)
		exit(98);
	return (t);
}
