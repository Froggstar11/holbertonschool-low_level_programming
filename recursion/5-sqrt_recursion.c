#include "main.h"
#include <stdio.h>

/**
 * _sqrt - check the code
 *
 * Return: Always 0.
 */
int _sqrt(int y, int n)
{
  int i = n * n;
  if (i == y)
      return (n);
  else if (i < y)
    return (_sqrt(y , (n + 1)));
  return (-1);
}
int _sqrt_recursion(int n)
{  
  return _sqrt(n, 1);
}
