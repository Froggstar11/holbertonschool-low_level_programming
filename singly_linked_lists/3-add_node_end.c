#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the en of a list_t.
 * @head: a pointer of struct type.
 * @str: a string.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *lastNode = NULL;
list_t *position = NULL;
lastNode = malloc(sizeof(list_t));
if (lastNode == NULL)
return (NULL);
lastNode->str = strdup(str);
lastNode->len = strlen(str);
lastNode->next = NULL;
if (*head == NULL)
{
*head = lastNode;
return (lastNode);
}
position = *head;
for (; position->next != NULL; )
position = position->next;
position->next = lastNode;
return (position);
}
