#include "main.h"

/**
 * factorial -> returns the faactorial of a given number
 * @n: The given number
 * Return: An integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
