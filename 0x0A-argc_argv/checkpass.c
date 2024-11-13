#include <stdio.h>
#include <string.h>

/**
 * main -> Entry point
 * @ag: number of argument
 * @agv: array of argument
 * Return: integer
 */

int main(unsigned int arg, char *agv[])
{
	const char *password = "Ugochukwu";
	if (arg != 2)
	{
		printf("Enter only one argument: \n");
	}
	else {
		if (strcmp(password, agv[1]) == 0)
			printf("Congrats, you got the password\n");
		else
			printf("Wrong password\n");
	}
	return (0);
}
