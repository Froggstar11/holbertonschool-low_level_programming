#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value.
 * @key: the key.
 * @value: the value asociated with the key.
 * Return: 1 if it succed, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *auxiliar = NULL, *addNode = NULL;
if (ht == NULL || key == NULL)
return (0);
index = key_index((const unsigned char *)key, ht->size);
auxiliar = ht->array[index];
for (; auxiliar != NULL; )
{
if (strcmp(auxiliar->key, key) == 0)
{
free(auxiliar->value);
auxiliar->value = strdup(value);
return (1);
}
auxiliar = auxiliar->next;
}
addNode = malloc(sizeof(hash_node_t));
if (addNode == NULL)
return (0);
addNode->key = strdup(key);
addNode->value = strdup(value);
addNode->next = *head;
*head = addNode;
return (1);
}
