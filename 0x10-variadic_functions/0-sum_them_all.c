#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_al -> sums all its parameter
 * @n: number of parameters
 *
 * Return: 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list numbers;

	if (n == 0)
		return (0);
	va_start (numbers, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);

	return (sum);
}
