#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @s: a pointer of char type.
 * Return: an int.
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return ( _strlen_recursion(s+1));
}
return (0);
}
