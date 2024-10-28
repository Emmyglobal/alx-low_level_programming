#include "main.h"

/**
 * _strncat -> concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: maximum bites
 * Return: pointer to a char
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_src = 0, len_dest = 0;

	while(dest[len_dest] != '\0')
		len_dest++;
	while(src[len_src] != '\0')
	{
		if (len_src < n)
		{
			dest[len_dest] = src[len_src];
		}
		len_dest++;
		len_src++;
	}
	dest[len_dest] = '\0';
	return (dest);
}
