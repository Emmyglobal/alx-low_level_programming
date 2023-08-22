#include "main.h"

/**
 * _strncpy - Function to copy src to Dest.
 * @src: String to be copied.
 * @dest: Destination of copied string
 * @n: Number of character to be copied
 *
 * Return: Always Dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int y = 0;

	for (i = 0; src[y] && y < n; i++)
	{
		if (src[y] != '\0')
		{
			dest[i] = src[y];
			y++;
		}
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
