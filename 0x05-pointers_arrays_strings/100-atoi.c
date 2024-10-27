#include "main.h"
#include <limits.h>

/**
 * _atoi -> Converts a string to an integer
 * @s: string to be converted
 * Return: Always 0 for success
 */

int _atoi(char *s)
{
	int digit;
	int result = 0;
	int sign = 1;
	int found_number = 0;

	while (*s)
	{
		if (*s == '-' && !found_number)
			sign = sign * -1;
		else if (*s == '+')
			;
		else if (*s >= '0' && *s <= '9')
		{
			found_number = 1;
			digit = *s - '0';
			if (result >(INT_MAX - digit) / 10)
			       return sign == 1 ? INT_MAX : INT_MIN;
			result = result * 10 + digit;
		}
		else if (found_number)
		{
			break;
		}
		s++;
	}
	return (result * sign);
}
