#include <stdio.h>
#include "function_pointers.h"

/**
 * void print_name -> functions that prints name
 * @name : name of person
 * return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	printf("Hello, my name is %s\n", name);
}
