#include "lists.h"

/**
 * insert_nodeint_at_index -> Function that inserts a node at a given position.
 * @head: pointer to a pointer to first node
 * idx: index of the list where the new node should be added
 * @n: The value of integer stored
 *
 * Return: address of the new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_before;

	current_before = *head;
	new_node = malloc(sizeof(listint_t));
	new_node->n = n;
	new_node->next = NULL;

	idx--;
	while (idx != 1)
	{
		current_before = current_before->next;
		idx--;
	}
	new_node->next = current_before->next;
	current_before->next = new_node;

	if (!current_before)
		return (NULL);

	if (!new_node)
		return (NULL);
	return (new_node);
}

