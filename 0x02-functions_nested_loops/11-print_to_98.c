#include "main.h"

/**
 * print_to_98 -> prints time table
 * @n : no to start from
 * Description: print number between n and 98
 * Return:void
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i >= 10 && i != 98)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
		else if (i >= 100)
		{
			_putchar((i / 100) + '0');
			_putchar(((i / 10) % 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		else if (i == 98)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		else if (i >= 0 && i < 10)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
