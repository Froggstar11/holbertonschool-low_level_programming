#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - gives you the index of a key.
 * @key: the key.
 * @size: is the size of the array.
 * Return: the index at which the key/value pair should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index = hash_djb2(key);
return (index % size);
}
