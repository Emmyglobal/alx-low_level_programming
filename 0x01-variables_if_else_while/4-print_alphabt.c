#include <stdio.h>
/**
 *main - print all letters in lowercase except e and q
 * followed by a new line
 * followed by a successful)
 */
int main(void)
{
	char ch='a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
