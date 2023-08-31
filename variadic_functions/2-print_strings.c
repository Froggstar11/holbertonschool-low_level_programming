#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>
/**
 * print_numbers - prints strings, followed by a new line.
 * @n: an int
 * @separator: a pointer of char type.
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list list; 
char *s = NULL;
va_start(list, n);
for (i = 0; i < n; i++)
{
s = va_arg(list, char *);
printf("%s", (s == NULL) ? "nil)" : s);
if (i != n - 1)
printf("%s", separator);
}
va_end(list);
printf("\n");
}
