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

	if (needle[i] == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i + j] != needle[j])
				break;
			j++;
		}
		if (needle[j] == '\0')
			return &haystack[i];
		i++;
	}
	return (NULL);
}
