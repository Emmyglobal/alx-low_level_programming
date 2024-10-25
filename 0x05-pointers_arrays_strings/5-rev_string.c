#include "main.h"

/**
 * rev_string -> Reverses a String
 * @s: string to be reversed
 * Return: Nothing
 */

void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	while (len != 0)
	{
		printf("%c", s[len - 1]);
		len--;
	}
	printf("\n");
}
