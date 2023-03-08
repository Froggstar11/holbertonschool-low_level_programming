#include "main.h"
#include <stdio.h>
/**
 * whatsmyname - prints name.
 * @arg: an int.
 * @argv: a pointer of int array.
 * Return: void.
 */
void whatsmyname(char *argv[])
{
  char *p = argv[0];
  int i = 0;
  while(p++)
    {
      putchar(*(p + i));
      i++;
    }
}
