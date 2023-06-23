#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse.
 * @s: a pointer to a char type
 * Return: void.
 */
void print_rev(char *s)
{
  int i;
  int size = strlen(s);
  for (i = size - 1; i >= 0; i++)
    {
      _putchar(s[i]);
    }
}
