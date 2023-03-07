#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - check the code
 * @s: a pointer of char type.
 * Return: an int.
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + (_strlen_recursion(s + 1)));
}
return (0);
}
