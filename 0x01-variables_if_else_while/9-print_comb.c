#include <stdio.h>
/**
 * main - prints all possible combination of single-digits numbers
 * followed by a new line
 * Return: Always 0 (successful)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
