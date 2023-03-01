#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * string_toupper - change all characters lowercase to uppercase of a string
 * @s: a pointer of char type.
 * Return: a char.
 */
char *string_toupper(char *s)
{
int i;
int convert;
int size = _strlen(s);
for ( i = 0; i < size; i++)
{
if (s[i] >= 97 && s[i] <= 122)
{
convert = s[i] - 32;
s[i] = convert;
}
}
return (s);
}
