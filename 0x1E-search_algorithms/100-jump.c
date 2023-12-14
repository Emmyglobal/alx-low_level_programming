#include "search_algos.h"

/**
 * jump_search -> Searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: value to be searched
 *
 * Return: first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), prev = 0, current = step, i;

	if (array == NULL || size == 0)
		return (-1);

	while (current < size && array[current] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", current, array[current]);
		prev = current;
		current += step;
	}

	 printf("Value found between indexes [%ld] and [%ld]\n", prev, current);

	for (i = prev; i < size && i <= current; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
