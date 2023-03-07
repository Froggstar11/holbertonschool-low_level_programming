#include "main.h"
#include <stdio.h>
/**
 * _memcpy - a function copies memory area
 * @src: a pointer of char type.
 * @dest: a pinter of char type.
 * @n: an unsigned int.
 * Return: char.
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
