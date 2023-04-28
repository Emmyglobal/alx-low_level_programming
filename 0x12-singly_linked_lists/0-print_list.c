#include "lists.h"
#include <stdlib.h>

/**
 * print_list - > Function that prints all the elements of a list_t list.
 * @h: structure node
 *
 * Return: Number of node
 */

size_t print_list(const list_t *h)
{
	 unsigned int count = 0;

	if (h == NULL)
		printf("[0] (nill)");

	while (h != NULL)
	{
		count++;
		printf("%s\n", h->str);
		h = h->next;
	}
	return (count);
}
