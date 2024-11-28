#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers -> prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: total numbers to be printed
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start (numbers, n);
	if (separator == NULL)
		return;
	for(i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i != n - 1)
			printf("%s ", separator);
		else
			printf("\n");
	}

}
