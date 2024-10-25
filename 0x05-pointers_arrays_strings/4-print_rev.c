#include "main.h"

/**
 * print_rev - > Prints a string in reverse follwed by a new line
 * @s: the string to be printed
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len1 = 0;

	while (s[len1] != '\0')
		len1++;
	while (len1 != 0)
	{
		_putchar(s[len1 - 1]);
		len1--;
	}
	_putchar('\n');
}
