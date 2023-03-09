#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - prints name.
 * @argc: an int.
 * @argv: a pointer of int array.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
int i, j;
int number = 0;
int sum = 0;
if (argc > 0)
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < 48 && argv[i][j] > 57)
{
printf("Error\n");
return (1);
}
else
{
number *= 10;
number += argv[i][j] - 48;
}
sum += number;
number = 0;
}
}
printf("%d", sum);
}
else
{
printf("0\n");
}
return (0);
}
