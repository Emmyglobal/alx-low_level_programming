#include "lists.h"

/**
 * free_listint -> Function that frees a listint_t list.
 * @head: Pointer to the first node
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *delete_all;

	while (head)
	{
		delete_all = head;
		head = head->next;
		free(delete_all);
	}
}
