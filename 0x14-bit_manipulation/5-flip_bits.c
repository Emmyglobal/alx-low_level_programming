#include "main.h"

/**
 * flip_bits -> counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to chandge
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, num = 0;
	unsigned long int present;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		present = exclusive >> i;
		if (present & 1)
			num++;
	}

	return (num);
}
