#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - check the code
 * @n: an int.
 * Return: an int.
 *
 * findRoot - check code.
 * @i: an int;
 * @j: an int;
 * @n: an int;
 * Return: an int.
 */
int findRoot(int i, int j, int n)
{
if (i <= j)
{
int mid = (i + j) / 2;
if ((mid * mid == n))
{
return (mid);
}
else if (mid * mid < n)
{
return (findRoot(mid + 1, j, n));
}
else
{
return (findRoot(i, mid / 2, n));
}
}
return (i);
}

int _sqrt_recursion(int n)
{
if (n > 0)
return (findRoot(0, n, n));
else
return (-1);
}


