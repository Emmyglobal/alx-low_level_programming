#include "main.h"
/**
 * print_sign - prints sign of a nuber
 * @n : character to check
 * Return: 0 or 1
 */
int print_sign(int n)
{
	int check;

	if (n > 0)
	{
		check = 1;
		_putchar('+');
	}
		else if (n == 0);
		{
			check = 0;
			_putchar('0');
		}
	else
	{
		check = -1;
		_putchar('-');
	}
	return (check);
}
