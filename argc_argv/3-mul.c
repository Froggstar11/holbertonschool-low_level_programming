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
if (argc < 3)
{
printf("Error\n");
return (0);
}
else
{
printf("%i\n", (atoi(argv[1]) * atoi(argv[2])) / 1);
}
return (0);
}
