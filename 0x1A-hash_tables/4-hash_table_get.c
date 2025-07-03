#include "hash_tables.h"

/**
 * hash_table_get -> Retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: the sought key
 * 
 * Return: value of key or NULL if key is not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int i;
    hash_node_t *current;
    
    if (!ht || !key || !*key)
        return (NULL);

    /* gets the index on the table */
    i = key_index((const unsigned char *)key, ht->size);
    current = ht->array[i];

    /* check if for the key and get the value */
    while(current)
    {
        if (strcmp(current->key, key) == 0)
        {
            return (current->value);
        }
        current = current->next;
    }

    return (NULL);
}
