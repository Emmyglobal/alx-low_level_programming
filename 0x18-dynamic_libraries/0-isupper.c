#include "main.h"

/**
 * _isupper - Function to check for uppercase
 * @c: Parameter
 *
 * Return: Either 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
