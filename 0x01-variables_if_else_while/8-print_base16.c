#include <stdio.h>

/**
 * main -> Entry point
 * Description: Prints Hexadecimal
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 102; i++)
	{
		if(i >= 48 && i <= 57)
			putchar(i);
		else if ((i >= 97) && (i <= 102))
		{
			putchar(i);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
