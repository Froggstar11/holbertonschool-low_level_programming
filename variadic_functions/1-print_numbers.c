#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
/**
 * sum_them_all - prints numbers, followed by a new line.
 * @n: an int
 * @separator: a pointer of char type.
 * Return: void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list list;
va_start(list, n);
for (i = 0; i < n; i++)
{
printf("%i", va_arg(list, int));
if (i != n - 1)
printf("%s", separator);
}
va_end(list);
printf("\n");
}
