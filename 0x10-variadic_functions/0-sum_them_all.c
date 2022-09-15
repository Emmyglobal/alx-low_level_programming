#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * sum_them_all -> Function that sum all its parameters
 * @n : unsigned integers
 * Return: 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i, x;

	va_start(sum, n);
	x = 0;

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			x += va_arg(sum, int);
		}
		va_end(sum);
		return (x);
	}
	if (n == 0)
	{
		return (0);
	}
}
