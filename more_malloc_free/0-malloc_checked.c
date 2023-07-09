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
unsigned int *p = malloc(sizeof(unsigned int) * 1);
if (p == NULL)
printf("98");
else
*p = b;
return (p); 
}
