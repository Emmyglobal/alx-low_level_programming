#include "lists.h"

/**
 * get_dnodeint_at_index -> returns nth node of a linked list
 * @head: The first node
 * @index: index of the node
 * Return: Null if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	return (i == index ? current : NULL);
}
