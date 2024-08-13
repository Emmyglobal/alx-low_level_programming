#include "main.h"

/**
 * print_sign -> Prints the sign of a function
 * @n: The number whose sign is to be printed
 *
 * Return: 1 if +ve, 0 if zero and -1 if -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (1);
}
