#include "main.h"

/**
 * isPrime -> checks if a number is a prime number
 * main -> Entry point, prints the highest prime factor of a number
 * Return: 0 as success
 */

int isPrime(int number)
{
	int i;

	if (number < 2)
		return (0);
	else
	{
		for (i = 2; i * i <= number; i++)
		{
			if (number % i == 0)
				return (0);
		}
		return (1);
	}
}

int main(void)
{
	int i, m = 612852475143;

	for (i = 0; i <= m;)
	{
		if (isPrime(i) && m % i == 0)
			m = m / i;
		else
			i++;
		if (m == i)
			printf("The highest prime number is %d\n", i);
	}
	return (0);
}

