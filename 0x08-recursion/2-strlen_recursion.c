#include "main.h"

/**
 * _strlen_recursion - function that prints the length of string.
 * @s: character parameter
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
		s++;
		return (1 + _strlen_recursion(s));
}
