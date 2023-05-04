#include "lists.h"

/**
 * delete_nodeint_at_index -> Function that deletes at a given index
 * @head: pointer to a poiter to the first node
 * @index: The given index
 *
 * Return: 1 if successful, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev_ptr, *curr_ptr;
	
	if (*head == NULL || !*head)
		return (-1);
	curr_ptr = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(curr_ptr);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		curr_ptr = curr_ptr->next;
		if (curr_ptr == NULL)
			return (-1);
	}
	prev_ptr = curr_ptr->next;
	curr_ptr->next = prev_ptr->next;
	free(prev_ptr);
	return (1);
}
