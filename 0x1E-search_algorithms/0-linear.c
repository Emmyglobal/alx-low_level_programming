#include "search_algos.h"

/**
 * int linear_search - > Searches for a value in an array of integers using linear search
 * int *array: array pointer
 * size_t size: size of array
 * int value: value of array elements
 * Return: -1
 */

int linear_search(int *array, size_t size, int value)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
