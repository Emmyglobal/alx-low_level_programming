#include "main.h"

/**
 * _strncat - Function to concatenate two strings, src depending on n
 * @dest: 1st string
 * @src: 2nd string
 * @n: number of bytes from src
 *
 * Return: Always dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char result[1000];
	int i = 0;
	int y = 0;

	while (dest[i] != '\0')
	{
		result[y] = dest[i];
		i++;
		y++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		result[y] = src[i];
		y++;
	}
	result[y] = '\0';

	i = 0;
	y = 0;
	while (result[y] != '\0')
	{
		dest[i] = result[y];
		y++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
