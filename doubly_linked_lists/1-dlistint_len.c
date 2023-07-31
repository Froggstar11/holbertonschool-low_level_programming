#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - counts the number of elemnets in a double linked list.
 * @h: a pointer to a dobulelist node.
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
int i;
for (i = 0; h != NULL; i++)
h = h->next;
return (i);
}
