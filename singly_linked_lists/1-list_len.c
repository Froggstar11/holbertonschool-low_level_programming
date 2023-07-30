#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - this fucntion counts the number of elements in the list.
 * @h: a pointer of struct type.
 * Return: a size_t
 */
size_t list_len(const list_t *h)
{
int i;
for (i = 0; h != NULL; i++)
h = h->next;
return (i);
}
