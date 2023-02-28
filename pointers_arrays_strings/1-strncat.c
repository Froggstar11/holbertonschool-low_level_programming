#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - check the code
 * @dest: a pointer of char.
 * @src: a pointer of char.
 * @n: an int.
 * Return: a char.
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int number;
int sizeSrc = strlen(src); 
int sizeDest = strlen(dest);
if (n > sizeSrc)
{
number = sizeSrc;
}
else
{
number = n;
}
for (i = 0; i < number; i++)
{
dest[sizeDest] = src[i];
sizeDest++;
}
return (dest);
}
  
