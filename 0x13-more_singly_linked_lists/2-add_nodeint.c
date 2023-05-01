#include "lists.h"

/**
 * add_nodeint -> Function that adds a new node at the beginnig of a list.
 * @head: First node
 * @n: new data
 *
 * Return: Address of new element or NULL it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_begin;
	add_begin = malloc(sizeof(listint_t));
	add_begin->n = n;
	add_begin->next = NULL;

	if (add_begin == NULL)
		return NULL;

	add_begin->next = *head;
	*head = add_begin;

	return (add_begin);
}
