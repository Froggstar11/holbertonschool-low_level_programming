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
int sizeSrc = strlen(src); 
for (i = n-1; i >= 0; i++)
{

dest[sizeDest] = src[i];
sizeDest++;
}
 if (n <= sizeSrc)
   {
     dest[sizeDest+1] = NULL;
   }
 else if (n > sizeSrc)
   {
     dest[sizeDest+1] = '\0';
}
return (dest);
}
