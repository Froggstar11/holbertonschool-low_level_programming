#include "main.h"
#include <string.h>
/**
 * _puts - print a tring followed by a new line.
 * @s: a pointer of char type.
 * Return: void.
 */
void _puts(char *str)
{
int i;
int size = strlen(str);
for (i = 0; i <= size; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
