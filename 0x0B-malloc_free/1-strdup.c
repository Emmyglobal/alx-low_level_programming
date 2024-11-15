#include "main.h"
#include <stdlib.h>

/**
 * _strdup -> returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string given as parameter
 * Return: pointer to the duplicate string
 */

char *_strdup(char *str)
{
	char *pta;
	int i, len = 0;

	while (str[len] != '\0')
		len++;
	if (str == NULL)
		return (NULL);
	pta = (char *)malloc((len + 1) * sizeof(str));
	if (pta == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		pta[i] = str[i];
	return (pta);
}
