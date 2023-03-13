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
char *p = (char*)malloc((sizeof(char) * size));
unsigned int i;
if (size == 0)
{
return (0);
}
if (p == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
{
p[i] = c;
}
return (p);
}
}
