#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 * @head: a pointer to a dobulelist node.
 * Return: an int.
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *position = head;
int sum = 0;
if (position == NULL)
return (0);
for (; position != NULL; )
{
sum += position->n;
position = position->next;
}
return (sum);
}
