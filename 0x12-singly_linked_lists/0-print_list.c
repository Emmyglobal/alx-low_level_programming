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
	
	struct list_s *ptr = NULL;
	ptr = h;

	while (ptr != NULL)
	{
		count++;
		printf("%d ", ptr->data);
		ptr = ptr->link;
	}
	return (count);
}
