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
char firstNumberS[100];
char secondNumberS[100]; 
firstNumberS[0] = *(argv[argc - 2]);
secondNumberS[argc] = *(argv[argc - 1]);
int i;
int j;
int number1;
int number2;
int convert;
for (i = 0; i < 100; i++)
{
convert = (((int)firstNumberS[i]) - '0');
number1 *= 10;
number1 += convert;
}
for (j = 0; j < 100; j++)
{
convert = (((int)secondNumberS[j]) - '0');
number2 *= 10;
number2 += convert;
}
printf("%d", number1 * number2);
}
return (0);
}
