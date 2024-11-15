#include "main.h"
#include "stdlib.h"

/**
 * str_concat -> concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *res;
	int len_s1 = 0, len_s2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");
	while (s1[len_s1] != '\0')
		len_s1++;
	while (s2[len_s2] != '\0')
		len_s2++;

	res = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));

	if (res == NULL)
		return (NULL);
	while (i < len_s1)
	{
		res[i] = s1[i];
		i++;
	}
	while (j < len_s2)
	{
		res[i] = s2[j];
		j++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
