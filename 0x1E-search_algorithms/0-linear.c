#include "search_algos.h"

/**
 * int linear_search - > Searches for a value in an array of integers
 * using linear search
 * @array: array pointer
 * @size: size of array
 * @value: value of array elements
 *
 * Return: -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
