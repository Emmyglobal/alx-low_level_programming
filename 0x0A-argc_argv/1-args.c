#include <stdio.h>

/**
 * main -> prints the number of arguments
 * @argc: number of arguments
 * @argv: array of strings of argument
 * Return: integer
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
