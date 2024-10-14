#include <stdio.h>

/**
 * main -> Entry point
 * Description:prints the first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: always 0 for success
 */

int main(void)
{
	long int i, next, first = 1, second = 2;

	printf("%ld, %ld, ", first, second);
	for (i = 0; i <= 47; i++)
	{
		next = second + first;
		printf("%ld", next);
		if (i != 47)
			printf(", ");
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}
