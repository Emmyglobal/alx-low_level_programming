#include "main.h"

/**
 * _strncpy -> Copies up to `n` bytes of a string
 * @dest: Buffer where the string will be copied to
 * @src: source string to be copied
 * @n: maximum number of bytes to copy
 * Return: Pointer to the destination string`dest`
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len_src = 0;

	while (src[len_src] != '\0' && len_src < n)
	{
		dest[len_src] = src[len_src];
		len_src++;
	}
	for (; len_src < n; len_src++)
		dest[len_src] = '\0';
	return (dest);
}
