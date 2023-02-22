#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: separators to print between numbers
 * @n: number of numbers to print
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;

	va_start(valist, n);

	for (i = 1; i <= n; i++)
	{
		printf("%i", va_arg(valist, int));
		if (i < n && separator)
			printf("%s", separator);
		else
		{
			;
		}
	}
	printf("\n");
	va_end(valist);
}
