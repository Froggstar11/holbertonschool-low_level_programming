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
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
int i;
int j;
 int number1 = 0;
 int number2 = 0;
for (i = 0; argv[1][i] != '\0'; i++)
{
number1 *= 10;
number1 += argv[1][i] - 48;
}
for (j = 0; argv[2][j] != '\0'; j++)
{
number2 *= 10;
number2 += argv[2][j] - 48;
}
}
printf("%d\n", number1 * number2);
return (0);
}
