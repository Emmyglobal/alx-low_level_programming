#include "main.h"

/**
 * _islower -> function that checks for lowercase character
 * Description: Checks if a character is a lowercase
 *
 * Return: 1 for success and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
