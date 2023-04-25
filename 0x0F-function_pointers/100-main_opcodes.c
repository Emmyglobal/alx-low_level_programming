#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * Description: program that prints the opcodes of its own main function
 * @argc: argument counts
 * @argv: argument variables
 *
 * Return: success
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	if (arg != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx", arr[i]);
	}
	return (0);
}
