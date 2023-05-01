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
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	add_end = *head;
	while (add_end->next != NULL)
		add_end = add_end->next;
	add_end->next = temp;
	return (*head);
}
