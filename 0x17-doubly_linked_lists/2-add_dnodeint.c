#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *add_dnodeint -> adds a new node at the beginning
 * @head: head of the node
 * @n: data to be added
 * Return: address of the ne node or NULL
 */

 dlistint_t *add_dnodeint(dlistint_t **head, const int n)
 {
    dlistint_t *new;

    
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return NULL;
    new->prev = NULL;
    new->n = n;
    new->next = NULL;

    new->next = *head;
    if (*head != NULL)
        (*head)->prev = new;
    
    *head = new;

    return (new);
 }