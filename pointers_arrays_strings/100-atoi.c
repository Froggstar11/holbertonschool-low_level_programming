#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _atoi - convert a string to an integer.
 * @s: a pointer of char type.
 * Return: an int.
 */
int _atoi(char *s)
{
  int i, plus, minus, number;
  int firstPosition = -1;
  int size = strlen(s);
  for (i = 0; i < size; i++)
    {
      if ((s[i] - '0') >= 0 && (s[i] - '0') <= 9)
	{
	  if (firstPosition == -1)
	    {
	      firstPosition = s[i];
	    }
	  number *= 10;
	  number += s[i] - '0';
	}
      else
	{
	  if ( firstPosition == -1)
	    {
	      if (s[i] == '+')
		plus++;
	      else if (s[i] == '-')
		minus++;
	    }
	}
    }
  if ( firstPosition == -1)
    return (0);
  else if( plus >= minus)
    return (number);
  else if ( minus > plus)
    return (-1 * number);
  return (0);
}
