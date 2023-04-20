#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Function that prints a name.
 * @name: name to be printed
 * @f: function that is being pointed to.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if(name == NULL || f == NULL)
		return;
	f(name);
}
