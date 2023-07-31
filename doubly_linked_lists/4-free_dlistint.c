#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees a double list.
 * @head: a pointer to a dobulelist node.
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *position = head;
if (head == NULL)
free(head);
for (; position->next != NULL; )
{
head = head->next;
free(position);
position = position->next,
}
free(position);
}
