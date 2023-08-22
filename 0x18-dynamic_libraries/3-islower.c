#include "main.h"

/**
 * _islower - Entry Point to function
 * @c: Tells the cases of  c
 *
 * Return: depends on the output
 */

int _islower(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}


	return (0);
}
