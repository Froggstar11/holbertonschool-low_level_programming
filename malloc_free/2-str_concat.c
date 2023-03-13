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
int size1;
int size2;
int total; 
if (s1 == NULL)
size1 = 0;
else
size1 = strlen(s1);  
if (s2 == NULL)
size2 = 0;
else
size2 = strlen(s2);  
total = size1 + size2;
int i;
int j = 0;
char *p = (char *)malloc(sizeof(char) * total + 1);
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < total; i++)
{  
if( i < size1)
{
p[i] = s1[i]; 
}
else
{  
p[i] = s2[j];
j += 1; 
}
}
return (p);
}
