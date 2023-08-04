#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value.
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i, boolean = 1;
hash_node_t *auxiliar = NULL;
if (ht != NULL)
{
printf("{");
for (i = 0; i < ht->size; i++)
{
auxiliar = ht->array[i];
for (; auxiliar != NULL; )
{
if (boolean == 1)
boolean = 0;
else
printf(", ");
printf("'%s': '%s'", auxiliar->key, auxiliar->value);
auxiliar = auxiliar->next;
}
}
printf("}\n");
}
}
