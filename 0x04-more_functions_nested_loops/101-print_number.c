#include "main.h"

/**
 * print_number - > Prints an integer
 * @n: integer to be printed
 * Return: Null
 */

void print_number(int n)
{
	double inf = 1.0 / 0.0;

	if (n < inf)
		printf("%d\n", n);
}
