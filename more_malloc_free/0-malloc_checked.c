#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - allocates memory
 * @b: an unsigned int.
 *
 *
 * Return: void.
 */
void *malloc_checked(unsigned int b)
{
void *p = malloc(sizeof(int) * b);
if (p == NULL)
{
exit(98);
}
return (p);
}
