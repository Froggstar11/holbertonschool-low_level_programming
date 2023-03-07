#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - check the code.
 * @n: an int.
 * Return: void.
 */
void print_to_98(int n)
{
int i;
if (n == 98)
{
printf("%d", n);
putchar('\n');
}
else if (n < 98)
{
for (i = n; i <= 98; i++)
{
if (i < 98)
printf("%d, ", i);
else if (i == 98)
printf("%d", i);
}
putchar('\n');
}
else if (n > 98)
{
for (i = n; i >= 98; i--)
{
if (i > 98)
printf("%d, ", i);
else if (i == 98)
printf("%d", i);
}
putchar('\n');
}
}
