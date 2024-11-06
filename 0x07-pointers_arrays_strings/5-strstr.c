#include "main.h"

/**
 * _strstr -> locates a substring
 * @haystack: the main string
 * @needle: the string to locate
 * Return: pointer to the beginning of the string
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[0])
			{
				return (&haystack[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
