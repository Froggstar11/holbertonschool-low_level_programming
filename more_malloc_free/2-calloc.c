#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: an unsigned int.
 * @size: an unsigned int.
 * Return: a void pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *p = NULL;
 unsigned int i, total;
if (nmemb == 0 || size == 0)
return (NULL);
total = nmemb * size; 
p = malloc(total);
if (p == NULL)
return (NULL);
for (i = 0; i < nmemb; i++)
{
p[i] = 0;
}
return (p);
}
