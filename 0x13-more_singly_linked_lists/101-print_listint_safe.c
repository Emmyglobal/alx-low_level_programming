#include "lists.h"

/**
 * print_listint_safe -> prints a listint_t linked list
 * @head: adrress to the first node of the list
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t count = 0;

	if (head == NULL)
	{
		fprintf(stderr, "Error: NULL list\n");
		exit(98);
	}


	slow = head;
	fast = head;

	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;

		if (fast != NULL && fast->next != NULL)

		{
			fast = fast->next->next;

			if (slow == fast)
			{
				printf("-> [%p] %d\n", (void *)slow, slow->n);
				return (count);
			}
		}
	}
	return (count);
}
