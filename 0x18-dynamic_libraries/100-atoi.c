#include "main.h"

/**
 * _atoi - Function that converts string to integer
 * @s: string to be converted
 *
 * Return: integer
 */

int _atoi(char *s)
{
	short n = 0;
	int result = 0;
	int i;
	int m = -1;

	for (i = 0; s[i] != '\0'; i++)
	{

		if (s[i] == '-')
		{
			m *= -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result -= (s[i] - '0');
			n = 1;
		}
		else if (n == 1)
			break;
	}
	result *= m;
	return (result);
}
