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
  char **p = NULL;
  int size = strlen(s);
  for (i = 0; i < size; i++)
    {
      if (s[i] == c)
	{
	*p = s[i];
	}
    }
  return (p);
}
