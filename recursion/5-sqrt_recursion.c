#include "main.h"
#include <stdio.h>

/**
 * _sqrt - calculate the sqrt of n.
 * @y: an int
 * @n: an int.
 * Return: int.
 */
int _sqrt(int y, int n)
{
int i = n * n;
if (i == y)
return (n);
else if (i < y)
return (_sqrt(y, (n + 1)));
return (-1);
}
/**
 * _sqrt_recursion - start function.
 * @n: an int.
 * Return: an int.
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
