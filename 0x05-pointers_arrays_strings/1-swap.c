#include "main.h"

/**
 * swap_int -> Swaps two integer values
 * @a: first number
 * @b: second number
 */

void swap_int(int *a, int *b)
{
	int x;
	x = *a;
	*a = *b;
	*b = x;
}
