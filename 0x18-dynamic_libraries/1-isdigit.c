#include "main.h"

/**
 * _isdigit - Function to check for digits between 0 and 9
 * @c: Parameter
 *
 * Return: Either 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
