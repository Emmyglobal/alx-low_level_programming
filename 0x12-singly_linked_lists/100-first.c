#include "lists.h"
#include <stdio.h>

/**
 * first - > Function that prints first before main
 *
 * Return: Nothing
 */
void __attribute__((constructor)) first()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nIbore my house upon my back\n");
}
