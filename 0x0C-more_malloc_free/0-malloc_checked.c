#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using a pointer
 * @b:the number of bytes to be allocate
 * return a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *t = malloc(b);

	if (t == NULL)
		exit(98);

	return (t);
}
