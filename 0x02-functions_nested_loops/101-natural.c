#include <stdio.h>
#include "main.h"

/*
 * print_sum_mul_3 - prints the sum
 * Description: sum of multiples of 3 0r 5 below 1024
 * Return: void.
 */

void print_sum_mul_3(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}

/*
 * main - runs the header function
 * Description: a function that runs our function
 * Return: Always 0.
 */

int main(void)
{
	print_sum_mul_3();
	return (0);
}
