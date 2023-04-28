#include "lists.h"

/**
 * _strlen - Function that gets length of the string
 * @s: string
 * Return: length of the string
 */
list_t *add_node(list_t **head, const char *str)
{
	str->next = head;
	head = str;

	if (success)
	{
		return (**head);
	}
	else
	{
		return (NULL);
	}
}

