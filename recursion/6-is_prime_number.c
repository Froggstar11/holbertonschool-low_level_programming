#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check the code
 * @n: an int.
 * Return: an int.
 */
int is_prime_number(int n)
{
if (n == 1)
{
return (0);
}
else if (n < 0)
{
return (0);
}
else if (n % n == 0 && n % 1 == 0)
{
return (1);
}
else
{
return (0);
}
return (0);
}
