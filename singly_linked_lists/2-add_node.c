#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new node at hte beginning of a list_t.
 * @head: an array of pointer of list_t type.
 * @str: a string to be duplicated in the new node.
 * Return: the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *newNode = NULL;
newNode = (list_t *)malloc(sizeof(list_t));
if (newNode != NULL)
return (NULL);
newNode->str = strdup(str);
newNode->len = strlen(str);
newNode->next = *head;
*head = newNode;
return (newNode);
}
