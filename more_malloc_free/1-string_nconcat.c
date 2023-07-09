#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: a pointer of char type.
 * @s2: a pointer of char type.
 * @n> an unsigned int.
 * Return: a pointer of char type..
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int size1;
unsigned int size2;
unsigned int total;
unsigned int second;
char *p = NULL;
unsigned int i, j = 0;
if (s1 == NULL || s2 == NULL)
return (NULL);
size1 = strlen(s1);
size2 = strlen(s2);
if (n >= size2)
second = size2;
else
second = n; 
total = size1 + second + 1;
p = malloc(sizeof(char) * total);
if (p == NULL)
return (NULL);
for (i = 0; i < total; i++)
{
if (i < size1)
p[i] = s1[i];
else
{
p[i] = s2[j];
j++;
}
}
p[i] = '\0';
return (p);
}
