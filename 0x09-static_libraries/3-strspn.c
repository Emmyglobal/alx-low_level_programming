#include "main.h"

/**
 * _strspn -> Gets the length of a prefix substring
 * @s: the string in question
 * @accept: the substring
 * Return: the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, len = 0, found;

	while (s[i] != '\0')
	{
		found = 0;
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = 1;
				len++;
				break;
			}
			j++;
		}
		if (!found)
			break;
		i++;
	}
	return (len);	
}
