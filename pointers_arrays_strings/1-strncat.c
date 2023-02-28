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
  int sizeDest = strlen(dest);
  for (i = 0; i <= n; i++)
    {
      destSrc[sizeDest] = src[i];
      sizeDest++;
    }
  return (dest);
}
  
