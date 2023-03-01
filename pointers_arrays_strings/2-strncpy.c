#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdint.h>
/**
 * _strncpy - check the code
 * @dest: a pointer of char type.
 * @src: a point of char type.
 * @n: an int.
 * Return: a char.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
int sizeDest = strlen(dest);
for (i = 0; i < n; i++)
{
if( sizeDest < 98)
{
dest[sizeDest] = src[i];
sizeDest++;
}
 else
   break;
}
return (dest);
}
