#include "lists.h"

/**
 * *add_node_end - > A function that add node at the end of a list.
 * @head: The first node
 * @str: String inside a node
 * Return:  the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *another_node = *head;
	unsigned int len = 0;
	
	while (str[len])
		len++;
	new = malloc(sizeof(list_t));

	if (!new)
		return NULL;
	
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (head == NULL)
	{
		*head = new;
		return (new);
	}

	while (another_node->next)
		another_node->next;
	
	another_node->next = new;

	return (new);
}
