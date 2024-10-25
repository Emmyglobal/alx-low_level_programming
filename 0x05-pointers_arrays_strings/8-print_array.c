#include "main.h"

/**
 * print_array -> Prints n element of an array
 * @a: The array to be printed
 * @n: number of elements to be printed
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i <= n)
	{
		printf("%d ", a[i]);
		i++;
	}
	printf("\n");
}
