#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index -> function to search a number in an array
 * @array: array parameter
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (int c = 0; c < size; c++)
	{
		if (cmp(array[c]) != 0)
			return (c);
	}
	return (-1);
}
