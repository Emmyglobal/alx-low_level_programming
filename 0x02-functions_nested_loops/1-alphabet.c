#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Begin entry
 * Return: Always 0 (successful)
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
	return (0);
}
