#include <stdio.h>
#include "main.h"
/**
 * main - imprimir
 *
 * Return: Always 0 (return)
 **/
void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = n; n < 97; i--)
{
if (i != n)
printf(", ");
printf("%i", i);
}  
}
else if (n < 98)
{
for (i = n; n > 97; i++)
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
