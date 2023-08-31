#include "main.h"
#include <stdio.h>

/**
 * _memcpy - fills memory with a constant byte.
 * @dest: a pointer of char type.
 * @src: a pointer of char type.
 * @n: an unsigned int.
 * Return: a pointer of char type.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
