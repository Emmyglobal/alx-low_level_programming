#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: Head of the list
 * Return: Number of items in the linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	
	while (h)
	{
		i++;/*Iterate thru d-linked list*/
		printf("%d\n", h->n);/*print out value at each node*/
		h = h->next;
	}
	return (i);
}
