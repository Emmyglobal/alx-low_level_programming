#include "main.h"


/**
 * find_sqrt -> Helper function to find the sqrt
 * @n: the number to find the square root
 * @guess: The number to guess
 */

int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return find_sqrt(n, guess + 1);
}

/**
 * _sqrt_recursion -> returns the natural square root of a number
 * @n: the square root of a number to be returned
 * Return: An integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return find_sqrt(n, 0);
}
