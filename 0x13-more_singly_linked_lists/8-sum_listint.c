#include "lists.h"

/**
 * sum_listint -> Function that returns the sum of all the data (n) of a list.
 * @head: pointer to the first node.
 *
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *list_nodes;

	list_nodes = head;
	while (list_nodes)
	{
		sum += list_nodes->n;
		list_nodes = list_nodes->next;
	}

	return (sum);
}
