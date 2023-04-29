#include <stdio.h>

/**
 * bmain - > Function that prints first before main.
 * Return: Nothing
 */

void __attribute__((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
