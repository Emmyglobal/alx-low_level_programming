#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: string to be compared with
 * @accept: String to compare
 *
 * Return: Always Count.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		int y = 0;

		while (accept[y] != '\0')/*accept strings compares with elements in s*/
		{
			if (accept[y] == s[i])
			{
				count++;
				break; /*breaks if counted */
			}
			y++;
		}
		if (s[i] != accept[y])
		{
			break; /*if not found break out*/
		}
		i++;
	}
	return (count);
}
