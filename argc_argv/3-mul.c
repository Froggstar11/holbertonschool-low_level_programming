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
char firstNumberS[] = argv[1];
char secondNumberS[] = argv[2];
int sizeFirst = strlen(firstNumber);
int sizeSecond = strlen(secondNumber);
int i, j;
int number1;
int number2;
int convert;
for (i = 0; i < sizeFirst; i++)
{
convert = (((int)firstNumbers[i]) - '0');
number1 *= 10;
number1 += convert;
}
for (j = 0; j < sizeSecond; j++)
{
convert = (((int)secondNumber[j]) - '0');
number2 *= 10;
number2 += convert;
}
printf("%d", number1 * number2);
}
return (0);
}
