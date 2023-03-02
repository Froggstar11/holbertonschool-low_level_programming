#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - check the code
 * @s: a pointer of char type.
 * @accept: a pointer of char type.
 * Return: an unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
  int i, j;
  unsigned int count = 0;
  int sizeS = strlen(s);
  int sizeAccept = strlen(Accept);
  for (i = 0; i < sizeS; i++)
    {
      for (j = 0; j < sizeAccept; j++)
	{
	  if (s[i] == accept[j] && s[i + 1] == accept[j + 1])
	    {
	      count++;
	    }
	}
    }
  return (count);
}
	    
