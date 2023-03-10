#include "main.h"
#include <string.h>
/**
 * findRoot - check code.
 * Description: ' calculates the natural square root of n'
 * @i: an int;
 * @j: an int;
 * @n: an int;
 * Return: an int.
 */
int findRoot(int i, int j, int n)
{  
if (i <= j)
{
if ((i * i == n))
{
return (i);
}
else if (i * i < n)
{
return (findRoot(i + 1, j, n));
}
}
return (i);
}
/**
 * _sqrt_recursion - check the code
 * Description: 'send n to findRoot'
 * @n: an int.
 * Return: an int.
 */
int _sqrt_recursion(int n)
{
if (n > 0)
return (findRoot(0, n, n));
else
return (-1);
}


