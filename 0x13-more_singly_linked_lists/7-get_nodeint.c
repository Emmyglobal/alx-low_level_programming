#include "lists.h"

/**
 * get_nodeint_at_index -> returns the nth node of a linked list
 * @head: pointer to the first node of the list
 * @index: the position to be returned
 * Return: NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count = 0;

	if (node == NULL)
		return (NULL);
	ptr = head;
	while (ptr->next != NULL && count != index)
	{
		ptr = ptr->next;
		count++;
	}
	return (index);

}
