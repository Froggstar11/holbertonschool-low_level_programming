#include "main.h"
#include <stdio.h>
/**
 * whatsmyname - prints name.
 * @arg: an int.
 * @argv: a pointer of int array.
 * Return: void.
 */
void whatsmyname(int argc, char *argv[])
{
  char *p = argv[0];
  int i = argc - argc;
  while(p++)
    {
      _putchar(*(p + i));
      i++;
    }
}
