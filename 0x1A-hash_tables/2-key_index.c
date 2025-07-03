#include "hash_tables.h"

/**
 * key_index -> Gives the index of a key
 * 
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: index at which the key/value is stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    int index;

    index = hash_djb2(key) % size;
    return (index);
}
