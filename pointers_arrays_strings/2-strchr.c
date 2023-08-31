#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - locates a character in a string.
 * @s: a pointer of char type.
 * @c: a char.
 *
 * Return: a pointer of char type.
 */
char *_strchr(char *s, char c)
{
unsigned int i, size = strlen(s) + 1; 
for (i = 0; i < size; i++)
{
if (s[i] == c)
return (&(s[i]));
}
return (NULL);
}
