#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: a pointer of list_t type.
 * Return: void.
 */
void free_list(list_t *head)
{
list_t *position = head;
for (; head != NULL; )
{
head = head->next;
free(position->str);
free(position);
position = head;
}
}
