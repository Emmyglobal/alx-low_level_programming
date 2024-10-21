#include "main.h"

/**
 * main -> Entry point, prints the highest prime factor of a number
 * Return: 0 as success
 */

int main(void)
{
	unsigned long int i, m = 612852475143;

	for (i = 2; i * i <= m; i++)
	{
		while (m % i == 0)
			m = m / i;
	}
	printf("%lu\n", m);
	return (0);
}
