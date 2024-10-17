#include "main.h"

/**
 * print_square -> Prints a square using #
 * @size: size of square
 *
 * Return: NULL
 */

void print_square(int size)
{
	int i = 0, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i < size)
		{
			_putchar('#');
			for (j = 1; j < size; j++)
				_putchar('#');
			_putchar('\n');
			i++;
		}
	}
}
