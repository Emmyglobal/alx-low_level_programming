#include "hash_tables.h"

/**
 * hash_table_print -> prints a hash table
 * 
 * @ht: hash table to be printed
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
    hash_node_t *current;
    unsigned long int i;
    int printed;

    printed = 0;
    
    if (!ht)
        return;
    
    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        current = ht->array[i];
        while (current)
        {
            if (printed)
                printf(", ");
            printf("'%s': '%s'", current->key, current->value);
            printed = 1;
            current = current->next;
        }
    }
    printf("}\n");
}