#include "lists.h"

/**
 * sum_listint -> returns sum of all the data of a list.
 * @head: pointer to the address of the first node
 *
 * Return: 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	ptr = head;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
