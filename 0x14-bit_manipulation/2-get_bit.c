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
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
