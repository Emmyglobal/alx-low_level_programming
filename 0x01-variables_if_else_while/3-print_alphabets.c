#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main - prints alphabet in lowercase and then in uppercases
 * followed by new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
