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
  int count2 = 0;
  unsigned int count = 0;
  int sizeS = strlen(s);
  int sizeAccept = strlen(accept);
  for (i = 0; i < sizeS; i++)
    {
      for (j = 0; j < sizeAccept; j++)
	{
	      
		  if (s[i] == accept[j] && count2 == 0)
		    {
		    count++;
		    count2++;
		    }
		  printf("numero: %c, aparece: %d", s[i], count2);
	}
      count2 = 0;
	
    }
  return (count);
}
	   
