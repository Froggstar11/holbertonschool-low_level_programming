#include <stdio.h>
#include "main.h"
/**
 * print_triangle - pprints a triangle
 * @size: an int.
 * Return: void.
 **/
void print_triangle(int size)
{
int i;
int j;
int cont = size;
if (size <= 0)
_putchar('\n');
else
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (j >= cont)
{
_putchar(35);
cont--;
}
_putchar(32); 
}
_putchar('\n');
}
}
}
