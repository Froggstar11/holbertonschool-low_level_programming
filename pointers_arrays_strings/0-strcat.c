#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strcat - concatenates two strings.
 * @dest: a pointer of char type.
 * @src: a pointer of char type.
 * Return: a pointer ro the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
int size1 = strlen(dest);
int size2 = strlen(src);
char *p = malloc(sizeof(char) + (size1 + size2 + 1));
int i, count = 0, count2 = 0; 
if (p == NULL)
return (NULL);
for (i = 0; i < size1; i++)
{
p[i] = dest[count];
count++;
}
for (; i < size2; i++)
{
p[i] = src[i];
count2++;    
}
p[i] = '\0';
return (p); 
}
