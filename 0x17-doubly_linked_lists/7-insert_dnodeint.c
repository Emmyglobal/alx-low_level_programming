#include "lists.h"

/**
 * insert_dnodeint_at_index -> inserts a new node at a given position
 * @h: pointer to the head
 * @idx: index of the new node
 * @n: value to add to the node
 * Return: address of the new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint *first = *h, *new_node;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (first != NULL && i < idx - 1)
	{
		first = first->next;
		i++;
	}

	if (first == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = first;
	new_node->next = first->next;

	if (first->next != NULL)
		first->next->prev = new_node;

	first->next = new_node;

	return (new_node);
}
