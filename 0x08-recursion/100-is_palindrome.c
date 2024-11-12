#include "main.h"

/**
 * str_len -> returns the length of the string
 * @s: the considered string
 * Return: integer
 */

int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_len(s + 1));
}

/**
 * check_palindrome -> Checks if a string is a palindrome
 * @s: string to check
 * @start: The starting index
 * @end: the ending index
 * Return: integer
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * is_palindrome -> return 1 or 0 if a string is a palindrome
 * @s: string to be checked
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int len;

	len = str_len(s);
	return (check_palindrome(s, 0, len - 1));
}
