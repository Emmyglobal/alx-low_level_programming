#include "main.h"

/**
 * times_table - prints time table
 * Return: void
 */

void times_table(void)
{
	int num1, num2, mul;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			mul = num1 * num2;
			if (mul >= 10)
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
			else if (mul < 10 && num2 != 0)
			{
				_putchar(' ');
				_putchar(mul + '0');
			}
			else
				_putchar(mul + '0');
			if (num2 != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
