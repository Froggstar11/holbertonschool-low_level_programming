#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates an array of integers.
 * @min: an int.
 * @max: an int.
 * Return: a pointer of int type or NULL if fails.
 */
int *array_range(int min, int max)
{
int *p = NULL;
int i, count = 0;
if (min > max)
return (NULL);
p = malloc(((max - min) + 1) * sizeof(int));
if (p == NULL)
return (NULL);
for (i = min; i <= max; i++)
{
p[count] = i;
count++;
}
return (p);
}
