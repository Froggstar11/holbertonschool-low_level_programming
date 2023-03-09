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
int i, j, number1 = 0, number2 = 0, negative1 = 0, negative2 = 0;
for (i = 0; argv[1][i] != '\0'; i++)
{
if (argv[1][i] == 45)
negative1 = 1;
else
{
number1 *= 10;
number1 += argv[1][i] - 48;
}
}
for (j = 0; argv[2][j] != '\0'; j++)
{
if (argv[2][j] == 45)
negative2 = 1;
else
{
number2 *= 10;
number2 += argv[2][j] - 48;
}
}
if (negative1 == 1)
number1 = -number1;
if (negative2 == 1)
number2 = -number2;
printf("%d\n", number1 * number2);
}
return (0);
}
