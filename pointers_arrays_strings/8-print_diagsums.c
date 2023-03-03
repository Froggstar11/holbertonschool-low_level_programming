#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square.
 * @a: a pointer of char type.
 * @size: an int.
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
int condition1 = 0;
int condition2 = size - 1;
int sum1 = 0;
int sum2 = 0;
int i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (i == condition1 && j == condition1)
{
  sum1 += *( *(a + i) + j) );
condition1++;
}
if (i == condition2 && j == condition2)
{
  sum2 += *( *(a + i) + j) );
condition2--;
}
}
}
printf("%d, %d", sum1, sum2);
}
