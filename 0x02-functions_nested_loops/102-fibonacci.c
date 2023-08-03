#include <stdio.h>
#include "main.h"

/*
 * print_fibo - prints fibonacci sequence
 * Description: starts from 1 and 2 and prints first 50
 * Return: void.
 */

void print_fibo(void)
{
	int first = 1, second = 2, i, next;

	next = first + second;

	printf("%d, %d, ", first, second);

	for (i = 3; i <= 50; i++)
	{
		if (i < 50)
		{
			printf("%d, ", next);
			first = second;
			second = next;
			next = first + second;
		}
		else
			printf("%d", next);
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
