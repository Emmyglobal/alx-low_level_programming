#include "lists.h"
/**
 * *add_dnodeint_end - add a node to the end of the list
 * @head: head of the list
 * @n: value to add to the list
 * Return: pointer to the element added
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t  *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if(new == NULL)
		return NULL;
	
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return new;
	}

	temp = *head;

	while(temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new;
	new->prev = temp;

	return (new);
}
