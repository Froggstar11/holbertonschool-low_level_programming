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
int size1 = strlen(dest) + 1;  
int size2 = strlen(src);
int i, count = 0; 
for (i = size1; i < size2; i++)
{
dest[i] = src[count];
count++;
}
dest[i] = '\0';
return (dest); 
}
