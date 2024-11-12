#include "main.h"

/**
 * _strchr -> Locates a character in a string
 * @s: string where character to be located is
 * @c: character to be located
 * Return: first occurrence of character c or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	if (c == '\0')
		return (&s[j]);
	return (NULL);
}
