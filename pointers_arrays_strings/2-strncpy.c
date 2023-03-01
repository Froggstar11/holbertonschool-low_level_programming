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
size_t i;
int sizeDest = strlen(dest);
size_t number = n;
 printf("number : %lu", number);
for (i = 0; i < number; i++)
{
dest[sizeDest] = src[i];
sizeDest++;
}
return (dest);
}
