#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog -> creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: poiter to the dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pta;

	pta = malloc(sizeof(dog_t));
	if (pta != NULL)
	{
		pta->name = malloc(strlen(name) + 1);
		if (pta->name == NULL)
		{
			free(pta);
			return (NULL);
		}
		strcpy(pta->name, name);

		pta->age = age;

		pta->owner = malloc(strlen(owner) + 1);
		if (pta->owner == NULL)
		{
			free(pta);
			return (NULL);
		}
		strcpy(pta->owner, owner);
	}
	return (pta);
}
