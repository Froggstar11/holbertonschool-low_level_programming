#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array.
 * @a: a pointer of char type.
 * @n: an int.
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if ( i != n - 1)  
printf("%i, ", a[i]);
}
}
