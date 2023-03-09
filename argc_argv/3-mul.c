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


int i = 0; 
 while (argv+1++)
{
printf("%d", argv[1][i]);
i++;
}
printf("%d", i);
}
return (0);
}
