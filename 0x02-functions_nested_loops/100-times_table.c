#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The n times table.
 *
 * Return: Nothing.
 */
void print_times_table(int n)
{
	int num1, num2, mul;
	
	if (n < 0 || n > 15)
		return;
	for (num1 = 0; num1 <= n; num1++)
	{
		for (num2 = 0; num2 <= n; num2++)
		{
			mul = num1 * num2;
			if (mul >= 100)
				_putchar((mul / 100) + '0');
			if (mul >= 10)
				_putchar(((mul / 10) % 10) + '0');
			_putchar((mul % 10) + '0');
			if (num2 != n)
			{
				if (mul < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if (mul >= 10 && mul < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else if (mul >= 100)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (num1 * (num2 + 1) < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
