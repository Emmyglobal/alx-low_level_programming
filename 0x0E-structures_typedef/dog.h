#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stddef.h>

/**
 * struct dog -> a new type struct with name, age and owner
 * @name: name of dog
 * @age: age of dog
 * @owner: the owner of dog
 *
 * Description: The structure of a dog.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
