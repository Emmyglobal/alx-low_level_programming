#include "search_algos.h"
/**
 * binary_search - Function that searches for a value in a sorted array
 * of integers using the Binary Search Algorithm.
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where the value is lcoated.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, high, low, i;

	if (array == NULL)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%i%s", array[i], i == high ? "\n" : ", ");
		}
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			return (mid);
		}
	}

	return (-1);
}
