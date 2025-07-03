#include "hash_tables.h"

/**
 * hash_table_set -> adds an element to the hash table.
 * 
 * @ht: hash table to add or update the key/value to
 * @key: the key
 * @value: value associated with the key
 * 
 * Return: 1 for Success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int i;
    hash_node_t *new_node, *current;
    char *copy_of_value, *copy_of_key;

    if (!ht || !*key || !value)
        return (0);

    i = key_index((const unsigned char *)key, ht->size);
    current = ht->array[i];

    /* check if the key already exists and update its value */
    while (current)
    {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value);
            current->value = strdup(value);
            return (1);
        }
    }

    /* if key doesn't exist create a new key */
    new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
        return (0);
    
    copy_of_key = strdup(key);
    copy_of_value = strdup(value);

    if (!copy_of_key || !copy_of_value)
    {
        free(new_node);
        free(copy_of_key);
        free(copy_of_value);
        return (0);
    }

    new_node->key = copy_of_key;
    new_node->value = copy_of_value;
    new_node->next = ht->array[i];
    ht->array[i] = new_node;

    return (1);
}
