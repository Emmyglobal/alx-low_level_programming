#include <stdio.h>
#include "main.h"
#include <stddef.h>

/**
 * init_dog -> Initialize a variable of type struct dog
 * @d: pointer to the structure
 * @name: name parameter
 * @age: age parameter
 * @owner: owner parameter
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
