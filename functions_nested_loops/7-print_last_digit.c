#include "main.h"

/**
 * print_last_digit - check the code
 * @n: an int.
 * Return: return the las digit of n.
 */
int print_last_digit(int n)
{
int lastDigit = (n % 10);
_putchar(lastDigit + 48);
return (lastDigit);
}
