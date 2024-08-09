#include <stdio.h>

/**
 * main -> Entry point
 * Description: prints both lowercase and uppercas
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 122; i >= 65; i--) {
		if ((i >= 97) && (i <=122))
			putchar(i);
		else if ((i >= 65) && (i <= 90))
			putchar(i);
	}
	putchar('\n');
	return (0);
}
