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
printf("%d", argv[1][1]);
}
printf("%d", argv[2][0]);
}
return (0);
}
