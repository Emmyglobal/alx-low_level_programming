#include "main.h"

/**
 * cap_string -> capitalizes all words
 * @str: strings of words to capitalize
 * Return: character string
 */

char *cap_string(char *str)
{
	char *orig = str;
	int sep[14] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int i, cap_next = 1;

	while (*str)
	{
		if (cap_next && *str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
			cap_next = 0;
		}
		cap_next = 0;
		for (i = 0; i < 14; i++)
		{
			if (*str == sep[i])
			{
				cap_next = 1;
				break;
			}
		}
		str++;
	}
	return (orig);
}
