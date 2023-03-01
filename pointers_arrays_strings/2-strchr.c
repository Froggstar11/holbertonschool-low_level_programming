#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - check the code
 * @s: a pointer of char type.
 * @c: a char.
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
  int i;
  int j = 0;
  int exist = -1;
  char newArray[1000];
  int size = strlen(s);
  for (i = 0; i < size; i++)
    {
      if (s[i] == c)
	exist = 0;
      if (exist == 0)
	{
	newArray[j] = s[i];
      printf("newArray: %c", newArray[j]
	     }
    }
  strcpy(s, newArray);
  return (s);
}
