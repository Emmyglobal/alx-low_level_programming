#include "lists.h"

/**
 * add_nodeint_end -> Function that adds new node at the end of a list.
 * @head: Pointer to a pointer of the first node.
 * @n: Data of node to be added
 *
 * Return: address of new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_end, *temp;

	temp = malloc(sizeof(listint_t));
	temp->n = n;
	temp->next = NULL;

	while (add_end->next != NULL)
		add_end = add_end->next;
	add_end->next = temp;

	if (add_end == NULL)
		return (NULL);

	return (*head);
}
