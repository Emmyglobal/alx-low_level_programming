#include <stdio.h>

/**
 * main -> prints its name followed by a new line
 * @argc: number of arguments
 * @argv: arrays of arguments
 * Return: integer
 */

int main(int argc, char *argv[])
{
	int i;
	(void)argc;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
