#include "lists.h"

/**
 * reverse_listint -> Reverses a listint_t linked list
 * @head: pointer to the address of the first node
 *
 * Return: pointer to the first node of the reversed.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next1;

	prev = NULL;
	next1 = NULL;

	while (*head != NULL)
	{
		next1 = (*head)->next;
		(*head)->next = prev;

		prev = *head;
		*head = next1;
	}
	*head = prev;
	return (*head);
}
