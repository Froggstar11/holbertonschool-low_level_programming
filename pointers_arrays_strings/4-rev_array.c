#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i;
int count = n - 1, aux;
for (i = 0; i < n / 2; i++)
{
aux = a[i];
a[i] = a[count];
a[count] = aux;
count--;
}
}
