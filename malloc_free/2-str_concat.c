#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: a pointer of char type.
 * @s2: a pointer of char type.
 *
 * Return: a pointer of char type.
 */
char *str_concat(char *s1, char *s2)
{
int size1 = strlen(s1);
int size2 = strlen(s2);
int total = size1 + size2;
int i;
char *p = (char *)malloc(sizeof(char) * total + 1);
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < total - 1; i++)
{
if( i < size1)
{
p[i] = s1[i];
}
else
{
p[i] = s2[i];
}
}
return (p);
}
