#include "lists.h"
/**
  * add_dnodeint - Adds a node to the beginning of a doubly linked list
  * @head: head of the linked list
  * @n: value to add to the list
  * Return: pointer to the element added
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
