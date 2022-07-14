#include "main.h"
/**
 * print_rev - prints a string in inverse followed by a new line
 * @s: character parameter
 */
void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++
			for (i = n - 1; i >= 0; i--)
			{
				_putchar(s[i]);
			}
}
