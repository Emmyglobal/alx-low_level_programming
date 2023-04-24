#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - gives information about dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: Gives the information about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
