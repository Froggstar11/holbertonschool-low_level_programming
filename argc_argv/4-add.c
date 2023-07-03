#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - check the code
 * @argc: an int.
 * @argv: an array of char.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i, j, count, result = 0;
if (argc == 1)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if(!(isdigit(argv[i][j])))
{
printf("Error\n");
return (1);
}
}
count = atoi(argv[i]);
result += count;
}
printf("%d\n", result);
}
return (0);
}
