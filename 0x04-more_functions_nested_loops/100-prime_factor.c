#include "main.h"

/**
 * main -> Entry point, prints the highest prime factor of a number
 * Return: 0 as success
 */

int main(void)
{
	unsigned long int i, m = 612852475143, largest_prime = 0;

	while (m % 2 == 0)
	{
		largest_prime = 2;
		m = m / 2;
	}
	for (i = 3; i * i <= m; i += 2)
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
