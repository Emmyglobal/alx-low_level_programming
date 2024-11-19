#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_number -> checks if a string contains only integer
 * @str: the string to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */

int is_number(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main -> multiplies two positive numbers
 * @num1: first number
 * @num2: second number
 *
 * Return: Always 0 for success
 */

int main(int argc, char *argv[])
{
	unsigned long long num1, num2;

	num1 =atoll(argv[1]);
	num2 =atoll(argv[2]);
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (!is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	printf("%llu\n", num1 * num2);
	return (0);
}
