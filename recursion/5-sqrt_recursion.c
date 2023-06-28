#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _sqrt(int y, int n)
{
int nextNumber = (y + n/y) / 2;
if (y*y <= n && (y+1)*(y+1) > n)
return y;
else
return _sqrt(nextNumber, n);
}
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);  
return _sqrt(1, n);
}
