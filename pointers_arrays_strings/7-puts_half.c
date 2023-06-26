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
int size = strlen(str);
for (i = size - 1 / 2; str[i] != '\0'; i++)
{
_putchar(s[i]);      
}
_putchar('\0');
}
