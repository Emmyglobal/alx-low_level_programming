#include <stdio.h>
/**
 * main - prints number from 00 to 89
 * Return: Always 0 (successful)
 */
int main(void)
{
	int n;
	int ch;

	for (n == 48; n <= 57; n++)
	{
		for (ch == 49; ch <= 56; ch++)
		{
			if (ch > n)
			{
				putchar(n);
				putchar(ch);
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
