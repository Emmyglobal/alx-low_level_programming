#include "main.h"

/**
 * reverse_array -> Reverses the content of an array of integers
 * @a: array to reverse
 * @n: number of elements of array
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
