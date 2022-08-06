#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name -> functions that prints name
 * @name : name of person
 * @f: function printer
 * return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
