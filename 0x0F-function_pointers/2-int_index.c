#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer.
 * @array: array of integers to be searched
 * @size: size of the array
 * @cmp: pointer to function that compares values
 *
 * Return: index of element that matched or -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
