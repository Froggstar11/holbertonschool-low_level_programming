#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code.
 * @c: an int.
 * Return: 1 if c is uppercase
 */
int _isupper(int c)
{
  int i;
  for (i = 97; i <= 122;i++)
    {
      if(i == c)
	return (1);
    }
  return (0);
}
