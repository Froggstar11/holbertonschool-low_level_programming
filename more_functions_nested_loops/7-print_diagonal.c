#include "main.h"
/**
 * print_diagonal - check the code
 * @n: an int.
 * Return: void.
 */
void print_diagonal(int n);
{
int i, j;
int count = 0;
if (n <= 0)
_putchar('\n');
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j <= count; j++)
_putchar(32);
_putchar(92);
_putchar('\n');
}
}
}
