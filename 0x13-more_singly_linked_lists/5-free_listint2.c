#include "lists.h"

/**
 * free_listint2 -> frees a listint_t list and sets head to NULL
 * @head: pointer to the address of the first node
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *ptr;

	ptr = *head;
	while (ptr != NULL)
	{
		tmp = ptr;
		ptr = ptr->next;
		free(tmp);
	}
	*head = NULL;
}
