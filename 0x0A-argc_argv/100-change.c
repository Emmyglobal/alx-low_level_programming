#include <stdio.h>
#include <stdlib.h>

/**
 * main -> prints the min no of coins to make change for an amount of money
 * @argc: argument count
 * @argv: arrays of argument
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int ans = 0, i, cents;
	int options[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		ans += cents / options[i];
		cents %= options[i];
	}
	printf("%d\n", ans);
	return (0);
}
