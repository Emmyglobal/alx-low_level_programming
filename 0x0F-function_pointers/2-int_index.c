#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index -> function to search a number in an array
 * @array: array parameter
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used
 * Return: -1 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; c++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
