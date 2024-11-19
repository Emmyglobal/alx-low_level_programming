#include <stdlib.h>

/**
 * string_nconcat -> concatenates two string
 * @s1: first string
 * @s2: second string
 * @n: malloc size
 *
 * Return: pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pta;
	unsigned int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	pta = malloc(len1 + (n < len2 ? n : len2) + 1);
	if (pta == NULL)
	{
		exit(1);
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		pta[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		pta[i] = s2[j];
		i++;
		j++;
	}

	pta[i] = '\0';
	return (pta);
}
