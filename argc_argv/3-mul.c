#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: an int.
 * @argv: an array of char.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int first = 0;
int second = 0;
int final = 0;
if (argc < 3)
{
printf("Error\n");
return (0);
}
else
{
first = atoi(argv[1]);
second = atoi(argv[2]);
final = (first*second);
printf("%i\n", final);
}
return (0);
}
