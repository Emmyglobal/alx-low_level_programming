#include <stdio.h>

/**
 * main -> Entry point
 * Description: Prints the first 98 fibonacci sequence
 *
 * Return: 0 Always for success
 */

int main(void)
{
	unsigned long int i, high = 0, high1 = 0, next, nexth, first = 1, second = 2;

	printf("%lu, %lu", first, second);
	for (i = 0; i <= 95; i++)
	{
		next = (first + second) % 10000000000;
		nexth = high + high1 + (first + second) / 10000000000;
		if (nexth > 0)
			printf(", %lu%010lu", nexth, next);
		else
			printf(", %lu", next);
		first = second;
		high = high1;
		second = next;
		high1 = nexth;
	}
	printf("\n");
	return (0);
}
