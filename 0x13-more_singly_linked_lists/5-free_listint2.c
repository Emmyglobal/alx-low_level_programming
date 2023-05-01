#include "lists.h"

/**
 * free_listint2 -> Functions that frees a list.
 * @head: Pointer to a pointer of the first node
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *delete_all;

	while (*head)
	{
		delete_all = *head;
		*head = (*head)->next;
		free(delete_all);
	}
	*head = NULL;
}
