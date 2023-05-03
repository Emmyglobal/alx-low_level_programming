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
	listint_t *prev_ptr, *curr_ptr;

	prev_ptr = *head;
	curr_ptr = *head;

	if (*head == NULL)
		return (-1);
	else if (index == 1)
	{
		*head = curr_ptr->next;
		free(curr_ptr);
		curr_ptr = NULL;
	}
	else
	{
		while (index != 1)
		{
			prev_ptr = curr_ptr;
			curr_ptr = curr_ptr->next;
			index--;
		}
		prev_ptr->next = curr_ptr->next;
		free(curr_ptr);
		curr_ptr = NULL;
	}
	return (1);
}
