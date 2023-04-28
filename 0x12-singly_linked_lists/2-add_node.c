#include "lists.h"

/**
 * _strlen - Function that gets length of the string
 * @s: string
 * Return: length of the string
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node_to_be_added = malloc(sizeof(list_t));

	if (node_to_be_added == NULL)
	{
		return (NULL);
	}
	node_to_be_added->str = strdup(str);
	if (node_to_be_added->str == NULL)
	{
		free(node_to_be_added);
		return (NULL);
	}
	node_to_be_added->next = *head;
	*head = node_to_be_added;
	return (node_to_be_added);
}
