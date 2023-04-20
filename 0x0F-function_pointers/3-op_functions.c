#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - Operator for Addition
 * @a: int 1
 * @b: int 2
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Operator for Subtraction
 * @a: int 1
 * @b: int 2
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Operator for Multiplication
 * @a: int 1
 * @b: int 2
 *
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Operator for Division
 * @a: int 1
 * @b: int 2
 *
 * Return: result of division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Operator for modulo
 * @a: int 1
 * @b: int 2
 *
 * Return: remainder of the division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
