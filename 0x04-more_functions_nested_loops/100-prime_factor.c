#include "main.h"

/**
 * main -> Entry point, prints the highest prime factor of a number
 * Return: 0 as success
 */

int main(void)
{
	long int i, m = 612852475143;

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
