#include "main.h"
#include <stdio.h>
/**
 * main - prints name.
 * @arg: an int.
 * @argv: a pointer of int array.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
  char *p = argv[0];
  int i = argc - argc;
  while(p++)
    {
      putchar(*(p + i));
      i++;
    }
  return (0);
}
