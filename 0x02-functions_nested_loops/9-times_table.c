#include "main.h"

/**
 * times_table -> prints the 9 times table, starting with 0;
 * @void: accepts nothing
 *
 * Return: Nothing
 */
void times_table(void)
{
	int i;
	int j;
	int mult;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			mult = (i - '0') * (j - '0');
			if ((mult < 10))
			{
				if (j != 48)
					_putchar(' ');
				_putchar(mult + '0');
				if (!(j == 57))
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
				if (!(j == 57))
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
