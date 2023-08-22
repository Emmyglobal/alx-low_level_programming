#include "main.h"

/**
 * _strpbrk - Function that searches a string for any set of bytes
 * @s: String to be searched
 * @accept: set of bytes to look for in s
 *
 * Return: Always (s + i).
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] != '\0')
	{
		int y = 0;

		while (accept[y] != '\0')
		{
			if (s[i] == accept[y])
			{
				return (s + i);
			}
			y++;
		}
		i++;
	}
	return ('\0');
}
