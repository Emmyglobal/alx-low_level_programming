#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: given number
 * Return: the sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int j;

	int sum = 0;

	va_list valist;

	va_start(valist, n);

	for (j = 0; j < n; j++)
		sum = sum + va_arg(valist, int);
	va_end(valist);
	return (sum);
}
