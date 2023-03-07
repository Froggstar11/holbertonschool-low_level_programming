#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * reverse_array - reverse contents of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
int i;
int count = 0;
int newArray[1000];
for (i = n - 1; i >= 0; i--)
{
newArray[count] = a[i];
count++;
}
for (i = 0; i < n; i++)
{
a[i] = newArray[i];
}
}
