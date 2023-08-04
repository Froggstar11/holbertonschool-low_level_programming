#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: hash table you want to add or update the key/value.
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *auxiliar = NULL, *position = NULL;
unsigned long int i = 0;
if (nt != NULL)
{
for (i = 0; i < ht->size; i++)
{
auxiliar = ht->array[i];
for (; auxiliar != NULL; )
{
position = auxiliar->next;
free(auxiliar->key);
free(auxiliar->value);
free(auxiliar);
auxiliar = position;
}
}
free(ht->array);
free(ht);
}
}
