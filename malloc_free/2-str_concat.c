#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two string.
 * @s1: a pointer of char type.
 * @s2: a pointer of char type.
 * Return: a pointer of char type.
 */
char *str_concat(char *s1, char *s2)
{
char *p = NULL;
int i, count = 0, sizeTotal, size;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
size = strlen(s1);
sizeTotal = strlen(s1) + strlen(s2) + 1;
p = (char *)malloc(sizeof(char) * sizeTotal);
if (p == NULL)
return (NULL);
for (i = 0; i < sizeTotal; i++)
{
if (i < size)
p[i] = s1[i];
else
{
p[i] = s2[count];
count++;
}
}
p[i] = '\0';
return (p);
}
