#include <stdio.h>
#include "main.h"

/**
 * print_fibo2 - prints fibonacci sequence
 * Description: excluding 40 000
 * Return: void
 */
void print_fibo2()
{
	long unsigned int first = 1, second = 2, next, i, sum = 2;

	next = first + second;
	for (i = 3; i <= 98; i++)
	{
		if (next < 4000000)
		{
			first = second;
			second = next;
			next = first + second;
			if(next % 2 == 0)
			{
				sum += next;
			}
		}
	}
	printf("%lu", sum);

}

/**
 * main - entry point
 *
 * Return: void
 */
void main()
{
	print_fibo2();
	printf("\n");
}
