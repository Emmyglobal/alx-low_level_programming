#include "main.h"

/**
 * _strstr - Function that locates a substring in a string
 * @haystack: String
 * @needle: substring
 *
 * Return: Always haystack.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *hay = haystack;
		char *need = needle;

		while (*hay == *need && *need != '\0')
		{
			hay++;
			need++;
		}
		if (*need == '\0')
			return (haystack);
	}
	return ('\0');
}
