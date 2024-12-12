#include "lists.h"

/**
 * add_nodeint_end -> add node at the end of a list
 * @head: address to the first node
 * @n: data to be added
 *
 * Return: address of the new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new;;
	return (new);
}
