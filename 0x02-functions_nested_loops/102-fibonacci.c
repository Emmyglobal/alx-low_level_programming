#include <stdio.h>
#include "main.h"

/*
 * print_fibo - prints fibonacci sequence
 * Description: starts from 1 and 2 and prints first 50
 * Return: void.
 */

void print_fibo(void)
{
	unsigned long next, first = 1, second = 2;
	int i;

	next = first + second;

	printf("%lu, %lu, ", first, second);

	for (i = 3; i <= 50; i++)
	{
		if (i < 50)
		{
			printf("%lu, ", next);
			first = second;
			second = next;
			next = first + second;
		}
		else
			printf("%lu", next);
	}
}

/*
 * main - Entry point
 * Description: prints fibonacci
 * Return: Always 0;
 */

int main(void)
{
	print_fibo();
	printf("\n");
	return (0);
}
