#include "lists.h"

/**
 * main -> Entry point
 *
 * Return: Nothing
 */
void __attribute__((constructor)) first(void)
{
	int i = 0;
	char sentence[] = "(You're beat! and yet, you must allow,\nI bore) "
			  "(my house upon my back!\n)";

	while (sentence[i] != '\0')
	{
		_putchar(sentence[i]);
		i++;
	}
}
