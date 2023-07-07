#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
char *p = NULL;
int i;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
int size = strlen(s1) + strlen(s2) + 1;
p = (char *)malloc(sizeof(char) * size);
if (p == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
if (i <= strlen(s1))
p[i] = s1[i];
else
p[i] = s2[i];
}
p[i] = '\0';
return (p);
}
