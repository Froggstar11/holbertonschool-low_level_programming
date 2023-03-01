#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - check the code
 * @s1: a pointer of char type.
 * @s2: a pointer of char type.
 * Return: an int.
 */
int _strcmp(char *s1, char *s2)
{
  int i;
  int number;
  int compare1 = 0;
  int compare2 = 0;
  int size1 = strlen(s1);
  int size2 = strlen(s2);
  if (size1 >= size2)
    {
      number = size2;
    }
  else if (size1 < size2)
    {
      number = size1;
    }
  for (i = 0; i < number; i++)
    {
      if ((s1[i] >= 97 && s1[i] <= 122) || (s1[i] >= 65 && s1[i] <= 90))
	{
	  if ((s2[i] >= 97 && s2[i] <= 122) || (s2[i] >= 65 && s1[i] <= 90))
	    {
	      printf("llega");
	      compare1 = s1[i];
	      compare2 = s2[i];
	      break;
	    }
	}
    }
  return (compare1 - compare2);
}
