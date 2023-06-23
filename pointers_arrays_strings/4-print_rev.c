#include "main.h"

/**
 * print_rev - prints a string in reverse.
 * @s: a pointer to a char type
 * Return: void.
 */
void print_rev(char *s)
{
  int i;
  int size = 0;
  for (i = 0; s[i] != '\0'; i++)
    size++;
  for (i = size - 1; i >= 0; i++)
    {
      _putchar(s[i]);
    }
}
