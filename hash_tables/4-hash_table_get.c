#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with the key.
 * @ht: hash table you want to add or update the key/value.
 * @key: the key we are looking for.
 * Return: the value associated with the element.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *findKey = NULL;
unsigned long int i;
if (key == NULL || ht == NULL)
return (NULL);
i = key_index((const unsigned char *)key, ht->size);
findKey = ht->array[i];
for (; findKey != NULL; )
{
if (strcmp(findKey->key, key) == 0)
return (findKey->value);
findKey = findKey->next;
}
return (NULL);
}
