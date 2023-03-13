#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: a pointer of char type.
 * @s2: a pointer of char type.
 * @n: an unisgned int.
 * Return: a pointer of char type.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int size1 = strlen(s1) + 1;
unsigned int size2 = strlen(s2) + 1;
unsigned int i;
unsigned int j = 0;
unsigned int total;
char *p;
if (n > size2)
n = size2;
if (s1 == NULL)
size1 = 1;
if (s2 == NULL)
size2 = 1;
total = size1 + n;
printf("total %d", total);
p = (char *)malloc(total);
if (p == NULL)
return (NULL);
for (i = 0; i < total; i++)
{
if (i < size1)
{
p[i] = s1[i];
}
else
{
p[i] = s2[j];
 printf("entra %c %d\n",s2[j], j); 
j += 1;
}
}
return (p);
}
