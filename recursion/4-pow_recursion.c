#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - check the code
 * @x: an int.
 * @y: an int.
 * Return: an int.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
else
{
return (x * _pow_recursion(x, y -1);
}
}
