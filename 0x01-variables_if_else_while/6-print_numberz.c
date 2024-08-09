#include <stdio.h>

/**
 * main -> Entry point
 * Description: Prints base 10 numbers from 0 to 9
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
