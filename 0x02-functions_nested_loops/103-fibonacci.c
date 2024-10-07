#include <stdio.h>
#include "main.h"

/**
 * print_fibo2 - prints fibonacci sequence
 * Description: excluding 40 000
 * Return: void
 */

int main(void)
{
	int i;
	int j = 0;
	int k = 1;
	int m;

	_putchar('j' + '0');
	_putchar(',');
	_putchar(' ');
	_putchar('k' + '0');
	for (i = 3; i < 5; i++)
	{
		m = j + k;
		_putchar('m' + '0');
		j = k;
		k = m;
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	return (0);
}
