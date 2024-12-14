#include "main.h"

/**
 * get_bit -> returns the value of a bit at a given index
 * @n: the bit to be considered
 * @index: index of the bit to be considered
 *
 * Return: value of the bit at index -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitmask, result;

	bitmask = 1 << index;
	result = n & bitmask;
	if (result)
		return (1);
	else
		return (0);
	return (-1);
}
