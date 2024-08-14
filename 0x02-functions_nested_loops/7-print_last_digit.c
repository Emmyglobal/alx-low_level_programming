#include "main.h"

/**
 * print_last_digit -> Prints the last digit of a number
 * @s: the last digit to be printed
 *
 * Return: 0 Always for success
 */
int print_last_digit(int s)
{
	int x;

	x = s % 10;
	if (x < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}
