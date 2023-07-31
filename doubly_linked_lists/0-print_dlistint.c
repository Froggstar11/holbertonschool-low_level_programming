#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a double list.
 * @h: a pointer to a dobulelist node.
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
int i;
for (i = 0; h != NULL; i++)
{
printf("%i\n", h->n);
h = h->next;
}
return (i);
}
