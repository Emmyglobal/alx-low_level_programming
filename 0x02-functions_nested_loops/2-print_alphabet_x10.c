#include "main.h"

/**
 * print_alphabet_x10 -> the function prototype
 * Description: prints 10 times the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
		i++;
	}
}
