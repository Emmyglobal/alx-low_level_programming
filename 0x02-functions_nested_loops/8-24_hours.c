#include "main.h"

/**
 * jack_bauer -> Prints every minute of the day of Jack Bauer
 * @void: accepts nothing
 *
 * Return: Nothing
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 48; i <= 50; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i == 50 && j > 51)
				break;
			for (k = 48; k <= 53; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
}
