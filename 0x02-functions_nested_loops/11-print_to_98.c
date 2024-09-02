#include "main.h"

/**
 * print_to_98 -> Entry point for the function
 * @n: The starting point of the number to be printed
 *
 * Return: Always 0 for success
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{

		for (i = n; i <= 98; i++)
		{
			if (i < 0)
			{
				_putchar('-');
				if (i <= -100)
				{
					_putchar((-i / 100) + '0');
					_putchar(((-i / 10) % 10) + '0');
					_putchar((-i % 10) + '0');
				}
				else if (i <= -10)
					_putchar((-i / 10) + '0');
				_putchar((-i % 10) + '0');
			}
			else if (i < 10)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}

			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i > 99)
			{
				_putchar((i / 100) + '0');
				_putchar(((i / 10) % 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
