#include "main.h"

/**
 * leet -> Encodes a string into 1337
 * @str: string to encode
 *
 * Return: encoded string
 */

char *leet(char *s)
{
	int i, j;
	char code1[5] = {'a', 'e', 'o', 't', 'l'};
	char code2[5] = {'A', 'E', 'O', 'T', 'L'};
	char code3[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == code1[j] || s[i] == code2[j])
			{
				s[i] = code3[j];
				break;
			}
		}
	}
	return (s);
}
