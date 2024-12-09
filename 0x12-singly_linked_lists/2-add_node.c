#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (list_t *)malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (!new)
		return (NULL);
	new->next = *head;
	*head = new;
	return (*new);
}
