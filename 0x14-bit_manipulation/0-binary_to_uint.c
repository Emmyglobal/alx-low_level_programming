#include "main.h"

/**
 * binary_to_uint -> Function that converts a binary to unsigned int.
 * @b: Pointing to a sring of 0 and 1 chars.
 * Return: converted number or 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int converted_integer = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
			converted_integer = 2 * converted_integer + (b[i] - '0');
		}
	}
	return (converted_integer);
}
