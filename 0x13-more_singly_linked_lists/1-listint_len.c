#include "lists.h"

/**
 * listint_len -> Returns the number of element in a linked list
 * @h: head node to the address of the first node
 *
 * Return: numbeer of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t numElements = 0;

	while (h != NULL)
	{
		numElements++;
		h = h->next;
	}
	return (numElements);
}
