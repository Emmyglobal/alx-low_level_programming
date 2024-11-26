#include "function_pointers.h"

/**
 * print_name -> A function that prints name
 * @name: name to be printed
 * @f: pointer to a function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
