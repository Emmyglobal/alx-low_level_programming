#include <stdio.h>
/**
 * main - prints number from 00 to 89
 * Return: Always 0 (successful)
 */
int main(void)
{
	int ch;
	int n;

	for (ch = 48; ch <= 57; ch++)
	{
		for (n = 49; n <= 56; n++)
		{
			if (n > ch)
			{
				putchar(ch);
				putchar(n);
				if (n != 56 || ch != 57)
				{
					putchar(48);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
