#include "main.h"

/**
 * *_strcpy -> Copies the string pointed by src including the terminating null byte
 * @dest: char to be pointed to
 * @src: charater to be copied
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	size_t i, n = 0;

	while (src[n] != '\0')
		n++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
