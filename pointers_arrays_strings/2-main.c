#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
  char *s1 = "HOLA";
  char *s2 = " COMO estas?!?";
  char *p = _strncpy(s1, s2, 3);
  printf("%s", p);
  return (0);
}
