#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - concatenate two string.
 * @dest: a pointer of char type.
 * @src: a pointer of char type.
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i;
int size = strlen(src);
int destSize = strlen(dest) - 1;
for (i = 0; i < size; i++)
{
dest[destSize] = src[i];
destSize++;
}
return (dest);
}
