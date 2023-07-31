#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a double list.
 * @head: an array of pointers to a dobulelist node.
 * Return: the address of the new element.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t newNode = (dlistint_t *)malloc(sizeof(dlistint_t));
if (newNode == NULL)
return (NULL);
newNode->n = n;
newNode->prev = NULL;
newNode->next = NULL;
if (*head != NULL)
{
newNode->next = *head;
newNode->prev = NULL;
(*head)->prev = newNode;
*head = newNode;
}
else
{
*head = newNode;
return (newNode);
}
return (newNode);
}
