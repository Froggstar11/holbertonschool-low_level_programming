#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - check code.
 * @str: a pointer of char type.
 * 
 *
 * Return:a pointer of char type.
 */
char *_strdup(char *str)
{
int size = strlen(str);
int i;
char *p = (char *)malloc(sizeof(char) * size + 1);
printf("direeccion: %d\n", *str); 
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
p[i] = str[i];
}
return (p);
}
