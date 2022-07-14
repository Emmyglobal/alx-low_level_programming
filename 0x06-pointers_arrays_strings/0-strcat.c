#include "main.h"
#include <string.h>
/**
 * _strcat - function that concatenates two string.
 * @dest: character parameter
 * @src: character parameter
 * Return: 0 (success)
 */
char *_strcat(char *dest, char *src)
{
	char str1[] = "dest";
	char str2[] = "src";

	strcat(str1, str2);
	return (0);
}
