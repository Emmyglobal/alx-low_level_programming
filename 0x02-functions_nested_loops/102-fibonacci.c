#include <stdio.h>
#include "main.h"

/*
 * print_fibo - prints fibonacci sequence
 * Description: starts from 1 and 2 and prints first 50
 * Return: void.
 */

void print_fibo(void)
{
	long long int next, first = 1, second = 2;
	int i;

	next = first + second;

	printf("%lld, %lld, ", first, second);

	for (i = 3; i <= 50; i++)
	{
		if (i < 50)
		{
			printf("%lld, ", next);
			first = second;
			second = next;
			next = first + second;
		}
		else
			printf("%lld", next);
	}
}

/*
 * main - main function
 * Description: it runs the function
 * Return: 0;
 */

int main(void)
{
	print_fibo();
	printf("\n");
	return (0);
}
