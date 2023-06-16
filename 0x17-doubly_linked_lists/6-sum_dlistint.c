#include "lists.h"

/**
 * sum_dlistint -> returns sum of allthe data of a linked list
 * @head: pointer to the first node
 * Return: 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		current = current->next;
		sum += current->next;
	}
	return (sum);
}
