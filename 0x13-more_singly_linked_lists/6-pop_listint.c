#include "lists.h"

/**
 * pop_listint -> Function that deletes the head node of a list.
 * @head: pointer to a pointer of the head.
 *
 * Return: 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	if (head == NULL)
		return (0);
	else
	{
		listint_t *temp;
		temp = *head;
		*head = (*head)->next;
		free(temp);
		temp = NULL;
	}
	return ((*head)->n);
}
