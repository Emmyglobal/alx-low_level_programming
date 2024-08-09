#include <stdio.h>
#include <stdlib.h>

/**
 * main -> Entry point
 * Description: A program that prints lowercase alphabet
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
