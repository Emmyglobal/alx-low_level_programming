#include "main.h"

/**
 * print_triangle -> Prints a triangle followed by a new line
 * @size: size of the triangle to be printed
 * Return: Null
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
				_putchar(' ');
			for (j = 1; j <= i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
