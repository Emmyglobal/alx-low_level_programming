#include "3-calc.h"

/**
 * op_add -> adds two numbers
 * @a: first number
 * @b: second number
 * Return: integer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -> Subtract two numbers
 * @a: first number
 * @b: second number
 * Return: integer
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -> Multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: integer
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -> Divdes two numbers
 * @a: first number
 * @b: second number
 * Return: integer
 */

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	return (0);
}

/**
 * op_mod -> Remainder of the division of two numbers
 * @a: first number
 * @b: second number
 * Return: integer
 */

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	return (0);
}
