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
 int j = 0;
while (argv++)
{
printf("esto: %d", *argv[i]);  /*
convert = (((int)*argv[i]) - '0');
number1 *= 10;
number1 += convert;
			       */
i++;
 }
printf("%d", i);
}
return (0);
}
