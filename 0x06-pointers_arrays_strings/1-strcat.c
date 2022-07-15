#include "main.h"
#include <string.h>
/**
 * *_strncat - A function that concatenates two strings
 * @*dest: Character parameter
 * @*src: Character parameter
 * @n: Integer parameter
 * Return: *dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(*dest, *src, n);
	return (dest);
}
