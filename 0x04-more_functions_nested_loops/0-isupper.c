#include "main.h"

/**
 * int_isupper -> checks for uppercase character
 *
 * Return: 0 Always
 */

int _isupper(int c)
{
	char i;

	for (i = 'A'; i < 'Z'; i++)
	{
		if (c == i)
			return (1);
		else
			return (0);
		break;
	}
	return (0);
}
