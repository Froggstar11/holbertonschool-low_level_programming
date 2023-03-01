#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memset - prints buffer in hexa
 * @s: a pointer of char type
 * @b: a char.
 * @n: an unsigned int.
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
  unsigned int i;
  for (i = 0; i < n; i++)
    {
      s[i] = b;
    }
  return (s);
}
