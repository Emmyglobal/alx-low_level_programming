#include "hash_tables.h"

/**
 * hash_djb2 -> implementing the djb2 algorithm
 * 
 * @str: size of the character string
 * Return: unsigned long int 
 */

unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
        hash = ((hash << 5) + hash) + c;
    
    return (hash);
}