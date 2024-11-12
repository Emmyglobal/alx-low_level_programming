#include <stdio.h>

/**
 * main -> Entry point
 * Description: Combination of two possible numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				if (!(i == 56 && j == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
