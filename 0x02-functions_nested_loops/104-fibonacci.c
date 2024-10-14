#include <stdio.h>

/**
 * main -> Entry point
 * Description: Prints the first 98 fibonacci sequence
 *
 * Return: 0 Always for success
 */

int main(void)
{
	unsigned int i, next, first = 1, second = 2;

	printf("%u, %u, ", first, second);
	for (i = 0; i <= 95; i++)
	{
		next = first + second;
		printf("%u", next);
		if (i != 95)
			printf(", ");
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}
