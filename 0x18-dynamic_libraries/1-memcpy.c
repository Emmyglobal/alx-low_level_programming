#include "main.h"

/**
 * _memcpy - Function to copy src to dest
 * @dest: Memory area to store copied file
 * @src: Memory area of file to copy.
 * @n: Number of bytes to copy.
 *
 * Return: Always dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int y = 0;

	/* Copying string to dest */
	while (i < n)
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	return (dest);
}
