#include "main.h"
#include <stdio.h>
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
int firstNumber = argv[1] - '0';
int secondNumber = argv[2] - '0';
printf("%d", firstNumber * secondNumber);
}
return (0);
}
