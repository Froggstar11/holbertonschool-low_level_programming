#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr - write a function that locates a substring.
 * @haystack: a pointer of char type.
 * @needle: a pointer of char tpye.
 * Return: a pointer of char type.
 */
char *_strstr(char *haystack, char *needle)
{
  int i, j;
  int sizeHaystack = strlen(haystack);
  int sizeNeedle = strlen(needle);
  int count = 0;
  int exist = 0;
  char *p = NULL;
  if (sizeNeedle == 0)
    {
      return (haystack);
	}
  else
    {
  for (i = 0; i < sizeHaystack; i++)
    {
      for (j = 0; j < sizeNeedle; j++)
	{
	  if (haystack[i] == needle[j] && exist == 0)
	    {
	      exist = 1;
	      count++;
	    }
	}
      if (exist != 1)
	count = 0;
      if (count == sizeNeedle)
	p = &haystack[i - (sizeNeedle + 1)];
      exist = 0;
    }
  return (p);
    }
}
