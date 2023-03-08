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
char firstNumberS[0] = argv[argc - 2];
char secondNumberS[0] = argv[argc - 1];
int sizeFirst = strlen(firstNumberS);
int sizeSecond = strlen(secondNumberS);
int i, j;
int number1;
int number2;
int convert;
for (i = 0; i < sizeFirst; i++)
{
convert = (((int)firstNumberS[i]) - '0');
number1 *= 10;
number1 += convert;
}
for (j = 0; j < sizeSecond; j++)
{
convert = (((int)secondNumberS[j]) - '0');
number2 *= 10;
number2 += convert;
}
printf("%d", number1 * number2);
}
return (0);
}
