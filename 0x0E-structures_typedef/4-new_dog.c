#include "dog.h"
#include <stdlib.h>

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
		pta->name = name;
		pta->age = age;
		pta->owner = owner;
	}
	return (pta);
}
