#include <stdio.h>

/**
 * main -> Entry point
 * Description: Prints digit separated with coma
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
