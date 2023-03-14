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
char *p = NULL;
if (n > size2)
n = size2;
if (s1 == NULL)
size1 = 1;
if (s2 == NULL)
size2 = 1;
total = size1 + n;
p = (char *)malloc(total);
if (p == NULL)
return (NULL);
 i = 0;
 while (s1[i] != '\0')
   {
     p[i] = s1[i];
       i += 1;
   }
 while (s2[j] != '\0')
   {
     if (i > n)
       break;
     p[i] = s2[j];
     i += 1;
     j += 1;
   }
 for(i = 0; i < total; i++)
   printf("\n esto es: %c\n", p[i]);
return (p);
}
