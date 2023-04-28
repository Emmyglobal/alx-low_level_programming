#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * list_len - length of the list
 * @h: pointer to the structure
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
