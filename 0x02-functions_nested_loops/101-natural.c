#include <stdio.h>
#include "main.h"

/*
 * print_sum_mul_3 -> prints the sum of all the multiples of 3 0r 5
 * Return: Nothiing
 */

void print_sum_mul_3()
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}
	printf("The sum is %d\n", sum);
}

int main()
{
	print_sum_mul_3();
	return (0);
}
