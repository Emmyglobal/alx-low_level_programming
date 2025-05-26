#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len -> counts all the elements of a dlistint_t list
 * @h: the head of the node
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
    int noOfNodes;

    noOfNodes = 0;
    while (h != NULL)
    {
        h = h->next;
        noOfNodes++;
    }

    return noOfNodes;
}