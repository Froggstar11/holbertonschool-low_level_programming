#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters.
 * @n: an int
 * Return: an int.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int sum = 0, i;  
va_list list;
va_start(list, n);
for (i = 0; i < n; i++)
sum += va_arg(list, int);
va_end(list);
return (sum);
}
