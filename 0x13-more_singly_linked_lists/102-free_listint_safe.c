#include "lists.h"

/**
 * free_listint_safe - Funtion that frees a linked list
 * @h: pointer to the pointer to the first node in the list.
 *
 * Return: number of elements in the free list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}
	*h = NULL;

	return (size);
}
