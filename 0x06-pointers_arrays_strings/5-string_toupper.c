#include "main.h"

/**
 * string_toupper -> Changes all lover case letters to uppercase
 *
 * Return: the changed character
 */

char *string_toupper(char *str)
{
	char *original = str;

	while (*str)
	{
		if (*str > 'a' && *str < 'z')
		{
			*str = *str - ('a' - 'A');
		}
		str++;
	}
	return (original);
}
