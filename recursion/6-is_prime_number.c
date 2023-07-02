#include "main.h"
#include <stdio.h>
#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - find prime number.
 * @n: an int.
 * Return: an int.
 */
int is_prime_number(int n)
{
if ((n > 1) && (n % n == 0) && (n % 1 == 0))
return (1);
else
return (0);
}
