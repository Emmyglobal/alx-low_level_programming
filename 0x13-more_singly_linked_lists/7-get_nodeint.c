#include "lists.h"

/**
 * get_nodeint_at_index -> Function that returns the nth node of a linked list
 * @head: pointer to the first node.
 * @index: index of the data to be returned
 *
 * Return: NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	listint_t *current;

	current = head;
	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (current);
}
