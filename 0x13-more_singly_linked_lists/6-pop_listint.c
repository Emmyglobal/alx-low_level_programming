#include "lists.h"

/**
 * pop_listint -> deletes the head of a linked list and
 * returns the head node's data (n)
 * @head: pointer to address of the first node;
 *
 * REturn: 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	ptr = *head;
	free(ptr);
	return (new);
}
