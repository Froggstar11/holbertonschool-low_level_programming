#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a double list.
 * @head: an array of pointers to a dobulelist node.
 * @n: varaible of the node.
 * Return: the address of the new element.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *newNode = malloc(sizeof(dlistint_t));
if (newNode == NULL)
  return NULL;
newNode->n = n;
if (idx == 0) {
newNode->prev = NULL;
newNode->next = *h;
if (*h != NULL)
(*h)->prev = newNode;
*h = newNode;
return newNode;
}
dlistint_t *current = *h;
unsigned int count = 0;
while (current != NULL && count < idx)
{
current = current->next;
count++;
}
if (current == NULL && count == idx)
{
dlistint_t *lastNode = *h;
while (lastNode->next != NULL)
lastNode = lastNode->next;
lastNode->next = newNode;
newNode->prev = lastNode;
newNode->next = NULL;
return newNode;
}
else if (current != NULL && count == idx)
{
newNode->prev = current->prev;
newNode->next = current;
current->prev->next = newNode;
current->prev = newNode;
return newNode;
}
else
{
free(newNode);
return NULL;
}
}
