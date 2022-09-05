#include <stdio.h>
#include "3-calc.h"

/**
 * op_add -> function for addition
 * @a: integer parameter
 * @b: integer parametr
 * Return: sum (success)
 */

int op_add(int a, int b)
{
	int add = a + b;

	return (add);
}

/**
 * op_sub -> function for difference
 * @a: integer parameter
 * @b: integer parameter
 * Return: difference (success)
 */

int op_sub(int a, int b)
{
	int sub = a - b;

	return (sub);
}

/**
 * op_mul -> function for multiplication
 * @a: integer parameter
 * @b: integer parameter
 * Return: product (success)
 */

int op_mul(int a, int b)
{
	int mul = a * b;

	return (mul);
}

/**
 * op_div -> function for division
 * @a: integer parameter
 * @b: integer parameter
 * Return: division (success)
 */

int op_div(int a, int b)
{
	int div = a / b;

	if (b == 0)
	{
		puts("Error\n");
		exit(100);
	}
	else
		return (div);
}

/**
 * op_mod -> function for remainder of divisions
 * @a: integer parameter
 * @b: integer parameter
 * Return: remainder (success)
 */

int op_mod(int a, int b)
{
	int mod = a % b;

	if (b == 0)
	{
		puts("Error\n");
		exit(100);
	}
	else
		return (mod);
}
