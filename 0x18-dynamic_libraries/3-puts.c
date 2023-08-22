#include "main.h"

/**
 * _puts - Function to print a string
 * @str: String Parameter
 *
 * Return: nothing
 */

void _puts(char *str)
{
	for (;  *str != '\0'; str++)
		_putchar(*str);
	_putchar('\n');
}
