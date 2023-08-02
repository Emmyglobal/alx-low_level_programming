#include "main.h"

/**
 * print_times_table -> prints the n times table, starting with 0
 * @n: n times table
 * Return: Nothing
 */

void print_times_table(int n)
{
	int num1, mul, num2;

	for (num1 = 0; num1 <= n; num1++)
	{
		for (num2 = 0; num2 <= n; num2++)
		{
			if(n < 15 && n > 0)
			{
				mul = num1 * num2;
				if (mul >= 10 && mul < 100)
				{
					_putchar((mul / 10) + '0');
					_putchar((mul % 10) + '0');
				}
				else if (mul >= 100)
				{
					_putchar((mul / 100) + '0');
					_putchar(((mul / 10) % 10) + '0');
					_putchar((mul % 10) + '0');
				}
				else if (mul < 10 && num2 != 0)
				{
					_putchar(' ');
					_putchar(mul + '0');
				}
				else
					_putchar(mul + '0');
				if (num2 != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
				break;
		}
		_putchar('\n');
	}
}
