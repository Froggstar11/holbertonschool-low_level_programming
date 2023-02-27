#include "main.h"
#include <string.h>
/**
 * puts_half - prints half oa string, followed by a new line.
 * @str: a pointer of char type.
 * Return: void.
 */
void puts_half(char *str)
{
int i, n;
int size = strlen(str);
if (size % 2 != 0)
{
  n = (size + 1) / 2;
}
else
{
n = size / 2;
}
for (i = n; i < size; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
