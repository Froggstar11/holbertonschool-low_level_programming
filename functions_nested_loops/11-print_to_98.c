#include <stdio.h>
#include "main.h"
/**
 * main - prints the number folowed by a coma and space to reach 98.
 * @n: an int.
 * Return: void.
 **/
void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = n; i > 97; i--)
{
if (i != n)
printf(", ");
printf("%i", i);
}
}
else if (n < 98)
{
for (i = n; i < 99; i++)
{
if (i != n)
printf(", ");
printf("%i", i);
}
}
else if (n == 98)
{
printf("98");
}
printf("\n");
}
