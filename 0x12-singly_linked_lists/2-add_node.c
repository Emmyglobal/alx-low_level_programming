#include "lists.h"

/**
 * _strlen - Function that gets length of the string
 * @s: string
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * add_node - > Function that add new nodes to the list
 * @head: current place in the list
 * @str: string to add to the head
 * Return: pointer to current position in list
 */

list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *content;
	list_t *node_to_be_added = malloc(sizeof(list_t));

	if (str == NULL || node_to_be_added == NULL)
	{
		return (NULL);
	}
	len = _strlen(str);
	node_to_be_added->str = strdup(str);
	content = malloc((len + 1) * sizeof(char));
	if (content == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		content[i] = str[i];
	if (node_to_be_added == NULL)
	{
		free(content);
		return (NULL);
	}
	node_to_be_added->len = len;
	node_to_be_added->str = content;
	node_to_be_added->next = *head;
	*head = node_to_be_added;

	return (node_to_be_added);
}
