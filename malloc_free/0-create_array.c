#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates and initializes an array.
 * @size: an unisgned int.
 * @c: a char.
 *
 * Return: a char.
 */
char *create_array(unsigned int size, char c)
{
if (size == 0)
{
return (0);
}
int *p = (int*)malloc(size * sizeof(char));
p[0] = c;
if (p == NULL)
{
return (NULL);
}
else
{
return (p);
}
}
