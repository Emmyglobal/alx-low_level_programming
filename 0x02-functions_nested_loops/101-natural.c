#include <stdio.h>
#include "main.h"

/*
 * print_sum_mul_3 -> prints the sum of all the multiples of 3 0r 5
 * Return: Nothing
 */

void print_sum_mul_3(void)
{
	int i, sum = 0;

	for (i = 1; i < 10; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}

int main(void)
{
	print_sum_mul_3();
	return (0);
}
