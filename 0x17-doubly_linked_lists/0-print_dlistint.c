#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint -> prints all the elements of a dlistint_t list
 * @h: the head of the node
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
    int noOfNodes;

    noOfNodes = 0;
    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;
        noOfNodes++;
    }

    return noOfNodes;
}