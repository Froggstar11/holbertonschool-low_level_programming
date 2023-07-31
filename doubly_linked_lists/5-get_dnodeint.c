#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: an array of pointers to a dobulelist node.
 * @index: index of the node.
 * Return: the address of the new element.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *position = head;
unsigned int count = 0;
if (head == NULL)
return (NULL);
while (count < index)
{
if (position->next)
position = position->next;
else
return (NULL);
count++;
}
return (position);
}
