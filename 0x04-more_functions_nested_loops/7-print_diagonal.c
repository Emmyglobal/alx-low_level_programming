#include "main.h"
/**
 * print_diagonal - a program that draws a diagonal line
 * @n: integer parameter
 */
void print_diagonal(int n)
{
	int x;

	for (x = 0; x <= n; x++)
	{
		if (x == x + 1)
		{
			_putchar(' ');
			_putchar('\n');
	_putchar(92);
		}
		else
		{
			_putchar(92);
		}
	}
	_putchar('\n');
}
