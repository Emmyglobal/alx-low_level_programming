#include "main.h"

/**
 * flip_bits -> returns the number of bits one will need to
 * flip to get from one number to another
 * @n: the first number
 * @m: the second nuber
 *
 * Return: the number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
