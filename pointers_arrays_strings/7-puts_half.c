#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string.
 * @str: a pointer of char type.
 * Return: void.
 */
void puts_half(char *str)
{
int i;
int size = strlen(str) - 1;
for (i = size / 2; i < size; i++)
{
_putchar(str[i]);
}
_putchar('\0');
}
