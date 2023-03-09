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
char *p1 = argv+1;
//char *p2 = argv+2;
int i = 0; 
while (p2++)
{
  printf("%s", argv[1][i];
	 i++;
}
printf("%d", i);
}
return (0);
}
