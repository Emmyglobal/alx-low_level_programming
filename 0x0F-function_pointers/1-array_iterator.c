#include <stdio.h>

/*
 * array_iterator - > a function that executes function given as a parameter
 * @ *array: integer parameter
 * @void (*action)(int): array parameter
 * @size_t size: array size
 * return: always 0
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
