#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - > function that executes function given as a parameter
 * @array: int array parameter
 * @action: pointer to the function
 * @size: array size
 * return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	for (int i = 0; i < size; i++)
	{
		printf("%d \n", *array);
		array++;
	}
}
