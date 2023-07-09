#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: an unsigned int
 * Return: othing.
 */
void *malloc_checked(unsigned int b)
{
unsigned int *p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
