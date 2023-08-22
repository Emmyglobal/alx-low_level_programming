#include "main.h"

/**
 * _abs - Entry Point
 * @c: Function to give absolute value
 *
 * Return: Always 0
 */

int _abs(int c)
{

	if (c < 0)
	{
		return (c * (-1));
	}
	else
	{
		return (c);
	}

	return (0);
}
