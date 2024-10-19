#include "main.h"

/**
 * isPrime - > Checks for prime number
 * @number: number to be checked
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
