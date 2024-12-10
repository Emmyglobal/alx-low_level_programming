#include "lists.h"

/**
 * first -> This function prints first before the main function does
 *
 * Return: Nothing
 */
void __attribute__((constructor)) first(void)
{
	int i = 0, j = 0;
	char sentence[] = "You're beat! and yet, you must allow,\n";
	char sent[] = "I bore my house upon my back!\n";

	while (sentence[i] != '\0')
	{
		_putchar(sentence[i]);
		i++;
	}
	while (sent[j] != '\0')
	{
		_putchar(sent[j]);
		j++;
	}
}
