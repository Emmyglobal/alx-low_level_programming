#include "main.h"

/**
 * print_number - > Prints an integer
 * @n: integer to be printed
 * Return: Null
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
