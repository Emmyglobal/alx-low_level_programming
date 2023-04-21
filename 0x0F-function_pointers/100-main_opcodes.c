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
	int number_of_bytes, i;
	char *opcode = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1)
	}

	i = 0;
	while (i < number_of_bytes)
	{
		printf("%02x", opcode[i] & 0xFF);

		if (i != number_of_bytes - 1)
			printf(" ");
		i++;

	}
	printf("\n");
	return (0);
}
