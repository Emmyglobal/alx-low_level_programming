#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog.
 * @d: The struct dog to be printed.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
	}
}
