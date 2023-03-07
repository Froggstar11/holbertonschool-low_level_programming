#include "main.h"
#include <stdio.h>

/**
 * factorial - returs the factorial of a given number.
 * @n: an int.
 * Return: an int.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (1);
}
else if (n > 1)
{
return (n * (factorial(n - 1)));
}
return (-1);
}
