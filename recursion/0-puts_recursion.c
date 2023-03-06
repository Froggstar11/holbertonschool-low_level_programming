#include "main.h"

/**
 * _puts_recursion - print a string.
 * @s: a pointer of char type.
 * Return: void.
 */
void _puts_recursion(char *s)
{
  if (*s == '\0')
    {
      return;
    }
  else
    {
     _putchar(*s);
     s++;
     _puts_recursion(s);
     _putchar('\n');
    }
}
