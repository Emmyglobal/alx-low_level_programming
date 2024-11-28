#include "3-calc.h"
#include <stdlib.h>

/**
 * main -> Entry point
 * @argc: Argument count
 * @argv: Array of arguments
 *
 * Return: 0 on sunccess, 98 for incorrect arguments,
 * 99 for invalid operator, 100 for division or mod by zero
 */

int main(int argc, char *argv[])
{
	int a, b, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);


	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = operation(a, b);
	printf("%d\n", result);

	return (0);
}
