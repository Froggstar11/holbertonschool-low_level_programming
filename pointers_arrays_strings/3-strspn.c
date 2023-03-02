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
  int i, j, z, x, d;
  unsigned int count = 0;
  int sizeS = strlen(s);
  int aparition[100];
  int sizeAccept = strlen(accept);
  for (z = 0; z < 100; z++)
    {
      for (x = 0; x < sizeS; x++)
	{
	  if ( aparition[z] != s[x])
	  aparition[z] = s[x];
	}
    }
  for (i = 0; i < sizeS; i++)
    {
      for (j = 0; j < sizeAccept; j++)
	{
	  if (s[i] == accept[j])
	    {
	      for ( d = 0; d < 100; d++)
		{
		  if (s[i] != aparition[d])
		    count++;
		}
	    }
	}
    }
  return (count);
}
	   
