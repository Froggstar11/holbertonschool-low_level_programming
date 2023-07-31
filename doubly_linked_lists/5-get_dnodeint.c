#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a double list.
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
return(position);
}
