#include "main.h"

/**
 * rot13 -> Encodes a string using rot13
 * @s: string to encode
 * Return: the string
 */

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = ((s[i] - 'A' + 13) % 26) + 'A';
		else if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = ((s[i] - 'a' + 13) % 26) + 'a';
	}
	return (s);
}
