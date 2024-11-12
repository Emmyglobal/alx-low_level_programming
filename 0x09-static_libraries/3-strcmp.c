#include "main.h"

/**
 * _strcmp -> Compares two strings
 * @s1: first string
 * @s2: second string
 * Return: Always 0 for success and positive or -ve if different.
 */

int _strcmp(char *s1, char *s2)
{
	int len = 0;

	while (s1[len] != '\0' && s2[len] != '\0')
	{
		if (s1[len] != s2[len])
			return (s1[len] - s2[len]);
		len++;
	}
	return (s1[len] - s2[len]);
}
