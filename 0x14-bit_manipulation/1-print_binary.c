#include "main.h"

/**
 * print_binary -> Prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int i, counts = 0;
	unsigned long int current;

	for (i = 63; 1 >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			counts++;
		}
		else if (counts)
			_putchar('0');
	}
	if (!counts)
		_putchar('0');
}
