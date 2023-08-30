#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strncpy - copy two strings.
 * @dest: a pointer of char type.
 * @src: a pointer of char type.
 * @n: an int.
 * Return: a pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int size1 = strlen(dest);
int size2 = strlen(src);
int i, count = 0;
char *p = NULL;
if (n >= size2)
n = size2;
p = malloc(sizeof(char) * (size1 + n)); 
for (i = 0; i < size1; i++)
{
p[i] = dest[count];
count++;
}
count = 0;
for (; i < size1 + n; i++)
{
p[i] = src[count];
count++;
}
p[i] = '\0';
return (p);
}
