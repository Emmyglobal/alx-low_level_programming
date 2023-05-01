#include "lists.h"

/**
 * add_nodeint_end -> Function that adds new node at the end of a list.
 * @head: The first node
 * @n: Data of node to be added
 *
 * Return: address of new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_end;

	add_end = malloc(sizeof(listint_t));
	add_end->n = n;
	add_end->next = NULL;

	if (add_end == NULL)
		return (NULL);

	return (*head);
}
