#include "main.h"

/**
 * str_len1 -> the length of first string
 * *s1: the string
 * Return: integer
 */

int str_len1(char *s1)
{
	if (*s1 == '\0')
		return (0);
	return (1 + str_len1(s1 + 1));
}

/**
 * str_len2 -> length of the second string
 * *s2: the second string
 * Return: integer
 */

int str_len2(char *s2)
{
	if (*s2 == '\0')
		return (0);
	return (1 + str_len2(s2 + 1));
}

/**
 * check_strings -> checks if string are the same
 * @s1: first string
 * @s2: second sting
 * OB
 * @start1: starting point
 * @start2: starting point
 * Return: integer
 */

int check_strings(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		return (check_strings(s1, s2 + 1) || (*s1 && check_strings(s1 + 1, s2)));
	}
	if (*s1 == *s2)
		return (check_strings(s1 + 1, s2 + 1));
	return (0);
}

/**
 * wildcmp -> compares two string to check if they are the same
 * @s1: the first string
 * @s2: the second string
 * Return: 1 if true and 0 if false
 */

int wildcmp(char *s1, char *s2)
{
	return (check_strings(s1, s2));
}
