#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"
/**
 * print_last_digit - print the last digit of n.
 * @n: an int.
 * Return: last digit of n
 **/
int print_last_digit(int n)
{
int result = n % 10;
_putchar(result + 48);
return (result);
}
