#include "main.h"

/**
 * print_diagsums -> prints the sum of the two diagonals of a square matrix
 * @a: first matrix
 * @size: second matrix
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i, major_sum = 0, minor_sum = 0;

	for (i = 0; i < size; i++)
	{
		major_sum += a[i * size + i];
		minor_sum += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", major_sum, minor_sum);
}
