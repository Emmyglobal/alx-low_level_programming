#include "lists.h"

/**
 * pop_listint -> Function that deletes the head node of a list.
 * @head: pointer to a pointer of the head.
 *
 * Return: 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (head == NULL)
		return (0);

	temp = *head;

	if (*head)
	{
		i = temp->n;
		*head = (*head)->next;
		free(temp);
		temp = NULL;
	}
	else
		i = 0;

	return (i);
}
