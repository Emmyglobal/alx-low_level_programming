#include "search_algos.h"

size_t min(size_t a, size_t b);

/**
 * min - returns the minimum of two size_t values
 * @a: first value
 * @b: second value
 *
 * Return: `a` if lower or equal to `b`, `b` otherwise
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * jump_search - Function that searches for a value in sorted array of integers
 * using the Jump search algorithm.
 * @array: A pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for.
 *
 * Return: first index where the value is located or
 * -1 if value isn't present in array or array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t block, low, high;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	block = sqrt(size);
	high = 0;
	while (high < size && array[high] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		high, array[high]);
		low = high;
		high += block;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	while (low <= min(high, size - 1))
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[low] == value)
		return (low);
		low++;
	}

	return (-1);
}
