#include "lists.h"

/**
 * find_listint_loop -> finds the loop in a linked list
 * @head: pointer to the first node of the list
 *
 * Return: the address of the node where the loop starts,
 *  or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (!head || !head->next)
		return (NULL);

	slow = head;
	fast = head;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next;

		if (slow == fast)
		{
			slow = head;

			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
