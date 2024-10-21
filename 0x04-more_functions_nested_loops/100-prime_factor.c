#include "main.h"
int isPrime(int number);

/**
 * main -> Entry point, prints the highest prime factor of a number
 * Return: 0 as success
 */

int main(void)
{
	unsigned long int i, m = 612852475143, largest_prime = 0;

	for (i = 2; i * i <= m; i++)
	{
		while (m % i == 0)
		{
			largest_prime = i;
			m = m / i;
		}
	}
	if (m > 1)
		largest_prime = m;
	printf("The highest prime number is %lu\n", largest_prime);
	return (0);
}

/**
 * isPrime -> checks if a number is a prime number
 * @number: The prime number to be checked
 *
 * Return: Always 0.
 */

int isPrime(int number)
{
	int i;

	if (number < 2)
		return (0);
	for (i = 2; i * i <= number; i++)
	{
		if (number % i == 0)
			return (0);
	}
	return (1);
}
