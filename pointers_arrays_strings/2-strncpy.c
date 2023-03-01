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
size_t number = n;
int limit = 96; 
int count = 0;
for (i = 0; i < number && dest[i] != '\0'; i++)
{ 
dest[limit] = src[i];
count++;
 limit--; 
}
dest[count] = '\0'; 
return (dest);
}
