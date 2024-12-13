#include "main.h"

/**
 * print_binary -> prints the binary representation of a number
 * @n: decimal number to be converted
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(n) * 8 - 1);
	int started = 0;

	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
			started = 1;
		}
		else if (started)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
	if (!started)
		_putchar('0');
}
