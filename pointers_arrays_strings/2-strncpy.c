#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>
/**
 * _strncpy - check the code
 * @dest: a pointer of char type.
 * @src: a point of char type.
 * @n: an int.
 * Return: a char.
 */
char *_strncpy(char *dest, char *src, int n)
{
size_t i;
for (i = 0; i < n && dest[i] != '\0'; i++)
{ 
dest[i] = src[i]; 
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
