#include "lists.h"

/**
 * add_node -> add node at the beginning of a linked list
 * @head: head of the node containing the address of the list
 * @str: the string to be added
 */

list_t *add_node(list_t **head, const char *str)
{
    list_t *new;

    new = (list_t *)malloc(sizeof(list_t));
    if(new == NULL)
        return (NULL);
    new->str = strdup(str);
    new->len = strlen(str);
    if (new->str == NULL)
    {
        free(new);
        return (NULL);
    }
    new->next = *head;
    *head = new;

    return (new);

}