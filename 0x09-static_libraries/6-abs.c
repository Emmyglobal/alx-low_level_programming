#include "main.h"

/**
 * _abs -> computes the absolute value of an integer
 * @b: number to find its absolute value
 * Description: Any integer can be included
 *
 * Return: 0 Always success;
 */
int _abs(int b)
{
	if (b < 0)
		return (-b);
	else
		return (b);
	return (0);
}
