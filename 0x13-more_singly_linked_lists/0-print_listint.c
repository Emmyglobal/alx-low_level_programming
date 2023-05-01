#include "lists.h"

/**
 * print_listint -> Function that prints all the elements of a list.
 * @h: The first node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h == NULL)
			printf("Empty list!\n");
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
