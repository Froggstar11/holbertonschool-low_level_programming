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
  unsigned int i, j;
  unsigned int position = 0;
  unsigned int newPosition = 0;
  unsigned int sizeS = strlen(s);
  unsigned int sizeAccept = strlen(accept);
  for (i = 0; i < sizeS; i++)
    {
      for (j = 0; j < sizeAccept; j++)
	{
	      
		  if (s[i] == accept[j])
		    {
		    position = 1;
		    }
	}
      newPosition += position;
      position = 0;
    }
  return (newPosition);
}
	   
