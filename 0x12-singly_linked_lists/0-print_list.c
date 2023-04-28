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
	
	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);
		h = h->next;
		count++;
	}
	return (count);
}
