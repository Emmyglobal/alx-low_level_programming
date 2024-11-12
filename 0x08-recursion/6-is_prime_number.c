#include "main.h"

/**
 * check_prime -> checks for prime number
 * @n: number to check
 * @divisor: divisor to check
 * Return: integer
 */

int check_prime(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (check_prime(n, divisor + 1));
}

/**
 * is_prime_number -> returns 1 if not prime number or 0 otherwise
 * @n: number to check
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check_prime(n, 2));
}
