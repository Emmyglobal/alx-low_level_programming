#include "main.h"

/**
 * _print_rev_recursion - function that prints the reverse recursively
 * @s: character parameter
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	*s++;
	_print_rev_recursion(s);
	*s--;
	_putchar(*s);
}

