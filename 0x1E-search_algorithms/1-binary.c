#include "search_algos.h"

/**
 * binary_search - > Searches for a value in a sorted array of integers
 * using the Binary Search Algorithm.
 * @array: pointer to the first element of the array to be searched
 * @size: Number of elements in the array
 * @value: value to be searched
 *
 * Return: index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t lowest, i, middle, highest;

	if (array == NULL)
		return (-1);

	lowest = 0;
	highest = size - 1;

	while (lowest <= highest)
	{
		middle = (lowest + highest) / 2;
		printf("Searching in array: ");
		for (i = lowest; i <= highest; i++)
			printf("%i%s", array[i], i == highest ? "\n" : ", ");
		if (array[middle] < value)
			lowest = middle + 1;
		else if (array[middle] > value)
			highest = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
