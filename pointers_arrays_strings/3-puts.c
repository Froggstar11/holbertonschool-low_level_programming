#include "main.h"
/**
 * _puts - prints a string.
 * @str: a pointer of char type.
 * Return: void.
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\0');
}
