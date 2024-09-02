#include "main.h"

/**
 * @print_times_tatble -> prints the n times table, starting with 0
 * Description -> if n is greater than 15 or less than 0, it prints nothing
 *
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;

	if((n >= 0) && (n <= 15))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (k < 10)
				{
					_putchar(k + '0');
					if (j != n)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
				}
				else if (k < 100)
				{
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
					if (j != n)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
				}
				else
				{
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
					if(j != n)
					{
						_putchar(',');
						_putchar(' ');
					}
				 }
			}
			_putchar('\n');
		}
	}
}
