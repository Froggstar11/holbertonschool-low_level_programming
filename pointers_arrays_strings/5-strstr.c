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
  int first = -1;
  char *p;
  for (i = 0; i < sizeHaystack; i++)
    {
      for (j = 0; j < sizeNeedle; j++)
	{
	  if (haystack[i] == needle[j])
	    {
	      if (first == -1)
		first = i;
	      exist = 1;
	      count++;
	    }
	}
      if (exist != 1)
	count = 0;
      if (count == sizeNeedle)
	p = &haystack[first];
    }
  if (first == -1)
    p = NULL;
  return (p);
    }
