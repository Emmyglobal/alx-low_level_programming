#include "lists.h"
/**
 * ist_len -> Returns the number elements
 * @h: the number of elements
 * 
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        h = h->next;
        count++;
    }
    return (count);
}