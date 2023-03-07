#include "main.h"
#include <string.h>
/**
 * print_rev - prints in revers a string.
 * @s: a pointer of char type.
 * Return: void.
 */
void print_rev(char *s)
{
int i;
int size = strlen(s);
for (i = size - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
