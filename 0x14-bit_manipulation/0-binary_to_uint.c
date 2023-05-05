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

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '0'; i++)
	{
		if (b[i] == '0')
		{
			converted_integer = converted_integer << 1;
		}
		else if (b[i] == '1')
		{
			converted_integer = (converted_integer << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (converted_integer);
}
