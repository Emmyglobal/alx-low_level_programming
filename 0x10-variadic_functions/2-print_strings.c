#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints all the given strings
 * @separator: separator to print between the strings
 * @n: number of strings to print
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list valist;
	char *A;

	va_start(valist, n);

	for (j = 1; j <= n; j++)
	{
		A = va_arg(valist, char*);
		if (A)
			printf("%s", A);
		else
			printf("(nil)");
		if (separator && j < n)
			printf("%s", separator);
		else
		{
			;
		}
	}
	printf("\n");
	va_end(valist);
}
