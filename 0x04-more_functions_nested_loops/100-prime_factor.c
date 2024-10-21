#include "main.h"

/**
 * main -> Entry point, prints the highest prime factor of a number
 * Return: 0 as success
 */

int main(void)
{
	unsigned long int i = 3;
	unsigned long int m = 612852475143;

	for (; i < 12057; i += 2)
	{
		while (m % i == 0 && m != i)
			m /= i;
	}
	printf("%lu\n", m);
	return (0);
}
