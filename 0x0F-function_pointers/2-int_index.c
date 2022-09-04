#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index -> function to search a number in an array
 * @array: array parameter
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used
 * return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL)
		return;
	scanf("%d", &cmp);
	for (int c = 0; c < size; c++)
	{
		if (array[c] == cmp)
		{
			printf("%d \n", cmp);
			break;
		}
		return (0);
	}
	if (int c == size || size <= 0)
		printf("failed");
	return (-1);
}
