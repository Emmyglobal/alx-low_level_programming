#include "lists.h"

/**
 * free_listint_safe -> frees a list
 * @h: pointer to the address of the first node
 *
 * Return: size of the list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast, *tmp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	slow = *h;
	fast = *h;

	while (slow != NULL)
	{
		count++;
		tmp = slow;
		slow = slow->next;

		if (fast != NULL && fast->next != NULL)
		{
			fast = fast->next->next;

			if (slow == fast)
			{
				free(tmp);
				break;
			}
		}

		free(tmp);
	}
	*h = NULL;

	return (count);
}
