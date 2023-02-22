#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int w, x, y;
	char *A;

	y = 0;
	w = 0;
	x = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (*(s1 + w))
		w++;
	while (*(s2 + x))
		x++;
	x++;

	A = malloc((w + x) * sizeof(char));
	if (A == NULL)
	{
		return (NULL);
	}

	for (y = 0; w > y; y++)
	{
		*(A + y) = *(s1 + y);
	}

	for (y = w; y < (w + x); y++)
	{
		*(A + y) = *(s2 + y - w);
	}

	return (A);
}
