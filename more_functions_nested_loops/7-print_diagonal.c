#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - print a diagonal
 *
 * Return: void.
 **/
void print_diagonal(int n)
{
int i, j;
int count = 1;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < count; j++)
{
_putchar(32);
}
count++;
_putchar(92);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
