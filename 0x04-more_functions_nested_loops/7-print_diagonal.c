#include "main.h"

/**
 * print_diagonal -> draws a diagonal line on the terminal
 * @n: number of diagonal lines
 * Return: Null
 */

void print_diagonal(int n)
{
	int i = 0, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
