#include "main.h"

/**
 * _puts -> prints a string followed by a new line, to stdout
 * @str: string to be printed
 * Return: Nothing
 */

void _puts(char *str)
{
	int len1 = 0;

	while (str[len1] != '\0')
	{
		_putchar(str[len1]);
		len1++;
	}
	_putchar('\n');
}
