#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - creates a hast table.
 * @size: is the size of the array.
 * Return: a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i = 0;
hash_table_t *newTable = NULL;
newTable = (hash_table_t *)malloc(sizeof(hash_table_t));
if (newTable == NULL)
return (NULL);
newTable->array = malloc(sizeof(hash_table_t *) * size);
if (newTable->array == NULL)
return (NULL);
while (i < size)
{
newTable->array[i] = NULL;
i++;
}
newTable->size = size;
return (newTable);
}
