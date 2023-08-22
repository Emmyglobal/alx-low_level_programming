#include "main.h"

/**
 * _strcpy - Function to copy the string from src to dest
 * @src: String to copy
 * @dest: Location of copied string
 *
 * Return: Always dest
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0;

	for (; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';
	return (dest);
}
