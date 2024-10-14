#include <stdio.h>

/**
 * main -> Entry point
 * Description: finds and prints the sum of the even-valued terms.
 *
 * Return : Always 0 for success
 */

int main(void)
{
	long int i, sum = 0, next, first = 0, second = 1;

	for (i = 0; i <= 50; i++)
	{
		next = first + second;
		if ((next <= 4000000) && (next % 2 == 0))
		{
			sum += next;
		}
		first = second;
		second = next;
	}
	printf("%ld\n", sum);
	return (0);
}
