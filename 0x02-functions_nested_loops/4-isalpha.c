#include "main.h"

/**
 * _isalpha -> The main function that checks
 * @c: Character to be checked
 *
 * Return: 1 for success and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
