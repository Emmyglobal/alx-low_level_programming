#include "lists.h"
/**
 * insert_nodeint_at_index -> inserts a new node at a given position
 * @head: pointer to the first node
 * @idx: index of the list where the new node shall be added
 * @n: integer data of the new node to be added
 * Return: NULL if failed or address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;
	unsigned int count = 0;

	if ((*head) == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	current = *head;

	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
