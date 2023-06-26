#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverse a string
 * @s: a pointer of char type.
 * Return: void.
 */
void rev_string(char *s)
{
int i;
char aux[20];
int count = 0;
int size = strlen(s);
for (i = size - 1; i >= 0; i++)
{
  aux[count] = s[i];
  count++;
}
*s = *aux;
}
   
