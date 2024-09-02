#include "main.h"

/**
 *  * print_to_98 - Prints all natural numbers from n to 98
 *   * @n: The starting number to print from
 *    *
 *     * Return: void
 *      */
void print_to_98(int n)
{
	int i;
	
	for (i = n; (n <= 98 ? i <= 98 : i >= 98); (n <= 98 ? i++ : i--))
	{
		if (i < 0)
		{
			_putchar('-');
			if (i <= -100)
				_putchar((-i / 100) + '0');
			if (i <= -10)
				_putchar(((-i / 10) % 10) + '0');
			_putchar((-i % 10) + '0');
		}
		else if (i >= 100)
		{
			_putchar((i / 100) + '0');
			_putchar(((i / 10) % 10) + '0');
			_putchar((i % 10) + '0');
		}
		else if (i >= 10)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		else
		{
			_putchar(i + '0');
		}
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
