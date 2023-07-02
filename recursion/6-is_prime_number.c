#include "main.h"
#include <stdio.h>


/**
 * find_prime - checks if the number is a prime.
 * @n: an int.
 * @y: an int.
 * Return: an int.
 */
int find_prime(int n, int y)
{
if (n <= 1)
return (0);
else if (n % y == 0 && y > 1)
return (0);
else if ((n / y) < y)
return (1);
else
return (find_prime(n, y + 1));
}
/**
 * is_prime_number - start function
 * @n: an int.
 * Return: an int.
 */
int is_prime_number(int n)
{
return (find_prime(n, 1));
}
