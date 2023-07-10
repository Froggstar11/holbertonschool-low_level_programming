#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
int *p = NULL;
int i, count = 0;
if (min > max)
return (NULL);
p = malloc(((max - min) + 1) * sizeof(int));
for (i = min; i <= max; i++)
{
p[count] = i;
count++;
}
return (p);
}
