#include <stdio.h>
/**
 * main - prints possible outcomes of three digits
 * Return: Always 0 (successful)
 */
int main(void)
{
	int ch;
	int n;
	int m;

	for (ch = 48; ch <= 57; ch++)
	{
		for (n = 49; n <= 57; n++)
		{
			for (m = 50; m <= 57; m++)
			{
				if (n > ch && m > n)
				{
					putchar(ch);
					putchar(n);
					putchar(m);
					if (ch != 55 || n != 56 || m != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
