#include "hash_tables.h"

/**
 * hash_table_create -> Creates a hash table
 * 
 * @size: the size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *myHash;
    unsigned long int i;

    if (size == 0)
        return (NULL);
    
    myHash = malloc(sizeof(hash_table_t));
    if (myHash == NULL)
        return(NULL);

    myHash->size = size;

    myHash->array = malloc(sizeof(hash_node_t *) * size);
    if (myHash->array == NULL)
    {
        free(myHash);
        return (NULL);
    }

    for (i = 0; i <= size; i++)
    {
        myHash->array[i] = NULL;
    }

    return (myHash);
}
