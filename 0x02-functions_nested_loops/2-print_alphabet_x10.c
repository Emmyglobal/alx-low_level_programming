#include <stdio.h>
#include "main.h"

/*
 * print_alphabet_x10 -> prints a to z 10 times
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	int count;
	char letter;

	for (count = 0; count < 10; count++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
