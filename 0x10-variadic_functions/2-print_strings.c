#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings -> prints sting followed by a new line
 * @separator: the string to be printed between the strings
 * @n: number of strings to be printed
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
