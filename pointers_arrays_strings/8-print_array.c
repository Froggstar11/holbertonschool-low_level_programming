#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @n: an int.
 * @a: a pointer of int type.
 * Return: void.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d, ", a[i]);
if (i != n - 1)
{
printf("%d, ", a[i]);
}
else if (i == n - 1)
{
printf("%d", a[i]);
}
}
_putchar('\n');
}
