#include "lists.h"

/**
 * delete_nodeint_at_index -> deletes the node at index of a linked list
 * @head: pointer to the first node
 * @index: the index where the node is to be deleted
 * Return: 1 if succeeded and -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *temp;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	ptr = *head;
	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}
	while (ptr != NULL && count < index - 1)
	{
		ptr = ptr->next;
		count++;
	}
	if (ptr == NULL || ptr->next == NULL)
		return (-1);
	temp = ptr->next;
	ptr->next = temp->next;
	free(temp);
	return (1);
}
