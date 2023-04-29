#include "lists.h"

/**
 * free_list - >  function that frees a list_t list.
 * @head: The firrst node on the list.
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *node = head;

	while (node != NULL)
	{
		list_t *next = node->next;

		free(node->str);
		free(node);
		node = next;
	}
}
