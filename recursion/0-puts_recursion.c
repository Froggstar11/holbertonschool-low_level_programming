#include "main.h"

/**
 * _puts_recursion - prints a string.
 * @s: a pointer of char type.
 * Return: void.
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_puts_recursion(s + 1);
_putchar(*s);
}
}