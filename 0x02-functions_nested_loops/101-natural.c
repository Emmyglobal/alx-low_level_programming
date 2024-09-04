#include <stdio.h>

/**
 * main -> adds up the multiple of 3 and 15 between 0 and 1024
 *
 * Return: 0 as Success always
 */

int main(void)
{
	int i;
	int j = 0;

	for (i = 0; i < 1024; i++)
	{
		if((i % 3) == 0 || (i % 5) == 0)
		{
			j += i;
		}
	}
	printf("%d\n", j);
	return(0);
}
