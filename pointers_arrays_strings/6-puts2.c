#include "main.h"
#include <string.h>
/**
 * puts2 - prins every other character of a string, starting with the first, followed by a new line.
 * @str: a pointer of char type.
 * Return: Void.
 */
void puts2(char *str)
{
int i;
int size = strlen(str);
for (i = 0; i < size; i+2)
{
_putchar(str[i]);
}
_putchar('\n');
}
