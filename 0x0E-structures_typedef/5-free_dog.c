#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * free_dog -> frees a dog structure
 * @d: pointer to the dod to be freed
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
