#include "main.h"
#include <stdio.h>
/**
 * _memcpy - a function copies memory area
 * @src: a pointer of char type.
 * @dest: a pinter of char type.
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
