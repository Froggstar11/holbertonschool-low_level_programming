#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a double list.
 * @head: an array of pointers to a dobulelist node.
 * @n: varaible of the node.
 * Return: the address of the new element.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *position = *head;
dlistint_t *newNode = malloc(sizeof(dlistint_t));
if (newNode == NULL)
return (NULL);
newNode->n = n;
if (*head != NULL)
{
for (; position != NULL; )
{
if (position->next == NULL)
{
position = *head;
position->next = newNode;
newNode->prev = position;
newNode->next = NULL;
}
}
}
else
{
newNode->prev = NULL;
newNode->next = NULL;
*head = newNode;
return (last);
}
return (newNode);
}
