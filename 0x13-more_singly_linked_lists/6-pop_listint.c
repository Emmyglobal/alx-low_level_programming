#include "lists.h"

/**
 * pop_listint -> deletes the head of a linked list and
 * returns the head node's data (n)
 * @head: pointer to address of the first node;
 *
 * Return: 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	ptr = *head;
	data = ptr->n;
	*head = ptr->next;
	free(ptr);
	return (data);
}
