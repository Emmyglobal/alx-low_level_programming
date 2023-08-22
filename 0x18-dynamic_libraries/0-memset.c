#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: pointer to memory area
 * @b: char to be filled
 * @n: Number of bytes to be filled
 *
 * Return: always s
 */

char *_memset(char *s, char b, unsigned int n)
{
	/* int b is the replacer and n is the number of space */
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		/*dereferencing the value of s */
		s[i] = b;
	}

	return (s);
}
