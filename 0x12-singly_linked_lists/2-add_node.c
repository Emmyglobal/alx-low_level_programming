#include "lists.h"

/**
 * add_node -> add node at the beginning of a linked list
 * @head: head of the node containing the address of the list
 * @str: the string to be added
 * 
 * Return: The new node or NULL
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

    return (new);
}
