#include "lists.h"

/**
 * print_listint_safe -Function that prints a linked list
 * @head: list of type to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_node = 0;
	long int diff;

	while (head != NULL)
	{
		diff = head - head->next;
		num_node++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num_node);
}
