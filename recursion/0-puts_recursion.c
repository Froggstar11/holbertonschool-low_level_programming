#include "main.h"

/**
 * _puts_recursion - prints a string.
 * @s: a pointer of char type.
 * Return: void.
 */
void _puts_recursion(char *s)
{
_putchar(_puts_recursion(s++));
}
