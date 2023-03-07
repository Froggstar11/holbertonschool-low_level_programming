#include "main.h"

/**
 * print_sign - check the code.
 * @n: an int.
 * Return: return 1 if n is greater than 0,
 * 0 if n is 0, and -1 if n is less than 0.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
if (n < 0)
{
_putchar('-');
return (-1);
}
_putchar(48);
return (0);
}
