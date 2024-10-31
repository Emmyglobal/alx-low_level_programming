#include "main.h"

/**
 * cap_string -> capitalizes all words
 * @str: strings of words to capitalize
 * Return: character string
 */

char *cap_string(char *str)
{
	char *orig = str;
	char sep[13] = {' ', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i;

	/* characterize the first character if it is a lowercase */
	if (*str >= 'a' && *str <= 'z')
		*str = *str - ('a' - 'A');
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			for (i = 0; i < 13; i++)
			{
				if (*(str - 1) == sep[i])
				{
					*str = *str - ('a' - 'A');
					break;
				}
			}
		}
		str++;
	}
	return (orig);
}
