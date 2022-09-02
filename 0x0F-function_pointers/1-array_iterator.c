#include <stdio.h>

/*
 * 1-array_iterator - > a function that executes function given as a parameter
 * @int *array, size_t size: parameter 1;
 * @void (*action)(int): parameter 2;
 * @size_t size: array size;
 * return: 0;
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	for (int i = 0; i < size; i++)
	{
		printf("action[%d]: %d \n", i,  *array);
		array++;
	}
	return (0);
}
