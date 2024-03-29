#include "lists.h"

/**
 * insert_nodeint_at_index -> insert a node at index
 * @head: head of the list
 * @idx: location to insert node
 * @n: The value of integer stored
 * Return: address of the new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_before;

	current_before = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = current_before;
		*head = new_node;
		return (*head);
	}
	while (idx > 1)
	{
		current_before = current_before->next;
		idx--;
		if (!current_before)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = current_before->next;
	current_before->next = new_node;
	return (new_node);
}
