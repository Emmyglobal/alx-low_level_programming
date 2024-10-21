#include "main.h"
int isPrime(int number);

/**
 * main -> Entry point, prints the highest prime factor of a number
 * Return: 0 as success
 */

int main(void)
{
	unsigned long int i, m = 612852475143;

	for (i = 0; i * i <= m;)
	{
		if (isPrime(i) && m % i == 0)
			m = m / i;
		else
			i++;
	}
	printf("The highest prime number is %ld\n", m);
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
