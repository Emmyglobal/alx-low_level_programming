#include "main.h"

/**
 * _strcat -> Concatenates two strings
 * @dest: first string
 * @src: Second string
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int len_src = 0, len_dest = 0, j;

	while (dest[len_dest] != '\0')
		len_dest++;
	while (src[len_src] != '\0')
		len_src++;
	for (j = 0; j <= len_src; j++)
	{
		dest[len_dest] = src[j];
		len_dest++;
	}
	dest[len_dest] = '\0';
	return (dest);
}
